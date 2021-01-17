#include<stdio.h>
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}
void heapify(int a[],int n,int i)
{
	int largest=i;
	int left,right;
	left=(2*i)+1;
	right=(2*i)+2;
    if (left < n && a[left] > a[largest])
	{ 
        largest = left; 
    }
    if (right < n && a[right] > a[largest]) 
    {
	    largest = right; 
    } 
    if (largest != i) 
    { 
        swap(&a[i], &a[largest]); 
        heapify(a, n, largest); 
    }
}
void heap_sort(int a[],int n)
{
	int i;
	for(i=(n/2 -1);i>=0;i--)
	{
		heapify(a,n,i);
	}
	for(i=(n-1);i>=0;i--)
	{
		swap(&a[0],&a[i]);
		heapify(a,i,0);
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
	heap_sort(a,n);
	display(a,n);
	return 0;
}
