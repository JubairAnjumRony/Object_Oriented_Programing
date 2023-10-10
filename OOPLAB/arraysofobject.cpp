#include<iostream>
using namespace std;

class test
{
    char name[30];
    float age;
    public:
    void getdata(void);

    void putdata(void);
   
};
void test::getdata(void)
{
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
}
void test::putdata(void)
{
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
}
//

int main(){
    
    test manager[30];
    const int size=3;
    //int size;
    //cin>>size;
    for(int i=0;i<size;i++){
        cout<<"\nDetails of manager"<<i+1<<"\n";
        manager[i].getdata();
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<"\naManager"<<i+1<<"\n";
        manager[i].putdata();
    }
    return 0;
}