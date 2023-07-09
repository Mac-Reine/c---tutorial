#include<iostream>//constructor overloading
using namespace std;
class OVERLOAD
{
    private:
    int ans;
    public:
    OVERLOAD(int x, int y)
    {
        ans= x*y;
    }
    OVERLOAD(int a, int b, int c)
    {
        ans= a*b*c;
    }
    int result()
    {
        return(ans);
    }
};
int main()
{
    OVERLOAD ol(20,30);
    OVERLOAD oll(2,2,3);
    cout<<"\n result 1:"<<ol.result;
    cout<<"\n result 2:"<<oll.result;

    return 0;
}