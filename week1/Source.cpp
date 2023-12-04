#include<stdio.h>
int main()
{
	int x, y, z;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);
	if (x <= y && x <= z && y <= z)
	{
		printf("%d", x+z);
	}
	else if (x <= y && x <= z && z<=y)
	{
		printf("%d", x + y);
	}
	else if (y <= x && y <= z && x <= z)
	{
		printf("%d", y + z);
	}
	else if (y <= x && y <= z && z<=x)
	{
		printf("%d", x + y);
	}
	else if (z <= x && z <= y && y <= x)
	{
		printf("%d", z + x);
	}
	else if (z <= x && z <= y && x <= y)
	{
		printf("%d", z + y);
	}
	return 0;
}
