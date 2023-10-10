#include<iostream>
using namespace std;
 
class test
{
    int a;
    int b;
    public:
    void getdata(int x,int y){
        a=x;
        b=y;
    }
    int largest()
    {
        return (a>b)?a:b;


    }
    void putdata()
    {
        largest();
        cout<<"Largest value is:"<<largest()<<endl;
     
    }
};

int main(){
    test l;
    l.getdata(300,200);
    l.putdata();
    return 0;
}