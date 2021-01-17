#include<stdio.h>
int max_key(int a[] , int n)
{
	int max=a[0];
	int i;
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	return max;
}
void count_sort(int a[], int n, int k)
{
	int c[100] , b[100] , i ,j ;	
	for (i=0;i<=k;i++)
	{
		c[i]=0;
	}
	for(i=0;i<n;i++)
	{
		c[a[i]]=c[a[i]]+1;
	}	
	for(i=1;i<=k;i++)
	{
		c[i]=c[i]+c[i-1];
	}
	for(i=(n-1);i>=0;i--)
	{
		j=a[i];
		c[j]=c[j]-1;
		b[c[j]]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
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
	int a[100],n,i,max;
	printf("\nENTER SIZE OF ARRAY : ");
	scanf("%d",&n);
	printf("\nENTER ELEMENT IN ARRAY : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nOUR ARRAY IS : ");
    display(a,n);
	max=max_key(a,n);
	count_sort(a,n,max);
	printf("\nOUR SORTED ARRAY IS : ");
	display(a,n);
	return 0;
}
