//merge sort 

#include<iostream>
using namespace std;

void Merge(int arr[],int l,int mid,int r)
{
	int n1=mid-l+1;
	int n2=r-mid;
	int a[n1];
	int b[n2];

	for(int i=0;i<n1;i++)
	{
		a[i]=arr[l+i];
	}
    for(int i=0;i<n2;i++)
	{
		b[i]=arr[mid+1+i];
	}

	int i=0;
	int j=0;
	int k=l;

	while(i<n1 && j<n2)
	{
		if(a[i]<b[j])
		{
			arr[k]=a[i];
			k++;i++;
		}
		else {
			arr[k]=b[j];
			k++;j++;
		}
	}

	while(i<n1)
	{
		arr[k]=a[i];
			k++;i++;
	}
	while(j<n2)
	{
		arr[k]=b[j];
			k++;j++;
	}
}
void mergesort(int arr[],int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);

		Merge(arr,l,mid,r);
			}
			return;
}

int main()
{
	int arr[]={5,4,3,2,1};
	mergesort(arr,0,4);

	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;

}


//quicksort 

#include<iostream>
using namespace std;

void swap(int arr[],int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}

int partition(int arr[],int l,int r)
{
	int pivot=arr[r];
	int i=l-1;
	int j;
	for( j=l;j<r;j++)
	{
      if(arr[j]<pivot)
	  {
		  i++;
		  swap(arr,i,j);
	  }
	}
	swap(arr,i+1,r);
	return i+1; //returning the new pivot location after partition
}

void quicksort(int arr[],int l,int r)
{
	if(l<r)
	{
       int pi=partition(arr,l,r);
	   quicksort(arr,l,pi-1);
	   quicksort(arr,pi+1,r);
	}
	
}



int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	quicksort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
