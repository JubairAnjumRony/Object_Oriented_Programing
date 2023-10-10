#include<iostream>
using namespace std;

class test{
    int a;
    public:
    void getdata(int x){
        a=x;
    }
    void putdata(){
        cout<<"value of a is :"<<a<<endl;
    }
    void add(test t1,test t2);
};
void test::add(test t1,test t2){
    a=t1.a+t2.a;
}

int main(){
    test x1,x2,x3;
    x1.getdata(9);
    x2.getdata(8);
    x3.add(x1,x2);
    x1.putdata();
    x2.putdata();
    x3.putdata();
    return 0;
}