//Mukesh Rothe 23070123089
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
