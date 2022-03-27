/*******************************************************************************
 *
 * @Filename   :  linked_list_api.c
 *
 * @Author     :  Md Sikandar
 *
 * @Brief      :  C program to implements the linked list functionality with the
 *				  below features:
 *				  * insert at the end
 *				  * insert at the begining
 *				  * search a value in linked list
 *				  * Delete a node
 *				  * Sort a linked list
 *				  * print a list
 *
 *******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct node {
	int data;
	struct node *next;
};

/* insert at the end */
void insert_at_end(struct node **head, int val)
{
	struct node *new_node = (struct  node *) malloc(sizeof(struct node));
	struct node *last_node = *head;

	if (new_node == NULL)
	{
		printf("malloc is null\n");
		return;
	}

	new_node->data = val;
	new_node->next = NULL;

	/* If its a first node */
	if (*head == NULL)
	{
		*head = new_node;
		return;
	}

	/* If its alreay have list */
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;

	return;
}

/* Insert at the begining */
void insert_at_begin(struct node **head, int val)
{
	struct node *new_node = (struct node *) malloc(sizeof(struct node));

	new_node->data = val;
	new_node->next = *head;

	*head = new_node;
}

/* Delete the node which has the given value */
void delete_node (struct node **head, int val)
{
	struct node *temp_node = *head, *prev = NULL;

	if (temp_node == NULL)
	{
		printf("linked list is empty\n");
		return;
	}

	/* if value consits by first node then delete it */
	if (temp_node != NULL && temp_node->data == val)
	{
		*head = temp_node->next;
		free(temp_node);
		return;
	}

	/* Find the value and addressed to be deleted */
	while(temp_node != NULL && temp_node->data != val)
	{
		prev = temp_node;
		temp_node = temp_node->next;
	}

	/* if value is not present */
	if (temp_node == NULL)
	{
		printf("Value : %d is not present in linked list\n", val);
		return;
	}

	printf("prev: %d and temp: %d\n", prev->data, temp_node->data);
	/* Remove the node */
	prev->next = temp_node->next;
	free(temp_node);
}

/* Search a given value in linked list */
int search_node(struct node **head, int val)
{
	struct node *current = *head;

	if (current == NULL)
	{
		printf("linked list is empty\n");
		return 1;
	}

	while (current != NULL)
	{
		if (current->data == val)
		{
			return 0;
		}
		current = current->next;
	}

	return 1;
}

void sort_list(struct node **head)
{
	struct node *current = *head, *index = NULL;
	int temp = 0;

	if (current == NULL)
	{
		printf("linked list is empty\n");
	}

	while (current != NULL)
	{
		index = current->next;
		while(index != NULL)
		{
			if (current->data > index->data)
			{
				temp = current->data;
				current->data = index->data;
				index->data = temp;
			}
			index = index->next;

		}
		current = current->next;
	}
}

/* Print the list */
void print_list (struct node *node_list)
{
	while (node_list != NULL)
	{
		printf("Data :%d\n", node_list->data);
		node_list = node_list->next;
	}

}

int main()
{
	struct node *head = NULL;

	insert_at_end(&head, 1);
	insert_at_end(&head, 2);
	insert_at_end(&head, 3);
	insert_at_begin(&head, 5);

	printf("================\n");
	print_list(head);
	delete_node(&head, 2);
	printf("===   Afeter Deleting node with value 2   ===\n");
	print_list(head);

	if (!search_node(&head, 3))
	{
		printf("Node is present in linked list\n");
	}
	else
	{
		printf("Node is not present in linked list\n");
	}

	sort_list(&head);
	printf("===   Afeter sorting list   ===\n");
	print_list(head);

	return 0;
}
