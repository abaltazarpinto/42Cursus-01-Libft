/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:34:42 by abaltaza          #+#    #+#             */
/*   Updated: 2022/12/28 12:34:46 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Function name ft_lstlast
Prototype t_list *ft_lstlast(t_list *lst);
Turn in files -
Parameters lst: The beginning of the list.
Return value Last node of the list
External functs. None
Description Returns the last node of the list

give this code and the main and the explanation for it

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void *data;
    struct s_list *next;
} t_list;

//Function to find the last node of a linked list
t_list *ft_lstlast(t_list *lst)
{
    t_list *temp;
    temp = lst;

    //Loop till temp->next is NULL
    while (temp->next)
        temp = temp->next;
    return (temp);
}

int main(void)
{
    t_list *head;
    t_list *one;
    t_list *two;
    t_list *three;
    t_list *four;
    head = (t_list*)malloc(sizeof(t_list));
    one = (t_list*)malloc(sizeof(t_list));
    two = (t_list*)malloc(sizeof(t_list));
    three = (t_list*)malloc(sizeof(t_list));
    four = (t_list*)malloc(sizeof(t_list));
    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;
    head->data = (void*)1;
    one->data = (void*)2;
    two->data = (void*)3;
    three->data = (void*)4;
    four->data = (void*)5;
    t_list *last = ft_lstlast(head);
    printf("The last node of the list is %d\n", (int)last->data);
    return (0);
}

The main function creates a linked list of 5 nodes and calls ft_lstlast function to find the last node. ft_lstlast function takes in the head node of the list and uses a while loop to iterate through the list until the next pointer of the current node is NULL. Once the while loop terminates, the current node is returned which is the last node of the list. The main function then prints out the data of the last node.

give me the explanation line by line

The main function creates a linked list of 5 nodes and calls ft_lstlast function to find the last node. // A linked list of 5 nodes is created and a function is called to find the last node.

ft_lstlast function takes in the head node of the list and uses a while loop to iterate through the list until the next pointer of the current node is NULL. // The ft_lstlast function takes in the head node of the list and uses a while loop to iterate through the list. The loop terminates when the next pointer of the current node is NULL.

Once the while loop terminates, the current node is returned which is the last node of the list. // Once the loop terminates, the current node is returned as the last node of the list.

The main function then prints out the data of the last node. // The main function then prints out the data of the last node.

comment in the line of the code of the fucntion and main

//Function to find the last node of a linked list
t_list *ft_lstlast(t_list *lst) // Takes in the head node of the list
{
    t_list *temp; // Creates a temp node to iterate through the list
    temp = lst;

    //Loop till temp->next is NULL
    while (temp->next) // Iterates through the list until the next pointer of the current node is NULL
        temp = temp->next;
    return (temp); // Returns the current node as the last node
}

int main(void)
{
    t_list *head; // Creates head node
    t_list *one; // Creates node one
    t_list *two; // Creates node two
    t_list *three; // Creates node three
    t_list *four; // Creates node four
    head = (t_list*)malloc(sizeof(t_list)); // Allocates memory for the head node
    one = (t_list*)malloc(sizeof(t_list)); // Allocates memory for the node one
    two = (t_list*)malloc(sizeof(t_list)); // Allocates memory for the node two
    three = (t_list*)malloc(sizeof(t_list)); // Allocates memory for the node three
    four = (t_list*)malloc(sizeof(t_list)); // Allocates memory for the node four
    head->next = one; // Links head to node one
    one->next = two; // Links node one to node two
    two->next = three; // Links node two to node three
    three->next = four; // Links node three to node four
    four->next = NULL; // Sets the next pointer of node four to NULL
    head->data = (void*)1; // Sets the data of head node to 1
    one->data = (void*)2; // Sets the data of node one to 2
    two->data = (void*)3; // Sets the data of node two to 3
    three->data = (void*)4; // Sets the data of node three to 4
    four->data = (void*)5; // Sets the data of node four to 5
    t_list *last = ft_lstlast(head); // Calls ft_lstlast to find the last node of the list
    printf("The last node of the list is %d\n", (int)last->data); // Prints out the data of the last node
    return (0);
}
