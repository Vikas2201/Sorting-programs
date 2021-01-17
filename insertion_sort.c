#include<stdio.h>
void insertion_sort(int a[],int n)
{
	int j,last;
	if(n<=1)
	{
		return ;
	}
	insertion_sort(a,n-1);
	last=a[n-1];
	j=n-2;
	while((j>=0)&&(a[j]>=last))
	{
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=last;
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
}
int main()
{
	int a[100],n,i;
	printf("\nENTER SIZE OF ARRAY : ");
	scanf("%d",&n);
	printf("\nENTER ELEMENT IN ARRAY : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nOUR ARRAY IS : ");
    display(a,n);
	insertion_sort(a,n);
	printf("\nOUR SORTED ARRAY IS :");
	display(a,n);
	return 0;
}
