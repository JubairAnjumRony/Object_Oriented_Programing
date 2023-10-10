#include<iostream>
using namespace std;
int sum(int x,int y)
{
    return x+y;
}
int main()
{
    int a,b;
    a=99;
    b=1;
    int z=sum(a,b);
    cout<<"The sum is:"<<z;
    return 0;
}
