#include <iostream> 
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
  
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << arr[i] << endl; 
     
} 

int binarySearch(int arr[], int l, int r, int x) 
{ 
   if (r >= l) 
   { 
        int mid = l + (r - l)/2; 
  
        if (arr[mid] == x)   
            return mid; 
  
        if (arr[mid] > x)  
            return binarySearch(arr, l, mid-1, x); 
  
        return binarySearch(arr, mid+1, r, x); 
   } 
  
   return -1; 
} 
  
int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSort(arr, n);  
    printArray(arr, n); 
    binarySearch(arr,0,n-1,25);
    return 0; 
} 
