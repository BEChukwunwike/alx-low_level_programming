#include "main.h"

/**
 *jack_bauer - prints minutes
 */

void jack_bauer(void);
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minutes++)
		{
			_putcher((hour / 10) + '0');
			_putcher((hour % 10) + '0');
			_putcher(':');
			_putcher((minute / 10) + '0');
			_putcher((minutes % 10) + '0');
			_putcher('\n');
		}
	}
}
