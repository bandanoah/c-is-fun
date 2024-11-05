#include <stdio.h>
/**
 * struct car - structure representing a part of car
 * @engine: A pointer to a string representing the engine type
 */
 /* car is a structure tag*/
struct car
{
	char *engine;
} car1, car2;

/**
 * main - Entry point of the program
 * prints - engine type
 * Return: Always 0 (Success)
 */
int main(void)
{
	car1.engine = "DDis 190 Engine";
	car2.engine = "1.2 L Kappa Dual VTVT";
	printf("%s\n", car1.engine);
	printf("%s\n", car2.engine);
	return (0);
}
