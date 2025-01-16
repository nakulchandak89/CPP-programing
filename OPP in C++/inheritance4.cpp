// this is multipal inheritance in this 
 /*
   parent       parent
     |             |
     |             |
     |----child----|
 */

#include<iostream>
#include<string>
using namespace std;

/* base 1: Cricketer 
   base 2: person 
child: virat Kholi */

// base class 1
class Person {
public:
string name;
int age;
};

// base class 2
class cricketer : public Person{
 public:
 string position;
 string team; 
};
// child class
class player : public cricketer{
 public:
 int jersy_number;

 player(string n,int age, string position, string team, int jn){
    this->name = n;
    this->age = age;
    this-> position =  position;
    this->team = team;
    this->jersy_number = jn;
 }
  
  void getinfo(){
    cout<<"name of the player: "<<name<<" age: "<<age<<endl;
    cout<<"from team: "<< team << endl;
    cout<< "position: "<< position<<endl;
    cout<<"with jersy number: "<<jersy_number<<endl;
  }

};


int main (){
    player p1("virat", 52, "caption", "India", 18);

    p1.getinfo();

    return 0;
}