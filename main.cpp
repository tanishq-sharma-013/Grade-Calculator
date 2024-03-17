

#include<iostream>
using namespace std;
int main ()
{
    double a,b,c,d,e;
    cout<<"Enter marks of Physics :-"<< endl;
    cin>>a;
    cout<<"Enter marks of Mathematics-II :-"<< endl;
    cin>>b;
    cout<<"Enter marks of BME :-"<< endl;
    cin>>c;
    cout<<"Enter marks of BCEM :-"<< endl;
    cin>>d;
    cout<<"Enter marks of BCE :-"<< endl;
    cin>>e;

    double total = (a+b+c+d+e);
    double percentage = (total/500)*100;
    cout<< endl<< "Percentage :-"<< endl;
    cout<<(percentage)<< endl;
    cout<< endl;
    cout<<"SGPA :- " << endl;
    if(percentage>90) {
        cout<<5<< endl<<"Pass!";
    } else if(percentage<=90 && percentage>80) {
        cout<<4<< endl<<"Pass!";
    } else if (percentage<=80 && percentage>60) {
        cout<<3<< endl<<"Pass!";
    } else if (percentage<=60 && percentage>40) {
        cout<<2<< endl<<"Pass!";
    } else if (percentage<=40 && percentage>32) {
        cout<<1<< endl<<"Pass!";
    } else {
        cout<<0<< endl<<"Fail!";
    }
}

