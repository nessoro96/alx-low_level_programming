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
print("size of int:%lu bytes(s)\n",(unsigned long) sizeof(a));
print("size of long int:%lu bytes(s)\n",(unsigned long) sizeof(b));
print("size of long long int:%lu bytes(s)\n",(unsigned long) sizeof(c));
print("size of char:%lu bytes(s)\n",(unsigned long) sizeof(d));
print("size of float:%lu bytes(s)\n",(unsigned long) sizeof(f));
return (0);
}
