//static data member AND non static memeber
#include<iostream>
using namespace std;
class DEMO
{
    static int c; //static variable declaration
    int k;//non static member declaration
    public:
      void add()
        {
       k=0;
       ++k;
        
        }
    void count()
        { ++c;
        cout<<"\n c="<<c;
        cout<<"\n k="<<k;

        }
      
    
};
int DEMO:: c=0; //static variable initialisation : returntype classname:: staticdatamember = 0(depending on initial value)
int main()
{DEMO D,E,M,O;
   
    D.count();
    E.count();
    M.count();
    O.count();
     D.add();
    E.add();
    M.add();
    O.add();

    return 0;
}