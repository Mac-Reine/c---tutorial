#include<iostream>

using namespace std;
int main()
{   int x;
    int y;
    int swap(int*, int*);
    
    cout<<"enter x and y"<<endl;
    cin>>x>>y;
    swap(&x,&y);
    cout<< "changed :"<<endl;
    cout<<"\n x="<<x <<"and y="<<y<<endl;
return 0;
}
int swap(int*k , int*z)
{ int*a;
    *a=*k;
    *k=*z;
    *z=*a;
    
}

