#include<iostream>
using namespace std;
class abc
{
    public:
    int add(int , int );
    double add(double  , double );

};
int abc:: add( int x, int y)//defination returntype classname:: fnname()
{
    return(x+y);
}
double abc:: add(double d, double r)
{
    return(d+r);

}
int main()
{
    abc a;
    cout<<"\n RESULT OF INTEGER ADDITION :"<<a.add(3,4);
    cout<<"\n RESULT OF DECIMAL ADDITION :"<<a.add(34.5,57.2);
    return 0;

}