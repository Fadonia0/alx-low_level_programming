#include <stdio.h>
#include "main.h"

/**
* main - finds and prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
	 int a, b, c;
	 int largest;

	 printf("Enter three integers separated by spaces: ");
	 scanf("%d %d %d", &a, &b, &c);

	 largest = largest_number(a, b, c);

        printf("%d is the largest number among %d, %d, and %d.\n", largest, a, b, c);

	 return 0;
}
