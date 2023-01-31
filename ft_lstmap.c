


t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	// This is the start of the ft_lstmap function which takes three parameters: lst, f, and del.
	t_list *head;
	// This is a pointer to the head of the new list. It is initialized to NULL.
	t_list *new_node;
	// This is a pointer to the new node that is created each time the list is iterated.
	t_list *tail;
	// This is a pointer to the tail of the new list. It is initialized to NULL.
	
	if (!lst)
		return (NULL);
	// If lst is NULL, the function returns NULL.
	head = NULL;
	tail = NULL;
	// The head and tail pointers are initialized to NULL.
	while (lst)
	{
		// This loop iterates over the list lst.
		new_node = malloc(sizeof(t_list));
		// A new node is created and assigned to the new_node pointer.
		if (!new_node)
		{
			ft_lstclear(&head, del);
			// If new_node is NULL, the list is cleared and NULL is returned.
			return (NULL);
		}
		new_node->content = f(lst->content);
		// The function f is applied to the content of the node.
		new_node->next = NULL;
		// The next pointer of the new node is set to NULL.
		if (tail)
			tail->next = new_node;
		// If the tail pointer is not NULL, the next pointer of the tail node is set to the new node.
		else
			head = new_node;
		// If the tail pointer is NULL, the head pointer is set to the new node.
		tail = new_node;
		// The tail pointer is updated to point to the new node.
		lst = lst->next;
		// The lst pointer is updated to point to the next node in the list.
	}
	return (head);
