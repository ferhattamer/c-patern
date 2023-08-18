#include <stdio.h>
int x,y,z;
int main()
{

	for(x=1;x<6;x++)
	{
	
		for(y=5;y>x;y--)
		{
			printf("B");
		}
		for(z=0;z<x;z++)
		{
			printf("*");
		
		}	
		printf("\n");
	}

}
