#include<iostream>
using namespace std;
class student
{  
    char name[20];
    char address[20];
    int rollno;
    public:
    void input_data(){
    cout<<"enter name :"<<endl;
    cin>>name;
    cout<<"enter address :"<<endl;
    cin>>address;
    cout<<"enter rollno  :"<<endl;
    cin>>rollno;
    }
    void display_data()
    {cout<<"name is :"<<name<<endl;
    cout<<"address is :"<<address<<endl;
    cout<<"rollno is :"<<rollno<<endl;
    }


};
int main()
{
    student s1,s2;
    s1.input_data();
    s2.input_data();
    s1.display_data();
     s2.display_data();
return 0;
}