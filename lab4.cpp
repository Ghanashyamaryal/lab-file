#include<iostream>
using namespace std;
class info
{
char name[20];
char address[20];
char faculty[10];
int rollno;
public:
void get_data();
void display(){
    cout<<"name is :"<<name<<endl;
    cout<<"address is :"<<address<<endl;
    cout<<"faculty is :"<<faculty<<endl;
    cout<<"rollno is :"<<rollno<<endl;
}};
void info::get_data()
{
    cout<<"name is :"<<endl;
    cin>>name;
    cout<<"address is :"<<endl;
    cin>>address;
    cout<<"faculty is :"<<endl;
    cin>>faculty;
    cout<<"rollno is :"<<endl;
    cin>>rollno;
}
int main()
{
    info A;
    A.get_data();
    A.display();

return 0;
}