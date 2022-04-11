#include<iostream>
using namespace std;
class addition
{
public:
int sum;
 addition add(addition a1,addition a2){
     addition temp;
     temp.sum = a1.sum + a2.sum;
     return temp; 
 }
};
int main()
{
    addition a1,a2,a3;
    a1.sum = 40;
    a2.sum = 60;
    a3  = a3.add(a1,a2);
    cout<<"rhe sum is "<<a3.sum<<endl;
      

return 0;
}