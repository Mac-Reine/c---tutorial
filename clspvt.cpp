#include<iostream>
using namespace std;
class MARKET
{
    private:
    int vegno;
    int price;
    float gst;
    public:
    void read()
    {
        cout<<"enter no of veg"<<vegno<<endl;
        cin>>vegno;
        cout<<"enter price"<<price<<endl;
        cin>>price;
        cout<<"enter gst"<<price<<endl;
        cin>>gst;


    }
    void show()
    {
        cout<< "no of veg"<<vegno<<endl;
         cout<< "price"<<price<<endl;
         cout<< "gst rate"<<gst<<endl;
        

    }
};
int main()
{
    MARKET M;
    M.read();
    M.show();
    return 0;

}