#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
cout<<"enter three numbers: ";
cin>> a >> b >> c;
if(a >= b && a >=c)
cout<<"largest number: "<<a<<endl;
if(b >= a && b >= c)
cout<<"largest number: "<<b<<endl;
if(c >= a && c >=b)
cout<<"largest number: "<<c<<endl;
}