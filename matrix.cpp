// this is script for matrix printing (using vector)
//C++ Program for Three Dimensional (3D) Array

#include <iostream>
#include <vector>

using namespace std;
void Tdmatrix(){
    vector <int> arr[5][5][5];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            for(int x=0;x<5;x++){
                cout<<i<<j<<x<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<endl;
}
int main(){
vector <int> arr[5][5];
int count = 0;
int countodd = 0;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(i % 2 ==0 && j%2==0){
             cout<<i<<j<<"\t";
             count++;
        }else{
            cout<<i<<j<<"\t";
            countodd++;
        }
    }
    cout<<endl;
}
cout<<"The count of Even number is: "<<count<<endl;
cout<<"The count of Odd nnumber is: "<<countodd;
    return 0;
}