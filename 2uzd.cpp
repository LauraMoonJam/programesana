#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    string d;

cout<<"ievadi darbibu +,/,*,-"<<endl;
cin>>d;
cout<<"ievadi skaitli"<<endl;
cin>>a;
cout<<"ievadi vel vienu skaitli"<<endl;
cin>>b;
  if (d=="+"){
    cout<<"atbilde ir " << a+b;
  }
  if (d=="-"){
    cout<<"atbilde ir" << a-b;
    }
  if (d=="*"){
    cout<<"atbilde ir" << a*b;
  }
  if (d=="/"){
    cout<<"atbilde ir" << a/b;
  }

}
