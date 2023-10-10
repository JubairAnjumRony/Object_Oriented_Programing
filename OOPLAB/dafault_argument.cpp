#include<iostream>
using namespace std;
int sum(int x,int y,int z=10,int a=20)
{
    return x+y+z+a;
}
int main()
{
    cout<<"sum is:"<<sum(10,20)<<endl;
    cout<<"sum is:"<<sum(1100,20)<<endl;
    return 0;
}