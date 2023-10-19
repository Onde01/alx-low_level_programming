#include <stdlib.h>
#include "lists.h"

/**
 * free_listr - frees a list
 * @head: head of the linked list
 * Return: no return
 */

void free_list(list_t *head)

{

	if (head)
	{
		free_list(head->next);
		if (head->str)
		free(head->str);
		free(head);
	}

}
