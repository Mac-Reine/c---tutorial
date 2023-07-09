#include<iostream>
using namespace std;
class Circle
{
private :
float r;
float area;
float perimeter;
float b;
float h;
public:
void read() ;
void cal();
void display();

};
inline void Circle::read()
{
    cout<<"\n enter radius";
    cin>>r;
    cout<<"\n enter base";
    cin>>b;
    cout<<"\n enter height";
    cin>>h;
}
inline void Circle::cal()
{ 
    float area;
    float perimeter;float b;float h;
    area=1/2*b*h;
   
    perimeter=3.14*r*r;
}
inline void Circle::display()
{
   
cout<<"\n area of circle"<<area ;
cout<<"\n perimeter of circle"<<perimeter;
}






int main()
{
    Circle C;
    C.read();
    C.cal();
    C.display();
    return 0;
}