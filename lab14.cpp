//returning object from function
#include<iostream>
using namespace std;
class addition                                              
{   public:
    int a ,b,sum;
    public:

   
 addition add(addition a1 , addition a2)
    { addition temp;
       temp.sum =  a1.sum+a2.sum;
        return temp; }};
int main()
{    int sum ;
    addition a1,a2,a3;
    a1.sum = 10;
    a2.sum = 30;
    a3 = a3.add(a1,a2);
    cout<<"the sum is " <<a3.sum<<endl;

return 0;
}