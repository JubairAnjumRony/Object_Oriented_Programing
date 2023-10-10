

#include<iostream>
using namespace std;
class test
{    int a,b;
    public:
  
    test()
    {
        a=0;
        b=0;
    }
    void disp()
    {
        cout<<"value of A:"<<a<<endl;
        cout<<"value of B:"<<b;
    }
};
int main()
{
    test a;
    a.disp();
    return 0;
}