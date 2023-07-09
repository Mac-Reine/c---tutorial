#include<iostream>
using namespace std;
class friendfn
{
    string name;
    int age;
    public:
    void read()
    {
        cout<<"\n name of student:";
        cin>>name;
        cout<<"\n age of student:";
        cin>>age;
    }
    friend void display(friendfn); //frndfn declaration : friend returntype fnname (classname)
};
void display(friendfn f)
{
    cout<<"\n name of student is"<<f.name <<"and age is"<<f.age; // fn definition
}
int main()
{
    friendfn k;
    k.read();
    display(k); //fn call
    return 0;
}