#include <stdio.h>
#include <stdlib.h>
/**
 * sturct node- linked list node structure
 * @data: integer data stored in the node
 * @link: pointer to the next node
 * Description: linked list node structure
 */

struct node{
	int data;
	struct node *link;
};

/**
 *main - Entry point of the program
 */

int main(){
	struct node *head = NULL;
	head = (struct node *)malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;
	printf("%d\n", head->data);

    free(head);
	return 0;

}
