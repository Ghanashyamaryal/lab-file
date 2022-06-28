
#include<iostream>
using namespace std;
class employee3;
class employee2;
class employee1
{
    char name[20];
    char add[20];
    int salary1;
    public:
    void read(){
        cout<<"Enter the name of employee1"<<endl;
       cin>>name;
         cout<<"Enter the address of employee1"<<endl;
        cin>>add;
         cout<<"Enter the salary of employee1"<<endl;
        cin>>salary1;
        }
        void display(){
            cout<<"The name of employee1 is "<<name<<endl;
            cout<<"the address of the employee1 is "<<add<<endl;
            cout<<"the salary of the employee1"<<salary1<<endl;
        
    }
friend int total_salary(employee1 a,employee2 b,employee3 c);
};
class employee2
{
    char name1[20];
    char add1[20];
    int salary2;
    public:
    void read1(){
        cout<<"Enter the name of employee2"<<endl;
       cin>>name1;
         cout<<"Enter the address of employee2"<<endl;
        cin>>add1;
         cout<<"Enter the salary of employee2"<<endl;
        cin>>salary2;
        }
        void display1(){
            cout<<"The name of employee2 is "<<name1<<endl;
            cout<<"the address of the employee2 is "<<add1<<endl;
            cout<<"the salary of the employee2 ="<<salary2<<endl;
        
    }
friend int total_salary(employee1,employee2,employee3);
};
class employee3
{
    char name2[20];
    char add2[20];
    int salary3;
    public:
    void read2(){
    cout<<"Enter the name of employee3"<<endl;        
    cin>>name2;
         cout<<"Enter the address of employee"<<endl;
        cin>>add2;
         cout<<"Enter the salary of employee"<<endl;
        cin>>salary3;
        }
        void display2(){
            cout<<"The name of employee3 is "<<name2<<endl;
            cout<<"the address of the employee3 is "<<add2<<endl;
            cout<<"the salary of the employee3  ="<<salary3<<endl;
        
    }
friend int total_salary(employee1,employee2,employee3);
};

int total_salary(employee1 a, employee2 b,employee3 c)
{
   int total_salary = a.salary1 + b.salary2 + c.salary3;
   cout<<"the total_salary of three employee  ="<< total_salary;
}
int main()
{
employee1 e1;
employee2 e2;
employee3 e3;
e1.read();
e2.read1();
e3.read2();
e1.display();
e2.display1();
e3.display2();
total_salary(e1,e2,e3);
return 0;
}