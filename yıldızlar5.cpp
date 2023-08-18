#include <stdio.h>
int x,y,z;
int main()
{

	for(x=0;x<5;x++)
	{
	for(z=0;z<x;z++)
		{
		
		printf(" ");
		}	
		for(y=5;y>x;y--)
		{	
			printf("*");
		}
		
		printf("\n");
	}

}
