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
