/*Name-Sanya Jaitly
PRN-22070123100
Exp_14
General Inheritence
Part 1
*/
#include<iostream>
using namespace std;
//Base class
class Vehicle
{
    public:
    string brand="Ford_";
    void color()
    {
        cout<<"Red!\n";
    }
};
//Derived class
class Car:public Vehicle
{
    public:
    string model="Mustang";
};
int main()
{
    Car myCar;
    myCar.color();
    cout<<myCar.brand+""+myCar.model;
    return 0;
}
/*Output
Red!
Ford_Mustang
*/

/*  
Exp_14
Part 2
Single Inheritence
*/
#include<iostream>
using namespace std;
class name{
    public:
    name()
    {
        cout<<"This is Sanya\n";
    }
};
class Firstname: public name{
};
int main()
{
    Firstname obj;
    return 0;
}

/*
Output
This is Sanya
*/

/*  
Exp_14
Part 3
Multiple Inheritence
*/
#include<iostream>
using namespace std;
class mammal
{
    public:
mammal(){
    cout<<"mammal is a animal"<<endl;
}

};
class wingedanimal{
    public:
    wingedanimal()
    {
        cout<<"winged animal can flap";
    }
};
class bat: public mammal,public wingedanimal{};
int main()
{
    bat b1;
    return 0;
}
/*
Output
mammal is a animal
winged animal can flap
*/

/*  
Exp_14
Part 4
Multilevel Inheritence
*/
#include<iostream>
using namespace std ;
class Sanya
{
    public:
    Sanya()
    {
        cout<<"This is a Sanya Jaitly\n";
    }
};
class name: public Sanya{

};
class Fullname : public name{

};
int main()
{
    Fullname obj;
    return 0;

};
/*Output
This is a Sanya Jaitly
*/

/*Exp_14
Part-5
Hierarchal Inheritance*/
#include<iostream>
using namespace std;

class colour
{
public:
void show_colour() {
	cout<<"class colour"<<endl;
}
};
class Blue : public colour
{
public:
void show_Blue() {
	cout<<"class Blue"<<endl;
}
};

class Orange : public colour
{
public:
void show_Orange() {
	cout<<"class Orange"<<endl;
}
};

int main() {
Blue b; 
cout<<"calling from Blue: "<<endl;
b.show_Blue();
b.show_colour();
	
Orange c; 
cout<<"calling from Orange: "<<endl;
c.show_Orange();
c.show_colour();
return 0;
}
/*Output
calling from Blue:
class Blue
class colour
calling from Orange:
class Orange
class colour
*/