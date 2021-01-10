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
void countsort(int a[], int n, int pos)
{
	int count[10];
	int i , j , b[100] ;
	for(i=0;i<=10;i++)
	{
		count[i]=0;
	}	
	for(i=0;i<n;i++)
	{
		j=(a[i]/pos)%10;
		count[j]++;
	}	
	for(i=1;i<10;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(i=(n-1);i>=0;i--)
	{
		j=(a[i]/pos)%10;
		b[--count[j]]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
}
void radix_sort(int a[],int n)
{
	int max=max_key(a,n);
	int pos;
	for(pos=1;(max/pos)>0;(pos=pos*10))
	{
		countsort(a,n,pos);
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
	radix_sort(a,n);
	printf("\nOUR SORTED ARRAY IS : ");
	display(a,n);
	return 0;
}
