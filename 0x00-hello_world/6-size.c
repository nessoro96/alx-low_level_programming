#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
printf("size of int:%lu bytes(s)\n",(unsigned long) sizeof(a));
printf("size of long int:%lu bytes(s)\n",(unsigned long) sizeof(b));
printf("size of long long int:%lu bytes(s)\n",(unsigned long) sizeof(c));
printf("size of char:%lu bytes(s)\n",(unsigned long) sizeof(d));
printf("size of float:%lu bytes(s)\n",(unsigned long) sizeof(f));
return (0);
}
