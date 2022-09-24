#include<iostream.h>
#include<conio.h>
class A
{
public:
A()
{
cout<<"is a constructor";
}
};
void A()
{
cout<<"is not a constructor";
};
int main()
{
A obj;
return 0;
}

