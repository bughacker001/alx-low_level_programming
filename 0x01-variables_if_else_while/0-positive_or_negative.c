#!/bin/bash
<<<<<<< HEAD

#include <studio.h>
#include <stdlib.h>
#include <time.h>

/**  
 *   main - Determine if a number is positive or negative
 *
 *   Return: 0 on success
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes here */
	if ( n < 0 )
	{
		printf("%d is %s\n", n, "negative");
	}
	else if ( n > 0 )
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		printf("%d is %s\n", n, "zero")
	}
	return (0);
=======
#include <studio.h>

#include <stdlib.h>

#include <time.h>

/**  

 *   main - Determine if a number is positive or negative

 *

 *   Return: 0 on success

 */

int main(void)

{

	int n;	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* my code goes here */

	if ( n < 0 )

	{

		printf("%d is %s\n", n, "negative");

	}

	else if ( n > 0 )

		printf("%d is %s\n", n, "positive");

	}

	else

	{

		printf("%d is %s\n", n, "zero")

	}

	return (0);

>>>>>>> fee9739e3195840409c1b6906434438eb2dde62d
}
