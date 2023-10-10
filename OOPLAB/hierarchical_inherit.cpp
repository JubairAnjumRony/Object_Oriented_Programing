#include<iostream>
using namespace std;
class animal
{
    public:
    void info()
    {
        cout<< "I am a animal"<<endl;
    }
};
class dog:public animal
{
    public:
    void bark()
    {
        cout<<" my sound is like gheu gheu"<<endl;
    }
};
class cat:public animal
{
    public:
    void mew()
    {
        cout<<"My sound is like mew mew"<<endl;
    }
};
int main()
{
    dog obj;
    cout<<" class dog:"<<endl;
    obj.info();
    obj.bark();
    cat obj1;
    cout<<"Class cat"<<endl;
    obj1.info();
    obj1.mew();
    return 0;

}