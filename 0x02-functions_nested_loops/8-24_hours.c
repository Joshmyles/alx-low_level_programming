#include "main.h"

/*comment*/void jack_bauer(void)/*comment*/
{
int hours, minutes;
for (hours = 0; hours < 24; hours++)
{
for (minutes = 0; minutes < 60; minutes++)
{
printf("%.2d:%.2d\n", hours, minutes);
}
}
}
