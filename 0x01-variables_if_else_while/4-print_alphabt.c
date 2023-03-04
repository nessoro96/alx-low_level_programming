#include <stdio.h>
/**
 * main -Entry
 * descption: 'print allphabet exept e and q'
 * return: Always (success)
 */
int main(void)
{ char e, q, lett;
e = 'e';
q = 'q';

for (lett = 'a'; lett <= 'z'; lett++)
{
if (lett != e && lett != q)
putchar(lett);
putchar('\n');
}
return (0);
}
