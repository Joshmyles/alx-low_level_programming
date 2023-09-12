#include "main.h"
#include <stdio.h>

/*comment*/void print_to_98(int n)/*comment*/
{
if (n <= 98) {
for (int i = n; i <= 98; i++) {
printf("%d", i);
if (i < 98) {
printf(", ");
}
}
}
else
{
for (int i = n; i >= 98; i--) {
printf("%d", i);
if (i > 98) {
printf(", ");
}
}
}
printf("\n");
}
