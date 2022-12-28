/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:14:25 by abaltaza          #+#    #+#             */
/*   Updated: 2022/12/28 13:15:02 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Function name ft_lstclear
Prototype void ft_lstclear(t_list **lst, void (*del)(void
*));
Turn in files -
Parameters lst: The address of a pointer to a node.
del: The address of the function used to delete
the content of the node.
Return value None
External functs. free
Description Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL.

make me this code 

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *next;
    t_list *node;

    if (!lst || !del)
        return;
    node = *lst;
    while (node)
    {
        next = node->next;
        del(node->content);
        free(node);
        node = next;
    }
    *lst = NULL;
}

with main

#include "libft.h"

void	del(void *content)
{
	free(content);
}

int		main(void)
{
	t_list	*lst;

	lst = ft_lstnew("Hello");
	ft_lstadd_back(&lst, ft_lstnew("World"));
	ft_lstclear(&lst, &del);
	if (!lst)
		ft_putstr("OK\n");
	return (0);
}

 

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *next;
    t_list *node;

    if (!lst || !del)
        return;
    node = *lst;
    while (node)
    {
        next = node->next;
        del(node->content);
        free(node);
        node = next;
    }
    *lst = NULL;
}

One way to make this function faster is to use a tail pointer instead of looping through the entire list. If the list is doubly linked, you can use the tail pointer to quickly access the last node in the list. This way, you only have to loop through the list once in order to delete all the nodes. For example:

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *next;
    t_list *node;
    t_list *tail;

    if (!lst || !del)
        return;
    node = *lst;
    tail = node;
    while (node)
    {
        next = node->next;
        del(node->content);
        free(node);
        node = next;
    }
    while (tail->prev)
        tail = tail->prev;
    *lst = tail;
}

 

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    //declare variables 
    t_list *next;
    t_list *node;

    //check if lst or del are NULL
    if (!lst || !del)
        return;
    //set node to the address of lst
    node = *lst;
    //loop through the list
    while (node)
    {
        //set the next node to the current node's next
        next = node->next;
        //use del on the content of the current node
        del(node->content);
        //free the current node
        free(node);
        //set the current node to the next node
        node = next;
    }
    //set the pointer to the list to NULL
    *lst = NULL;
}

 

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    //declare variables 
    t_list *next;  //declare a t_list pointer called next
    t_list *node;  //declare a t_list pointer called node

    //check if lst or del are NULL
    if (!lst || !del)
        return;
    //set node to the address of lst
    node = *lst;
    //loop through the list
    while (node)
    {
        //set the next node to the current node's next
        next = node->next;
        //use del on the content of the current node
        del(node->content);
        //free the current node
        free(node);
        //set the current node to the next node
        node = next;
    }
    //set the pointer to the list to NULL
    *lst = NULL;
}

This function is used to clear an entire linked list. It takes in a pointer to a list (lst) and a pointer to a function (del), which is used to delete the content of each node in the list. First, it checks to make sure that lst and del are not NULL, and then sets the node pointer to the address of lst. It then enters a loop and sets the next node to the current node's next. It then passes the current node's content to the del function to delete the content, frees the current node, and sets the current node pointer to the next node. Finally, it sets the pointer to the list to NULL.
