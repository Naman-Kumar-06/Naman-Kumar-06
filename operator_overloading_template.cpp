#include<iostream>
using namespace std;
class abc
{
private:
    int id;
    string name;
public:
    friend ostream& operator <<(ostream& show,abc& d);
    friend istream& operator >>(istream& input,abc& d);
};
istream& operator>>(istream& input,abc& d)
{
    cout<<"Enter the id:";
    input>>d.id;
    cout<<"Enter the name";
    input>>d.name;
    return input;
}
ostream& operator <<(ostream& show,abc& d)
{
    show<<"Id:"<<d.id<<"\t"<<"name:"<<d.name;
}
int main()
{
    abc d;
    cin>>d;
    cout<<d;
    return 0;
}
