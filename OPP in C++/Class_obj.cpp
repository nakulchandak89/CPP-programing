// this is the syntax of the claass and objects and this is the basic start of the Object oreanted programing 

#include<iostream>
#include<string>
using namespace std;

// this is the syntax of a simple class
// private and public are the access modifier 
class Teacher {
    private: // salary of an Teacher is private as all dont need to access them 
    double sal;
    public: // this all the componunts are public and all can access them 
    string name;
    string dpt;
    string subject;
    
    void changedept(string newdept){
        dpt = newdept; 
    }
};

int main(){
    Teacher t1; // this is the constructor and also the declariation of an t1 
    t1.name = "Nakul";
    t1.dpt = "CSE";
    t1.subject = "C++";

    cout <<"name of teacher is: "<<t1.name<<endl;
    cout <<t1.dpt<<endl;
    cout <<t1.subject<<endl;

    return 0;
}
