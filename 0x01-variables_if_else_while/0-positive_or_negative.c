#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*comment*/int main(void)/*comment*/
{
int n;
srand(time(NULL));
n = rand() - RAND_MAX / 2;
printf("%d is ", n);
if (n > 0)
{
printf("positive\n");
}
else if (n == 0)
{
printf("zero\n");
}
else
{
printf("negative\n");
}
return (0);
}
