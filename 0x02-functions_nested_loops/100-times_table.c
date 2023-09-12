#include "main.h"
#include <stdio.h>

/*comment*/void print_times_table(int n)/*comment*/
{
if (n < 0 || n > 15) {
return;
}
for (int i = 0; i <= 15; i++) {
printf("%d x %d = %d\n", i, n, i * n);
}
}
