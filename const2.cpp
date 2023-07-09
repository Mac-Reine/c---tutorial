#include<iostream> //passing default parameters
using namespace std;
class library
{  int price; int num;
   
   
    public:

    library(int p, int b)
    { 
       price=p;
       num=b;
       
    }
    int worth()
{
    return(price*num);
}
};

int main()
{
    library l(2,3);
    cout<<"\n result:"<<l.worth;
    return 0;
}