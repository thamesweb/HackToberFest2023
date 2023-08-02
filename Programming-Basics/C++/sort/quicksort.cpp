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
