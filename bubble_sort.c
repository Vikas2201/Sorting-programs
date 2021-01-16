#include<stdio.h>
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}
void bubble_sort(int a[],int n)
{
	int i;
	if(n==0)
	{
		return ;
	}
	for(i=0; i<n ;i++)
	{
		if(a[i]>a[i+1])
		{
			swap(&a[i],&a[i+1]);
		}
	}
	bubble_sort(a,n-1);
}
void display(int a[],int n)
{
	int i;
	printf("\nOUR ARRAY IS : ");
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
    display(a,n);
	bubble_sort(a,n);
	display(a,n);
	return 0;
}
