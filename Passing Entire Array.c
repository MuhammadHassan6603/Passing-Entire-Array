//Passing entire array into function

#include<stdio.h>
void display(int *p,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t",*p);
		p++;
	}
}
void main()
{
	int marks[]={10,20,30,40,50,60};
	display(&marks[0],6);
}
