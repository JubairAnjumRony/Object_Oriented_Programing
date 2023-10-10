#include<iostream>
using namespace std;

class item{
    int number;
    float cost;
    public:
    void getdata(int a,float b);
    void putdata();

};
inline void item :: getdata(int a,float b){
    number=a;
    cost=b;
}
inline void item:: putdata(){
    cout<<"Number:"<<number<<"\n";
    cout<<"cost:"<<cost<<"\n";
}
int main(){
    item x;
    cout<<"\nobject x"<<"\n";
    x.getdata(200,52.3);
    x.putdata();
    item y;
    cout<<"\nobject y"<<"\n";
    y.getdata(500,95.2);
    y.putdata();

    return 0;
}