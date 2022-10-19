#include <stdio.h>
#include "main.h"



/**
  * main - putchar function
  * Description: Get the character to be wrtten
  * for loop to get value
  * Return: 0.
  */
int main(void)
{

	char ch;


	for (ch = 'A' ; ch <= 'Z' ; ch++)
		_putchar(ch);

	_putchar('\n');

	return (0);
}
