#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int a;

	scanf("%i\n", a);
	while(a % 2 != 0)
	{
		a = a % 2;
		printf("%i\n", a);
	}
exit;
}