#include<iostream>
using namespace std;
class staticm
{
static int c;

public:
static void count()
{
    c++;
}
static void display()
{
    cout<<"\n value is :"<<c;
}
};
int staticm:: c=0;
int main()
{
   
    staticm::count(); //calling static mem fn: classname::fnname()
     staticm::count();
    staticm::display();
    staticm::count();
    staticm::display();
}