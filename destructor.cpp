#include<iostream>
using namespace std;
class Car
{
    private:
    int speed;
    string model;
    int mileage;
    public:
    Car(int x,int y,string b)
    {
        cout<<"this is a constructor";
speed=x;
mileage=y;
model=b;

    }
     ~Car()
    {
        cout<<"\n This is a destructor";
    }
    void display()
    {
        cout<<"\n speed :"<<speed;
        cout<<"\n mileage:"<<mileage;
        cout<<"\n model:"<<model;
    }
    
};
int main()
{
    Car c(37,34,"hello");
    c.display();
    return 0;
}