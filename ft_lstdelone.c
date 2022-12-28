/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:49:50 by abaltaza          #+#    #+#             */
/*   Updated: 2022/12/28 12:49:53 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Function name ft_lstdelone
Prototype void ft_lstdelone(t_list *lst, void (*del)(void
*));
Turn in files -
Parameters lst: The node to free.
del: The address of the function used to delete
the content.
Return value None
External functs. free
Description Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node. The memory of
’next’ must not be freed.

give me the code for this function

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst && del)
    {
        del(lst->content);
        free(lst);
    }
}

with main

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst && del)
    {
        del(lst->content);
        free(lst);
    }
}

int main(void)
{
    t_list *node;
    node = (t_list*)malloc(sizeof(t_list));
    node->content = "Hello World!";
    node->next = NULL;

    ft_lstdelone(node, free);

    return 0;
}

with explanation line by line

#include <stdio.h>
#include <stdlib.h>

// Include the structure definition
typedef struct s_list
{
    void *content; // Pointer to the content of the node
    struct s_list *next; // Pointer to the next node
} t_list;

// Function definition
void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    // Check if lst and del are not NULL
    if (lst && del)
    {
        // Call the function del with the content of the node as parameter
        del(lst->content);
        // Free the node
        free(lst);
    }
}

// Main function
int main(void)
{
    // Create a new node
    t_list *node;
    node = (t_list*)malloc(sizeof(t_list));
    // Set the content of the node
    node->content = "Hello World!";
    // Set the next node to NULL
    node->next = NULL;

    // Call the function ft_lstdelone with the node and the function free as parameters
    ft_lstdelone(node, free);

    // Return 0
    return 0;
}
