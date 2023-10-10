#include<iostream>
using namespace std;
class test
{
    int a;
    int b ;
    public:
    void setvalue(){
        a=25;b=40;
    }
    friend float mean(test s); 
};
float mean(test s){
    return float(s.a+s.b)/2.0;
}
int main(){
    test x;
    x.setvalue();

    cout<<mean(x);
    return 0;
}