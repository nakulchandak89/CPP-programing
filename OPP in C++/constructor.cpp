// constructor is a special method invoked automatically at time of the object creation used for initilasion
#include<iostream>
#include<string>
using namespace std;

class stu {
public:
    string name;
    string shl;

stu(){ // this is the programer define constructor
    cout<<"hello this is form an constructor\n"; // a simple constructor and it will be automatically called to main function 
}

};

int main(){

stu s1; // when the code will be compile them the msg will be print of stu
s1.name = "Hello";
s1.shl = "Msm eng school";

cout<<s1.name<<"\n";
cout <<s1.shl<<"\n";

    return 0;
}