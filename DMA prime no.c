//find prime no.in array by using DMA
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int *ptr=NULL,i,n,j,flag;
	printf("enter total no.of elements in array");
	scanf("%d",&n);
	ptr=(int*)malloc(sizeof(int*));
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d\n",(ptr+i));
		
	}
	printf("elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	printf("Prime Numbers are:\n");
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=2;j<*(ptr+i);j++)
		{
			if(*(ptr+i)%j==0)
			{
			flag=1;
			break;
			}
		}
	
	if(flag==0)
	{
		printf("\n%d",*(ptr+i));
	}
	}
getch();
}
