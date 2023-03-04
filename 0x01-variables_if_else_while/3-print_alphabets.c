#include <stdio.h>
/**
 * main - Entry point
 * descrption: 'print small and capital leeters'
 * return: always 0
 */
int main(void)
{char lett;

for (lett = 'a'; lett <= 'z'; lett++)
putchar(lett);

for (lett = 'A'; lett <= 'Z'; lett++)
putchar(lett);
putchar('\n');

return (0);
}
