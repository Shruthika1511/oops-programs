#include<iostream.h>
#include<conio.h>
class A
{
public:
void teacher()
{
cout<<"teacher"<<endl;
}
};
class B
{
public:
void student()
{
cout<<"shruthika"<<endl;
}
};
class C:public A,public B
{
public:
void student1()
{
cout<<"hema"<<endl;
}
};
int main()
{
C obj;
obj.student();
obj.student1();
return 0;
}
