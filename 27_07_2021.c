#include<stdio.h>
int swap(int a,int b);
int main()
{
	int a,b;
	printf("enter two numbers=");
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("\nnumbers in main function=%d %d",a,b);
	return 0;
}
int swap(int a,int b)
{
	int c=0;
	c=a;
	a=b;
	b=c;
	printf("\nnumbers after swapping=%d %d",a,b);
	return 0;
}
