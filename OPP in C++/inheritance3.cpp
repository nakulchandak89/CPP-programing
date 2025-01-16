// this is the multi level inheritance

#include<iostream>
#include<string>
using namespace std;

/*
Base Class: Continent 
Derived Class: Country 
Derived Class from Country:state
*/
// continent -> country -> state

// base class
class coutinent{
public:
 string cont;
};

// derived class
class country :public coutinent {
public:
 string countrys;

};

// derived class from country

class state : public country{
    public: 
    string states;

    state(string a, string b, string c){
        this->cont = a;
        this->countrys=b;
        this->states=c;
    }
    void getadd(){
        cout <<"My address is: "<<cont<<" "<<countrys<<" "<<states<<endl;
    }
};

int main(){
    state s1("asia", "India", "Maharastra");
    s1.getadd();


return 0;
}