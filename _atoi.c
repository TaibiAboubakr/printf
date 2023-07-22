#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to a string
 * Return: an integer
 */
int _atoi(char *s)
{
unsigned int i = 0, res = 0, sign = 1, c = 0;

while (s[i] == '-' || s[i] == '+' || s[i] == ' ' || (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
{
i++;
c++;
}
else if (s[i] == '\0')
break;
else
i++;
}
sign = (c % 2 == 0) ? 1 : -1;
if (s[i] == '0' && (s[i + 1] == 'X' || s[i + 1] == 'x'))
i++;
if (s[i] == 0)
i++;
while (s[i] >= '0' && s[i] <= '9')
{
res = res * 10 + (s[i] - '0');
i++;
}
res *= sign;
return (res);
}
