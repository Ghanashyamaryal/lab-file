#include<iostream>
using namespace std;
template<class T>
class test
{
    T a;
    public:
    void sum(T x,T y){
        a = x+y;
    }
    void diff(T x,T y){
        a = x-y;
    }
    void div(T x,T y){
        a = x/y;
    }
    void mul(T x,T y){
        a = x*y;
    }
    void show(){
        cout<<a<<endl;
    }


};
int main()
{
    test<int >t1;
    test<int>t2;
    test<double>t3;
    test<double>t4;
    t1.sum(1,2);
    t1.show();
    t2.diff(3,2);
    t2.show();
    t4.mul(3.5,4.0);
    t4.show();
    


return 0;
}