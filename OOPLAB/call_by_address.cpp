#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
int x,y;
cin>>x>>y;
cout<<"value before swap"<<endl;
cout<<"value of x:"<<x<<endl;
cout<<"value of y:"<<y<<endl;
swap(&x,&y);
cout<<"value after swap"<<endl;
cout<<"value of x:"<<x<<endl;
cout<<"value of y:"<<y<<endl;
return 0;

}