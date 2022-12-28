/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:20:37 by abaltaza          #+#    #+#             */
/*   Updated: 2022/12/28 12:20:43 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Function name ft_lstsize
Prototype int ft_lstsize(t_list *lst);
Turn in files -
Parameters lst: The beginning of the list.
Return value The length of the list
External functs. None
Description Counts the number of nodes in a list.

give me the code, the main and the explanation line by line

int ft_lstsize(t_list *lst)
{
    int size;

    size = 0;
    while (lst != NULL)
    {
        size++;
        lst = lst->next;
    }
    return (size);
}

int main(void)
{
    int size;
    t_list *head;

    head = malloc(sizeof(t_list));
    head->data = 5;
    head->next = NULL;

    size = ft_lstsize(head);
    printf("List size is %d\n", size);
    return (0);
}

/* ft_lstsize takes a list 'lst' as a parameter and returns the size of the list (i.e. the number of nodes in the list). The main creates a single node list and passes it to ft_lstsize, which returns the size of the list. The size is then printed to the console. */

now line by line of the code

int ft_lstsize(t_list *lst) //Declares a function ft_lstsize which takes a list 'lst' as a parameter
{
    int size; //Declares an integer variable 'size'

    size = 0; //Sets 'size' to 0
    while (lst != NULL) //Loops through the list until it reaches the end
    {
        size++; //Increments 'size'
        lst = lst->next; //Moves to the next node
    }
    return (size); //Returns the size of the list
}

int main(void) //Declares main function
{
    int size; //Declares an integer variable 'size'
    t_list *head; //Declares a pointer 'head' to a list

    head = malloc(sizeof(t_list)); //Allocates memory for a list node
    head->data = 5; //Sets the data value of the node to 5
    head->next = NULL; //Sets the pointer to the next node to NULL

    size = ft_lstsize(head); //Calls the ft_lstsize function and stores the returned value in 'size'
    printf("List size is %d\n", size); //Prints the size of the list
    return (0); //Returns 0
}
