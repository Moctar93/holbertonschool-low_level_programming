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
		printf("The number is positive");
	else if n == 0
		printf("The number is zero");
	else n > 0 
		printf("The number is negative");
	return (0);
}
