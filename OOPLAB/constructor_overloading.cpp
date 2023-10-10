#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    test();
    test(int x);
    test(int x,int y);
    void disp();
};
 test::test()
{
    a=0;
    b=0;
}
 test::test(int x)
{
    a=x;
    b=x;
}
 test::test(int x,int y)
{
    a=x;
    b=y;
}
void test::disp()
{
    cout<<"A:"<<a<<endl;
    cout<<"B:"<<b<<endl;
}
int main()
{
    test a;
    test b(100);
    test c(12,13);
    a.disp();
    b.disp();
    c.disp();
    return 0;
}
