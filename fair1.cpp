#include<iostream>
using namespace std;
class Book
{
  private:
    int price;
    int nofpg;
    string title;
    int genre;
    string author;
    public:
    void read();
    void display();
};
void Book :: read()
{
    cout<<"\n enter the title";
    cin>>title;
    cout<<"\n enter the no of pages";
    cin>>nofpg;
    cout<<"\n enter the genre";
    cin>>genre;
    cout<<"\n enter the author";
    cin>>author;
}
void Book ::display()
{
    cout<<"\n author:"<<author;
    cout<<"\n title:"<<title;
    cout<<"\n  genre:"<<genre;
    cout<<"\n no of pages"<<nofpg;
}
int main()
{
    Book B;
    B.read();
    B.display();
    return 0;

}
