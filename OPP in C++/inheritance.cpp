// when properites and member function of base class is transfered to derived class
// this is the single inheritance 
#include<iostream>
#include<string>
using namespace std;

//this is the Base class or Parent class 
class person{
public:
string name;
int age;
};

// this is the child class 
class Teacher : public person {
    public:
    string dept;
    string subjects;


    Teacher(string name, int age, string dept, string subjects){
        this->name = name;
        this->age = age;
        this-> dept = dept;
        this->subjects = subjects;

    }


    void getinfo(){
        cout << "name: "<<name<<endl;
        cout << "age: "<<age<<endl;
        cout << "department: "<<dept<<endl;
        cout << "subject: "<<subjects<<endl;
    }
};

int main (){
    Teacher t1("shradha", 38, "CSE", "C++");

    t1.getinfo();
    return 0;
}

