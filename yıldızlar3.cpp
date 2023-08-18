#include<stdio.h>
int x,y;
int main ()
{
	for(x=0;x<5;x++)
	{
		for(y=5;y>x;y--)
		{
			printf("*");
		}
		printf("\n");
	}
}
