/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:07:02 by abaltaza          #+#    #+#             */
/*   Updated: 2022/12/28 12:07:06 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Function name ft_lstadd_front
Prototype void ft_lstadd_front(t_list **lst, t_list *new);
Turn in files -
Parameters lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list.
Return value None
External functs. None
Description Adds the node ’new’ at the beginning of the list.

give me the code for this function 

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

give the explanation line by line

void ft_lstadd_front(t_list **lst, t_list *new) // function declaration taking two parameters, the address of a pointer to the first link of the list and the address of a pointer to the node to be added to the list
{
	if (lst && new) // checks if lst and new are not NULL
	{
		new->next = *lst; // sets new node's next to the address stored in lst 
		*lst = new; // sets the address stored in lst to the new node
	}
}

give the main for this function

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int data; 
	struct s_list *next;
} t_list;

void ft_lstadd_front(t_list **lst, t_list *new);

int main(void)
{
	t_list *head = NULL;
	t_list *new;

	new = malloc(sizeof(t_list));
	new->data = 1;
	ft_lstadd_front(&head, new);

	new = malloc(sizeof(t_list));
	new->data = 2;
	ft_lstadd_front(&head, new);

	new = malloc(sizeof(t_list));
	new->data = 3;
	ft_lstadd_front(&head, new);

	while (head)
	{
		printf("%d\n", head->data);
		head = head->next;
	}
	return (0);
}

explain me the main line by line

int main(void) // main function 
{
	t_list *head = NULL; // declares a pointer to a t_list struct, and sets it to NULL
	t_list *new; // declares a pointer to a t_list struct

	new = malloc(sizeof(t_list)); // allocates memory for new
	new->data = 1; // sets new's data to 1
	ft_lstadd_front(&head, new); // calls the ft_lstadd_front function, passing the address of head and the address of new

	new = malloc(sizeof(t_list)); // allocates memory for new
	new->data = 2; // sets new's data to 2
	ft_lstadd_front(&head, new); // calls the ft_lstadd_front function, passing the address of head and the address of new

	new = malloc(sizeof(t_list)); // allocates memory for new
	new->data = 3; // sets new's data to 3
	ft_lstadd_front(&head, new); // calls the ft_lstadd_front function, passing the address of head and the address of new

	while (head) // while head is not NULL
	{
		printf("%d\n", head->data); // prints the data of the node pointed to by head
		head = head->next; // sets head to the address of the next node
	}
	return (0); // returns 0 to indicate the main function executed successfully
}
