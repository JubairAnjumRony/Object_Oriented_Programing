#include<iostream>
using namespace std;
int m=10;
int main(){
    int m=20;
   { int k=m;
    int m=25;
    cout<<"we are in inner block:"<<endl;
    cout<<"k="<<k<<endl;
    cout<<"m="<<m<<endl;
    cout<<"::m="<<::m<<endl;
   }
   cout<<"we are in outer Block"<<endl;
    cout<<"m="<<m<<endl;
    cout<<"::m="<<::m;
   
    return 0;
}