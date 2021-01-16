#include<stdio.h>
int partition(int a[], int lb , int ub)
{
	int pivot,start,end,temp;
	pivot=a[lb];
	start=lb;
	end=ub;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			temp=a[start];
			a[start]=a[end];
			a[end]=temp;
		}
	}
	temp=a[lb];
	a[lb]=a[end];
	a[end]=temp;
	return (end);
}
void quick_sort(int a[], int lb , int ub)
{
	int loc;
	if(lb<ub)
	{
	    loc=partition(a,lb,ub);
		quick_sort(a,lb,loc-1);
		quick_sort(a,loc+1,ub);
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
	quick_sort(a,0,n-1);
	printf("\nOUR SORTED ARRAY IS : ");
	display(a,n);
	return 0;
}
