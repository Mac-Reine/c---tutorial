//creating a public class
#include<iostream>
using namespace std;
class first
{public:
    int num;
    float mark;
    int age;
};
int main()
{
    first f;
    cout<<"enter num"<< f.num <<endl;
    cin>>f.num;
    f.num;
    f.mark=56;
    f.age=78;
    cout<< "number is "<<f.num;
    cout<<"age is"<<f.age;
    cout<<"mark is"<<f.mark;
    return 0 ;


}