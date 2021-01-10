#include<stdio.h>
void selection_sort(int a[],int n,int i)
{
	int min=i,j;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	if((i+1)<n)
	{
		selection_sort(a,n,i+1);
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
	int a[100],i,n,ele;
	printf("\nENTER SIZE OF ARRAY :");
	scanf("%d",&n);
	printf("\nENTER ELEMENT IN ARRAY : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	printf("\nOUR ARRAY IS : ");
	display(a,n);
	selection_sort(a,n,0);
	printf("\nOUR SORTED ARRAY IS : ");
	display(a,n);
	return 0;
}
