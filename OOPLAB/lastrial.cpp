#include<iostream>
using namespace std;
class test
{
    static int count;
    int a;
    public:
    //static int func()
    void getdata(int x,)
    {
        a=x;
        count++;
    }
    void getcount(){
        cout<<"count is:"<<count<<endl;

    }
};
int test::count;

int main(){
   // cout<<"the num is:"<<test::func()<<endl;//access member function using scope resolution operator
    test a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    cout<<"after counting"<<endl;
    a.getdata(3);
    b.getcount(5);
    c.getdata(8);
    a.getcount();
    b.getcount();
    c.getcount();

    return 0;
}