#include <stdio.h>

/*comment*/int main()/*comment*/
{
int sum = 0;
for (int i = 3; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
