#include<iostream>
using namespace std;
class type
{    int count;
    public:
    type()
    {
          count++;
        cout<<count<<":constructor  is invoked"<<endl;
      
    }
    ~type()
    {   count--;
        cout<<count<<":Destructor is invoked"<<endl;
        

    }

};
int main()
{
    type t1;
    type t2;
    return 0;
}