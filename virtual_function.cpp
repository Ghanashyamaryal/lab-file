#include<iostream>
using namespace std;
class base
{
    public:
     virtual void show(){
        cout<<"this is base class\n";
 
    }
   

};
class derived:public base
{
    public:
     public:
    void show(){
        cout<<"this is derived class";
 
    }
   
};
int main()
{
    base b;
    base *ptr;
    derived d;
    ptr = &b;
    ptr->show();//call base class
    ptr  = &d;
    ptr->show();//call derived class 
   

return 0;
}