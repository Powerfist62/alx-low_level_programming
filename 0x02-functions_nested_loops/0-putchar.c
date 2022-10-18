#include <stdio.h>


/**
  * main - putchar function
  * Description: Get the character to be wrtten
  * for loop to get value
  * Return: 0.
  */
int main(void)
{

	char ch = '1';


	for (ch = '1' ; ch <= '9' ; ch++)


		putchar(ch);

	putchar('\n');

	return (0);
}
