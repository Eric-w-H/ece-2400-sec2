#include <stdio.h>
#include "avg.h"
#include "avg3.h"

int main()
{
	int a = 10;
	int b = 400;
	int c = avg(a,b);
	int d = avg3(a,b,c);
	printf("average of %d and %d is %d\n", a,b,c);
	printf("average of %d and %d and %d is %d\n",a,b,c,d);
	return 0;
}