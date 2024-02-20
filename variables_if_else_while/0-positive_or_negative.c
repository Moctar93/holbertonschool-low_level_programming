#include <stdio.h>
#include <time.h>
/*This program will assign a random number to the variable n
 *
 * and print whether the number stored in the variable n is positive or negative
 */
int main(void)
{
       	int n;
	stand(time(0));
	n = rand() - RAND_MAX / 2;

	if n < 0
		printf("%d is positive\n", n);
	else if n == 0
		printf("%d is zero\n", n);
	else n > 0 
		printf("%d The number is negative\n", n);
	return (0);
}
