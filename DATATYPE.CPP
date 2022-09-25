#include<iostream.h>
#include<conio.h>
class printnumber
{
public:
void printnum(int a)
{
cout<<a<<endl;
}
void printnum(float b)
{
cout<<b<<endl;
}
void printnum(char c)
{
cout<<c<<endl;
}
void printnum(double d)
{
cout<<d<<endl;
}
void printnum(long l)
{
cout<<l<<endl;
}
};
int main()
{
printnumber obj;
obj.printnum(55);
obj.printnum(56.0);
obj.printnum('A');
obj.printnum(2.123456);
obj.printnum(8939069);
return 0;
}
