#include<iostream>
using namespace std;
class test
{
    int code;
    float price;
    public:
    test(int c,float p)
    {
        code=c;
        price=p;
    }
    test(const test &t)
    {
        code=t.code;
        price=t.price;
    }
    void disp()
    {
        cout<<"code:"<<code;
        cout<<"price:"<<price<<endl;
    }
};


int main()
{
    test t1(101,22.3);
    test t2(t1);
    t1.disp();
    t2.disp();
    return 0;
}