#include<iostream>
using namespace std;
class mango
{
    public:
    void func()
    {
        cout<<" I am mango"<<endl;
    }

};
class jack
{
    public:
    void difffunc()
    {
        cout<<" I am jack_fruit";
    }
};
class join:public mango,public jack
{

};
int main()
{
    join obj;
    obj.func();
    obj.difffunc();
    return 0;
}