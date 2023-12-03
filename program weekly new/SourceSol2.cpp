#include "stdio.h"
int main() {
	int x, y, z ,m, n;
	scanf_s("%d %d %d", &x, &y, &z);
	if (x >= y)
	{
		m = x;
	}
	else { m = y; }
	if (z >= m)
	{
		m = z;
	}
	if (x <= y)
	{
		n = x;
	}
	else { n = y; }
	if (z <= n)n = z;

	printf("%d",m+n);
}
