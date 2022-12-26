/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:20:09 by abaltaza          #+#    #+#             */
/*   Updated: 2022/12/13 19:33:26 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

AI

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	ft_lstlast(*lst)->next = new;
}

given this code , give a better code with explanation 

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;
	
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}

This code is better because it does not use the function ft_lstlast, which is an extra function call that is not necessary. Instead, the code uses a temporary pointer that begins at the start of the list, and then iterates through the list until it reaches the end. It then points the last node in the list to the new node being added. This is a more efficient approach because it only requires one loop, instead of two (one loop to reach the end of the list, and then another loop to add the node).

explain the last code line by line 

t_list *temp;

This line creates a new pointer of type t_list.

if (!lst || !new)
	return ;

This line checks if either the list or the new node are NULL. If either are, the function ends.

if (!*lst)
{
	*lst = new;
	return ;
}

This line checks if the list is empty. If it is, the new node is added to the list and the function ends.

temp = *lst;

This line assigns the pointer temp to the start of the list.

while (temp->next)
	temp = temp->next;

This line iterates through the list until it reaches the end. The pointer temp is updated to point to the next node in the list each time the loop runs.

temp->next = new;

This line adds the new node to the end of the list by making the next node of the last node in the list point to the new node.






#include "libft.h"

void    fs_lstadd_back(t_list **lst, t_list *new)
{
    if(!*lst)
    {
        *lst = new;
        return;
    }
    if(!new)
        return;
    ft_lstlst(*lst)->next = new;
}

/*int	main()
{
	char *result;
	t_list *head;
	t_list *new;
	t_list *new2;
	t_list *new3;
	t_list *last;
	if(!(result = malloc(sizeof(t_list))))
		return 0;
	if(!(head = malloc(sizeof(t_list))))
		return 0;
	if(!(new = malloc(sizeof(t_list))))
		return 0;
	if(!(new2 = malloc(sizeof(t_list))))
		return 0;
	if(!(new3 = malloc(sizeof(t_list))))
		return 0;
	if(!(last = malloc(sizeof(t_list))))
		return 0;
	head->content = (char *)"head";
	head->next = NULL;
	new->content = (char *)"new";
	new->next = NULL;
	new2->content = (char *)"new2";
	new2->next = NULL;
	new3->content = (char *)"new3";
	new3->next = NULL;
	last->content = (char *)"last";
	last->next = NULL;
	ft_lstadd_front(&head, new);
	ft_lstadd_front(&new, new2);
	ft_lstadd_front(&new2, new3);
	ft_lstadd_back(&new3, last);
	result = (char *)ft_lstlast(new3)->content;
	printf("%s\n", result);
	return 0;
}

cchar *result;

This line creates a pointer of type char called result.

t_list *head;
t_list *new;
t_list *new2;
t_list *new3;
t_list *last;

These lines create five pointers of type t_list called head, new, new2, new3, and last.

if(!(result = malloc(sizeof(t_list))))
	return 0;
if(!(head = malloc(sizeof(t_list))))
	return 0;
if(!(new = malloc(sizeof(t_list))))
	return 0;
if(!(new2 = malloc(sizeof(t_list))))
	return 0;
if(!(new3 = malloc(sizeof(t_list))))
	return 0;
if(!(last = malloc(sizeof(t_list))))
	return 0;

These lines allocate memory for each of the pointers. If the allocation fails, it returns 0.

head->content = (char *)"head";
head->next = NULL;

These lines assign content and a next pointer to the head node. The content is a string, and the next pointer is set to NULL.

new->content = (char *)"new";
new->next = NULL;

These lines assign content and a next pointer to the new node. The content is a string, and the next pointer is set to NULL.

new2->content = (char *)"new2";
new2->next = NULL;

These lines assign content and a next pointer to the new2 node. The content is a string, and the next pointer is set to NULL.

new3->content = (char *)"new3";
new3->next = NULL;

These lines assign content and a next pointer to the new3 node. The content is a string, and the next pointer is set to NULL.

last->content = (char *)"last";
last->next = NULL;

These lines assign content and a next pointer to the last node. The content is a string, and the next pointer is set to NULL.

ft_lstadd_front(&head, new);

This line adds the new node to the beginning of the list. The address of the head node is passed as an argument, and the new node is added to the beginning of the list.

ft_lstadd_front(&new, new2);

This line adds the new2 node to the beginning of the list. The address of the new node is passed as an argument, and the new2 node is added to the beginning of the list.

ft_lstadd_front(&new2, new3);

This line adds the new3 node to the beginning of the list. The address of the new2 node is passed as an argument, and the new3 node is added to the beginning of the list.

ft_lstadd_back(&new3, last);

This line adds the last node to the end of the list. The address of the new3 node is passed as an argument, and the last node is added to the end of the list.

result = (char *)ft_lstlast(new3)->content;

This line uses the ft_lstlast function to get the content of the last node in the list. The address of the new3 node is passed as an argument, and the content of the last node is assigned to the result pointer.

printf("%s\n", result);

This line prints the content of the last node in the list.
*/



This function can be used when adding a new node to the end of a linked list.


