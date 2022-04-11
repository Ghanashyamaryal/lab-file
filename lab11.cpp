#include<iostream>
using namespace std;
class read
{
    int a;
    public:
    read();
    read(int x){
        a = x;
    }
    read(read &y){
        a = y.a;
    }
    void display()
    {
        cout<<"the number is "<<a<<endl;
    }
};
int main()
{
 read r1( 10);
 read r2 = r1;
r1.display();
r2.display();
return 0;
}