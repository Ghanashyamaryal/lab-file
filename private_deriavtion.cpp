//private
#include<iostream>
using namespace std;
class number
{
    int a =2;
    int b= 3,c;
    public:
    int product(){
       
        
}
int get_c(){
     c = a*b;
     return c;
}};
class product:private number
{
public:
void show(){
    cout<<"the product of two number is  "<<get_c()<<endl;
}
};




int main()
{
product p;
p.show();
return 0;
}