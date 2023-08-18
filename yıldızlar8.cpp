#include <stdio.h>
int x,y,z,j,i;
int main()
{
	for(j=0;j<5;j++){
	
	for(x=1;x<10;x++)
	{
		for(i=0;i<7;i++){
		
		for(y=9;y>x;y--)
		{
			printf("B");
		}
	for(z=0;z!=x*2-1;z++)
	{
		printf("*");
	}
	for(y=9;y>x;y--)
		{
			printf("B");
		}
	
		for(y=9;y>x;y--)
		{
			printf("B");
		}
	for(z=0;z!=x*2-1;z++)
	{
		printf("*");
	}
	for(y=9;y>x;y--)
		{
			printf("B");
		}
	}
		
	printf("\n");
	}
	for(x=1;x<9;x++)
	{
		for(i=0;i<7;i++){
		
			for(y=0;y<x;y++)
		{
			printf("B");
		}
	for(z=16;z>2*x-1;z--)
	{
		printf("*");
		}
		
			for(y=0;y<x;y++)
		{
			printf("B");
		}
		for(y=0;y<x;y++)
		{
			printf("B");
		}
	for(z=16;z>2*x-1;z--)
	{
		printf("*");
		}
		
			for(y=0;y<x;y++)
		{
			printf("B");
		}
	}
	
	printf("\n");
	}
}
	
}
