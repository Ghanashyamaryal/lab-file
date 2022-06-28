//public:
#include<iostream>
using namespace std;
class number
{
    int a;
    public:
    int b;
    public:
    void read(int x ,int y ){
        a  = x;
        b = y;

    }
    int get_a(){
        return a;
    }
    void display(){
        cout<<"The value of and b is "<<a<<" "<<b<<endl;
}};
class product:public number
{

int c = 0;
public:
void process(){
    c = b*get_a();
}
void show(){
    cout<<"the product of two number is  "<<c<<endl;
}
};




int main()
{
product p;
p.read(2,3);
p.display();
p.process();
p.show();
return 0;
}