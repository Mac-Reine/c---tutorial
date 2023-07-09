#include<iostream>
using namespace std;
class triangle
{
    public:
int trino(int m)
 {
    int f=0;
    if(m==0)
    return(f);
    else
    f=f+m+trino(m-1);
    return(f);
    
 }

};
int main()
{
    int y;
    triangle a;
    cout<<"\n enter num"<<y;
    cin>>y;
    cout<<"\n triangular no:"<<a.trino(y);
    return 0;


}