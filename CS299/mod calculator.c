#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int a;

	scanf("%d\n", &a);
	while(a % 2 != 0)
	{
		a = a % 2;
		printf("%d\n", &a);
	}
exit;
}