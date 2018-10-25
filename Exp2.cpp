#include<iostream>
using namespace std;
#define SIZE 5
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
         return i; 
    return -1; 
}
int main(){
	int arr[SIZE], n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	cout << search(arr, n, 4);
}
