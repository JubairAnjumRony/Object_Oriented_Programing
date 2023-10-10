#include<iostream>
using namespace std;
class b;
class a{
    int c;
    public:
    void setval(int x){
        c=x;

    }
 friend void add(a, b);
};
class b
{ int c;
    public:
    void setval(int x){
        c=x;

    }
 friend void add(a, b );
};
 void add(a t1, b t2){
    cout<<t1.c+t2.c;
}


int main(){
    a t1;
    b t2;
    t1.setval(3);
    t2.setval(5);
    add(t1,t2);
    return 0;
}