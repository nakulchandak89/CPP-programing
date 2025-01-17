// Write a C++ program to for Merge sort.

#include<iostream>
#include<string>
#include <vector>

using namespace std;

void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
   vector <int> L(n1), R(n2); // Vectors are used here because their size can be determined at runtime, and they provide dynamic array functionality.

   for(int i=0;i<n1;i++){
    L[i] = arr[left + i];
   }
   for(int j=0;j<n2;j++){
    R[j] = arr[mid + j +1];
   }

   int i=0,j=0, k=left;

   while(n1>i&&n2>j){
    if(L[i]<=R[j]){
        arr[k]=L[i];
        i++;
    }
    else{
        arr[k]=R[j];
        j++;
    }
    k++;
   }
   while(n1>i){
    arr[k]=L[i];
    i++;
    k++;
   }
   while(n2>j){
    arr[k]=R[j];
    j++;
    k++;
   }
}

void mergesort(int arr[], int left, int right){
int mid = left + (right - left) / 2;
if(left<right){
mergesort(arr, left, mid);
mergesort(arr, mid+1, right);
merge(arr, left, mid, right);
}
}

void printarr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}


int main(){
int arr[8];
int size = 7;

cout<<"Enter the Array of length of 7\n";
for(int j=0;j<8;j++){
    cout<<"Enter the Element "<<j<<" :";
    cin>>arr[j];
}
cout<<"Orignal array: \n";
printarr(arr, size);

mergesort(arr, 0, size-1);

cout<<"This is an sorted array:  \n";
printarr(arr, size);

    return 0;
}