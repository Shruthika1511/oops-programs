#include<iostream.h>
#include<conio.h>
class A
{
public:
void student()
{
cout<<"student"<<endl;
}
};
class B:public A
{
public:
void student1()
{
cout<<"student1"<<endl;
}
};
class C:public B
{
public:
void student2()
{
cout<<"student2"<<endl;
}
};
int main()
{
C obj;
obj.student();
obj.student1();
return 0;
}