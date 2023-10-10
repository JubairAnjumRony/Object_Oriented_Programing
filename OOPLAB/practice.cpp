#include<iostream>
using namespace std;
class person
{
    char name[40];
    int age;
    public:
    void getdata()
    {
    cout<<"Enter name";
    cin>>name;
    cout<<"Enter age";
    cin>>age;

    }
    void dispdata()
    {
        cout<<"name:"<<name;
        cout<<"Age:"<<age;
    }
};
int main()
{
    person p;
    p.getdata();
    p.dispdata();
    return 0;
}
