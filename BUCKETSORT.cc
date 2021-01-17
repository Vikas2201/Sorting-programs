#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std; 
void bucketsort(float a[], int n) 
{ 
    vector<float> b[n]; 
    for (int i = 0; i < n; i++) 
	{ 
        int j = n * a[i]; 
        b[j].push_back(a[i]); 
    } 
    for (int i = 0; i < n; i++)
	{ 
        sort(b[i].begin(), b[i].end()); 
    }
    int index = 0; 
    for (int i = 0; i < n; i++) 
    {
	    for (int j = 0; j < b[i].size(); j++) 
        {
		    a[index++] = b[i][j];
		}
	}
} 
void display(float a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<< a[i] <<" ";
	}
}
int main()
{
	float a[100];
	int n,i;
	cout<<"ENTER SIZE OF ARRAY : ";
	cin>>n;
	cout<<"ENTER ELEMENT IN ARRAY : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nOUR ARRAY IS : ";
    display(a,n);
	bucketsort(a,n);
	cout<<"\nOUR SORTED ARRAY IS : ";
	display(a,n);
	return 0;
} 
