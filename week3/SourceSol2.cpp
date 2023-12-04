#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	while (x > 0)
	{
		printf("*");
		x -= 1;
	}

}
