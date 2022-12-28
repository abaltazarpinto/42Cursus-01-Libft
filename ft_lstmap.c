/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 18:52:04 by abaltaza          #+#    #+#             */
/*   Updated: 2022/12/28 18:52:04 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name ft_lstmap
Prototype t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *));
Turn in files -
Parameters lst: The address of a pointer to a node.
f: The address of the function used to iterate on
the list.
del: The address of the function used to delete
the content of a node if needed.
Return value The new list.
NULL if the allocation fails.
External functs. malloc, free
Description Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.
*/



t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;
    t_list *temp;

    if (lst == NULL)
        return (NULL);
    new = NULL;
    while (lst)
    {
        if (!(temp = (t_list *)malloc(sizeof(t_list))))
        {
            ft_lstclear(&new, del);
            return (NULL);
        }
        temp->content = f(lst->content);
        temp->next = new;
        new = temp;
        lst = lst->next;
    }
    return (new); 
}

int main()
{
    t_list *list;
    list = (t_list *)malloc(sizeof(t_list));
    list->content = "Hello";
    list->next = NULL;

    void *(*f)(void *) = &my_function;
    void (*del)(void *) = &my_delete;

    t_list *new_list = ft_lstmap(list, f, del);
    print_list(new_list);
    return 0;
}