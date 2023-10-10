#include<iostream>
using namespace std;

class employee
{
  char name[30];
  int age;
  public:
  void getdata()
  {
    cout<<"Name:";
    cin>>name;
    cout<<"\nage";
    cin>>age;

  }
  void putdata(){
    cout<<"name="<<name<<endl;
    cout<<"age="<<age<<endl;

  }  
};

int main(){
    employee emp[30];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        emp[i].getdata();
    }
    for(int i=0;i<size;i++){
        cout<<"details of employee:"<<i+1;
        emp[i].putdata();
    }
    return 0;
}