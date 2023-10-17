#include "main.h"


/**
 * convert_int - convert the integer
 * @number: the number who will convert
 *
 * Return : void
 */
void convert_int(int number)
{
int n;

if (number == 0)
{
return;
}

n = number / 10;

convert_int(n);
write(1, number % 10 + '0', 1)
return;
}
