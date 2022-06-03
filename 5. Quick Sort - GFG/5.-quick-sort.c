// { Driver Code Starts
//Initial Template for C

#include <stdio.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

 // } Driver Code Ends
//User function Template for C

//Function to sort an array using quick sort algorithm.
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
    
int partition (int arr[], int low, int high)
{
   // Your code here
   int pivot = high-1;
   int temp[high-low+1];
   int index = 0;
   for(int i = low;i<=high;i++)
   {
       if(arr[i] < arr[pivot])
       {
           temp[index] = arr[i];
           index++;
       }
       
   }
   for(int i = low;i<=high;i++)
   {
       if(arr[i] == arr[pivot])
       {
           temp[index] = arr[i];
           index++;
       }
       
   }
   int res = low + index-1;
   for(int i = low;i<=high;i++)
   {
       if(arr[i] > arr[pivot])
       {
           temp[index] = arr[i];
           index++;
       }
   }
   for(int i = low;i<=high;i++)
   {
       arr[i] = temp[i-low];
   }
   return res;
}

// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends