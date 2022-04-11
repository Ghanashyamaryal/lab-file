#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class city
{

char cityname[20];
float distfromktm;
float distance;
public:
void getdata(char x[],float y){
    strcpy(cityname,x);
    distfromktm =y;

}
void adddistance(city ,city );
void display(){
    cout<<"city name is "<<cityname<<endl;
    cout<<"total distance is = " <<distfromktm<<endl;
}
};
void city::adddistance(city c1,city c2){
    distance = c1.distfromktm + c2.distfromktm;
    cout<<"total distance is = "<<distance<<endl;

}
int main()
{
  city  c1,c2,c3;
  c1.getdata("pokhara",200.90);
  c2.getdata("kathmandu",400.10);
  c1.display();
  c2.display();
  c3.adddistance(c1,c2);

return 0;
}