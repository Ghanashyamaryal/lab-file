#include<iostream>
using namespace std;
class complex
{   
    int i , j;
    public :
    complex();
  complex(int x , int y){
      i = x;
      j = y;
  }
  complex  (complex c1,complex c2){
      
    i= (c1.i+c2.i);
   j =  (c1.j+c2.j);
   
  }
  void display(){
      cout<<"the sum is "<<i<<"+"<<j<<"i"<<endl;
  }

};
int main()
{
    complex c1(2,3);
    complex c2(3,4);
    complex c3(c1,c2);
    c3.display();

return 0;
}