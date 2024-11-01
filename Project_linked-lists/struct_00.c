#include <stdio.h>
#include <string.h>
/**
 * struct Person - structure for a person
 * @person1 - Person variable 1
 * @person2 - Person variable 2
 * Description: This is a structure of person variables
 */

struct Person
{
	char name[50];
	int age;
	float height;
};
/**
 * main - Entry point of the program
 * Description: prints out details of person 2
 * Return: 0 Sucess
 */
int main(void)
{
	struct Person person1;
	struct Person person2;
	/*Assign values to members of person1*/
	strcpy(person1.name, "Alisha");
	person1.age = 30;
	person1.height = 5.5;

	/*Assign values to members of person2*/
	strcpy(person2.name, "Ibrah");
	person2.age = 28;
	person2.height = 6.2;

	/*Display person2 details*/
	printf("Name: %s\n", person2.name);
	printf("Age: %d\n", person2.age);
	printf("Height: %.1f\n", person2.height);

	return (0);
}
