// this is the Question set of the array and basic logic building 
#include<iostream>
#include<algorithm>
using namespace std;

void Q1();
void Q2();
void Q3();


int main(){
 int opt;

 cout<<"Enter the Question for Which you want solution: "<<endl;

 switch (opt){
    case 1:
        Q1();
        break;
    case 2:
        Q2;
        break;
    case 3:
        Q3;
        break;
    
 }

    return 0;
}

void Q1(){
int arr[] = {2, 8, 7, 3, 6};
int max = arr[0];
cout<<"greatest Element in this array is: ";
cout<<endl;
for(int i=0;i<5;i++){
     cout<<arr[i] << endl;
}
for(int i=0;i<5;i++){
    if(arr[i]>max){ // this is the core logic and hear we are compariing the index 
        max = arr[i];
    }
}
cout<<"This is the greatest element: "<<max<<endl;
}

void Q2(){
    cout<<"Write a C++ program to find the largest threeed and lowest threed elements in an array."<<endl;

        int arr[] = {2, 8, 9, 6, 4, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Sort the array
  sort(arr, arr + n);
    
 for(int i=0;i<n;i++){
    cout<<arr[i]<<"\t";
 }
 cout<<endl;
 cout<<"the 3rd smallest number in the array is: "<<arr[2]<<endl;
 cout<<"the 3rd greatest number in the array is: "<<arr[n-3];


}

void Q3(){
    cout<<" Write a C++ program to find the most frequent element in an array of integers."<<endl;
    
}