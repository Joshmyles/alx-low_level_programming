#include "main.h"

/*comment*/void jack_bauer(void)/*comment*/
{
    for (int hour = 0; hour < 24; hour++) {
        for (int minute = 0; minute < 60; minute++) {
            _putchar('0' + (hour / 10));       
            _putchar('0' + (hour % 10));
            _putchar(':');
	    _putchar('0' + (minute / 10));
            _putchar('0' + (minute % 10));
            _putchar('\n');
        }
    }
}
