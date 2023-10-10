#include<iostream>
using namespace std;
void func()
{
    cout<<"I am a func overloader"<<endl;
}
int func(int x)
{
    return x;
}
int func(int x,int y)
{
    return x+y;
}
int main()
{
    func();
    cout<<" I am func 2, x="<<func(30)<<endl;
    cout<<" I am func 3,sum="<<func(20,30);
    return 0;
}