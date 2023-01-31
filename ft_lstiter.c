/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 18:44:19 by abaltaza          #+#    #+#             */
/*   Updated: 2022/12/28 18:44:19 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Function name ft_lstiter
Prototype void ft_lstiter(t_list *lst, void (*f)(void *));
Turn in files -
Parameters lst: The address of a pointer to a node.
f: The address of the function used to iterate on
the list.
Return value None
External functs. None
Description Iterates the list ’lst’ and applies the function
’f’ on the content of each node.

Give the function above. 

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *temp;

    temp = lst;
    while (temp != NULL)
    {
        f(temp->content);
        temp = temp->next;
    }
}

with main:

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

void ft_lstiter(t_list *lst, void (*f)(void *));

void print_string(void *str)
{
    printf("%s\n", (char *)str);
}

int main (void)
{
    t_list *node1;
    t_list *node2;
    t_list *node3;
    char *str1;
    char *str2;
    char *str3;

    str1 = "Hello";
    str2 = " World!";
    str3 = " How are you?";
    node1 = (t_list *)malloc(sizeof(t_list));
    node2 = (t_list *)malloc(sizeof(t_list));
    node3 = (t_list *)malloc(sizeof(t_list));
    node1->content = str1;
    node2->content = str2;
    node3->content = str3;
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    ft_lstiter(node1, &print_string);
    return (0);
}

explain line by line the function and the main

int main (void)
{
    t_list *node1; // Creates a pointer to a t_list type node and names it node1
    t_list *node2; // Creates a pointer to a t_list type node and names it node2
    t_list *node3; // Creates a pointer to a t_list type node and names it node3
    char *str1; // Creates a char pointer and names it str1
    char *str2; // Creates a char pointer and names it str2
    char *str3; // Creates a char pointer and names it str3

    str1 = "Hello"; // Sets the string pointed to by str1 to "Hello"
    str2 = " World!"; // Sets the string pointed to by str2 to " World!"
    str3 = " How are you?"; // Sets the string pointed to by str3 to " How are you?"
    node1 = (t_list *)malloc(sizeof(t_list)); // Allocates memory for node1
    node2 = (t_list *)malloc(sizeof(t_list)); // Allocates memory for node2
    node3 = (t_list *)malloc(sizeof(t_list)); // Allocates memory for node3
    node1->content = str1; // Sets the content of node1 to the address of str1
    node2->content = str2; // Sets the content of node2 to the address of str2
    node3->content = str3; // Sets the content of node3 to the address of str3
    node1->next = node2; // Sets the next pointer of node1 to the address of node2
    node2->next = node3; // Sets the next pointer of node2 to the address of node3
    node3->next = NULL; // Sets the next pointer of node3 to NULL
    ft_lstiter(node1, &print_string); // Calls the ft_lstiter function, passing the address of node1 and the address of print_string as parameters
    return (0); // Returns 0
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *temp; // Creates a pointer to a t_list type node and names it temp

    temp = lst; // Sets the address of temp to the address of lst
    while (temp != NULL) // Loops while temp is not NULL
    {
        f(temp->content); // Calls the f function, passing the address of the content of temp as a parameter
        temp = temp->next; // Sets the address of temp to the address of the next pointer of temp
    }
}