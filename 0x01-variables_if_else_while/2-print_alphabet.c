#include <stdio.h>
/**
 * main - a C program to print the alphabet in lowercase.
 * Return: 0 (For Success)
 **/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');
	return (0);
}
