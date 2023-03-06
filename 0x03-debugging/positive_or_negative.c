#include "main.h"
/**
 * postive_or_negative - check if n is +ve ,-ve or 0
 *
 * @i: number to be checked
 * return: nothing on success
 */

void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
}
