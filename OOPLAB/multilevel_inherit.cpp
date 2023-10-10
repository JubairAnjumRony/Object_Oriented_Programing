#include<iostream>
using namespace std;
class grandpa
{
    public:
    void func()
    {
        cout<<"This is a lovely experiment with with multilevel inheritance";
    }
};
class father:public grandpa
{
    

};
class sons:public father
{

};
int main()
{
    sons labib;
    labib.func();
    return 0;
}