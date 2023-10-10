#include<iostream>
using namespace std;
inline int max(int a,int b)
{
    return (a>b)? a:b;
}
int main()
{
    cout<<"Max (10,20)="<<max(10,20)<<endl;
    cout<<"Max (100,200)="<<max(100,200)<<endl;
    cout<<"Max (33,43)="<<max(33,43)<<endl;
    return 0;
}