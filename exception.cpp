#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    int x = a-b;
    try{
    if(x!=0){
        cout<<"result of a/x is  "<<(a/x)<<endl;

    }
    else
    throw (x);
    }
    catch(int i){
        cout<<"exception caught :   "<<i;
    }
return 0;
}