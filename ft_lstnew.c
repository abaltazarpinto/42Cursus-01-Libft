/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:58:39 by abaltaza          #+#    #+#             */
/*   Updated: 2022/12/28 11:58:47 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Function name ft_lstnew
Prototype t_list *ft_lstnew(void *content);
Turn in files -
Parameters content: The content to create the node with.
Return value The new node
External functs. malloc
Description Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.

make me this function

t_list *ft_lstnew(void *content)
{
    t_list *new;

    if (!(new = (t_list*)malloc(sizeof(t_list))))
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}

explain me line by line

// Allocate memory for the new node
t_list *new;

// Check if memory was allocated, if not return NULL
if (!(new = (t_list*)malloc(sizeof(t_list))))
    return (NULL);

// Assign the content parameter to the content member of the new node
new->content = content;

// Assign the next member of the node to NULL
new->next = NULL;

// Return the new node
return (new);




int main()
{
    // declare a pointer to a t_list struct
    t_list *list;

    // call ft_lstnew with a NULL parameter
    list = ft_lstnew(NULL);

    // print out the content and next fields of the list node
    printf("list->content = %p\n", list->content);
    printf("list->next = %p\n", list->next);
    return 0;
}
