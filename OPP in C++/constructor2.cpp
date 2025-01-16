// there are 2 types of constructor 
// 1) parameterized constructuctor
#include <iostream>
#include<string>
using namespace std;

class Teacher {
private:
double sal;
public:
string name;
string dept;
string subject;
// this is the destructor and it is call at end as all the function is execiuted and now the memory is going to relace from heap
~Teacher (){
    cout << "memory is releaced\n";
}
// in this we declair the parameterized constructuctor
Teacher(string n, string d, string s, double sl){
    this->name = n; // in this we input the class element 
    this->dept = d;
    this->subject = s;
    this->sal = sl; // we can access the private member also as is accessiable in class itself only 

}
void getinfo(){ // this function is for printing the stored data 
    cout << "name: "<<name<<endl;
    cout << "det: "<< dept<<endl;
    cout << "subject: "<<subject<<endl;
    cout << "salary: "<< sal <<endl;
}

};

int main(){
    //note we need to input the data as it is arrenged in the constructuctor
Teacher t1 ("shradha", "CSE", "C++",25000); // this is the advantage of storing data in this type coz we can effecantly write the code 
Teacher t2(t1); // hear we uss the cppy constructuctor and by that we can copy the data of t1 to t2

t2.getinfo();
    return 0;
} 