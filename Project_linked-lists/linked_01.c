#include <stdio.h>
#include <stdlib.h>
/**
 * struct node - linked list node structure
 * @data: integer data stored in the node
 * @link: pointer to the next node in the linked list
 * Description: This structure represents a node in a singly linked list
 */

struct node
{
	int data;
	struct node *link;
};
/**
 * main - Entry point of the program
 * Description: Print 3 addresses
 * Return: 0 success, 1 if memory allocation fails
 */

int main(void)
{
	struct node *head = NULL;
	struct node *second = NULL;
	struct node *third = NULL;

/*Dynamically allocate memory for three node*/
	head = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));

/*check if memory allocation succeeded*/
if (head == NULL || second == NULL || third == NULL)
{
	printf("Memeory allocation failed\n");
	return (1);
}
/*Assign data and link the first node to the second node*/

head->data = 45;
head->link = second;

/*Assign data and link the second node to the third node*/
second->data = 98;
second->link = third;

/*Assign data and link the third node to NULL*/
third->data = 3;
third->link = NULL;

/* print memory addresses of the three nodes*/
printf("Memory address of the first node: %p\n", head);
printf("Memory address of the second node: %p\n", second);
printf("Memory address of the third node: %p\n", third);

/*free the allocated memory for all the three nodes*/
free(head);
free(second);
free(third);

return (0);
}
