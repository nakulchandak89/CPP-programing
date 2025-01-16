// encapsulation is wrapping up of data and member function in a siingle unit of class

#include<iostream>
#include<string>
using namespace std;

class employee {
private:
double sal;
public:
string name;
int empid;

void changesal(double newsal){
    newsal = sal;
}

};

int main(){
    employee e1;
    e1.name = "Nakul";
    e1.empid = 95;

    cout<<e1.name<<endl;
    cout<<e1.empid<<endl;

    return 0;
}