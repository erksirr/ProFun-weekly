#include<stdio.h>
int main()
{
	int x, i;
	scanf_s("%d", &x);
	for(i = 2; i <= x;)
	{
		if (x % i == 0) {
			printf(" %d ", i);
			x = x / i;
			if (x!=1) {
				printf("x");
			}
		}
		else if(x%i!=0){
			i++;
		}

	}
	return 0;
}
