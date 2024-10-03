# Inheritance in C++

## AIM
To learn about inheritance and its types in C++.

## Software Used
VS Code

## Problem Codes
1. **Single Inheritance:** Write a C++ code to demonstrate single inheritance.
2. **Multiple Inheritance:** Write a C++ code to demonstrate multiple inheritance.
3. **Multilevel Inheritance:** Write a C++ code to demonstrate multilevel inheritance.
4. **Hierarchical Inheritance:** Write a C++ code to demonstrate hierarchical inheritance.

## Theory
Inheritance is the capability of a class to derive properties and characteristics from another class. It is one of the fundamental features of Object-Oriented Programming (OOP) in C++. This explores inheritance in C++, its modes and types, and how it affects the properties of a class.

## Program Codes
```javascript
#include <iostream>
using namespace std;
class Bands {
public :
string bd;
string sr;
void genre(){
    cout<<"Enter the name of band: "<<endl;
    cin>>bd>>sr;
}
};
class Lz : public
Bands {
    public:
     int est;
    void estd(){ 
    cout<<"Estalished: "<<endl;
    cin>>est;    
}
void display(){
    cout<< "The band is: "<<bd<<" "<<sr<<endl;
    cout<<"Established: "<<est<<endl;
}
};
int main()
{
    Lz d;
    d.genre();
    d.estd();
    d.display();
    return 0;
}
```
```javascript
//Mukesh Rothe 23070123089
#include <iostream>
using namespace std;
class Engine {
    public :
    void start(){
        cout<< "Engine starts!"<<endl;
    }
};
class Transmission{
    public:
   void shiftGear(){
    cout<<"Transmission shifts gear!"<<endl;
   }
   };
    class Car : public Engine, public Transmission {
        public:
        void drive(){
            cout<<"Car is driving!"<<endl;
        }
    };

int main()
{   Car d;
    d.shiftGear();
    d.drive();
    return 0;
}
```
```javascript
//Mukesh Rothe 23070123089
#include<iostream>
using namespace std;
class Animal
{
public:
void speak()
{
  cout<<"Shark is searching for prey."<<endl;
}
};
class Shark : public
Animal
{
public:
void hunt()
{
  cout<<"Shark is hunting."<<endl;
}
};
class Fish : public
Shark
{
public:
void catch1()
{
  cout<<"The shark caught it's prey."<<endl;
}
};

int main()
{
    Fish d;
    d.hunt();
    d.catch1();
    return 0;
}
```
```javascript
#include<iostream>
using namespace std;
class Bike
{   public:
    void Horsepower()
    {
        cout<<"Higher horsepower means higher speed."<<endl;
    }
};
class Avenis : public Bike
{
    public:
    void small()
    {
        cout<<"Avenis has 9 bhp."<<endl;
    }
};
class RE_Shotgun_650 : public Bike
{   public:
    void big()
    {
        cout<<"Shotgun 650 has 40 bhp."<<endl;
    }
};

int main()
{
    Avenis d;
    RE_Shotgun_650 c;
    d.Horsepower();
    d.small();
    c.Horsepower();
    c.big();
    return 0;
}
```
## Output
Single-

![Screenshot 2024-10-03 210540](https://github.com/user-attachments/assets/6a9cb90d-19a0-4b91-bbd2-f277169cc220)

Multiple-

![Screenshot 2024-10-03 210710](https://github.com/user-attachments/assets/7f5715f6-f306-4cd0-a2ed-98f645da6165)

Multilevel-

![Screenshot 2024-10-03 210803](https://github.com/user-attachments/assets/f5a1a127-7909-444f-b717-b683b92b9708)

Hierarchical-

![Screenshot 2024-10-03 210835](https://github.com/user-attachments/assets/f894fc3d-4bd5-4a59-98dc-372a1cb58f1e)

## Conclusion
We learned to implement multiple inheritance, single inheritance, multilevel inheritance, and hierarchical inheritance.
