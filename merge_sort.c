#include<stdio.h>
void merge(int a[], int lb , int mid , int ub )
{
	int i,j,k,b[100];
	i=lb;
	j=mid+1;
	k=lb;
	while((i<=mid)&&(j<=ub))
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	for(k=lb;k<=ub;k++)
	{
		a[k]=b[k];
	}
}
void merge_sort(int a[],int lb, int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub-1)/2;
		merge_sort(a,lb,mid);
		merge_sort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
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
	merge_sort(a,0,n-1);
	display(a,n);
	return 0;
}
