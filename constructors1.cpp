#include<iostream> //without parameters constructor
using namespace std;
class library
{string b; int p;
    public:
    library()
    {  string b=" hello"; int p=250;
        cout<<"\n name of books:"<<b;
        
        cout<<"\n enter the avg price "<<p;
       
    }
};

int main()
{
    library l;
    return 0;

}
