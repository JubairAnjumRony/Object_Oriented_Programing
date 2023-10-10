#include<iostream>
using namespace std;
class fruit
{
    public:
    string a="Bangladesh is enrich with different types of fruit";
    void full()
    {
        cout<<"chapai is most popular for mango"<<endl;
    }
};
class jack:public fruit
{
public:
    void love()
    {
        cout<<"Mango is a lovely fruit"<<endl;
    }
};
int main()
{
    jack f;
    cout<<f.a<<endl;
    f.full();
    f.love();
    return 0;
}