#include<iostream>
using namespace std;
class Abc
{
    private:
    int age;
    string name;
    int num;
    void values()
    {
        age=34;
        name="shobin";
        num=1234;
    }
    public:
   
    
        void display()
         {
            values();
        
cout<<"\n age :"<<age;
cout<<"\n name:"<<name;
cout<<"\n num:"<<num;
        }
    
};
int main()
{
    Abc A;
    
    A.display();
    return 0;
}

