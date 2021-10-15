# include <stdio.h>
# include <stdlib.h>
void InsertionSort ( int [], int ) ;
void printarr ( int [], int ) ;
int main ()
    {
        int n, i, *arr ;
        printf ("\nEnter the size of the array to be sorted : \n") ;
        scanf ("%d", &n) ;
        arr = (int *) malloc ( n * sizeof (int)) ;
        printf ("\nEnter the elements of the array to be sorted : \n") ;
        for ( i = 0 ; i<n ; i++ )
            scanf ("%d", &arr[i]) ;
        printarr (arr, n) ;
        InsertionSort (arr, n) ;
        printarr (arr, n) ;
        return 0 ;
    }

void InsertionSort ( int arr[], int n )
{
    int i, key, j ;
    for ( i = 1 ; i<=n-1 ; i++)
    {
        key = arr[i] ;
        j = i - 1 ;

        while ( j>=0 && arr[j] > key)
        {
            arr[j+1] = arr [j] ;
            j = j-1 ;
        }
        arr [j+1] = key ;
    }
}

void printarr  (int arr [], int n)
{
    int i ;
    printf ("\n\n") ;
    for ( i = 0 ; i<n ; i++)
        printf ("%d ", arr[i]) ;
}
