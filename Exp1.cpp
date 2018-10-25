//Element to add an element at a specified position
#include<iostream>
using namespace std;
#define SIZE 5

void InsertElement(int arr[], int size, int value, int pos) {
	for(int i=size;i>=pos;i--){
		arr[i]==arr[i-1];
	}
	arr[pos]==value;
	size++;
}

int Posi(int arr[])
int main() {
	int arr[SIZE]= {1,2,3,4,5};
	InsertElement(arr,5,7,1);
}
