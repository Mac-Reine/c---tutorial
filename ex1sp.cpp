//calculating simple interest and total ampunt
#include<iostream>
using namespace std;
class INTEREST
{
    private:
  float prinamount;
  float rateofint;
  float yrs;
  float interest;
  float amount;
  public:
  void read()
  {
    cout<<"enter principal amount"<<endl;
    cin>>prinamount;
    cout<<"\n enter rate of interest";
    cin>>rateofint;
    
    cout<<"\n enter no of yrs";
    cin>>yrs;
    interest= prinamount*rateofint*yrs/100;
    amount= interest+prinamount;
  }
  void display()
  {
    cout<<"\n principle amount"<<prinamount;
    cout<<"\n rate of interest"<<rateofint;
    cout<<"\n yrs"<<yrs;
    cout<<"\n interest"<<interest;
    cout<<"\n amount"<<amount;
    
  }

  

};
int main()
{
INTEREST T;
T.read();
T.display();
return 0;
}
