#include<iostream.h>
#include<conio.h>
class teacher
{
public:
void student()
{
cout<<"student"<<endl;
}
};
class teacher1:public teacher
{
public:
void student1()
{
cout<<"student1"<<endl;
}
};
int main()
{
teacher1 obj;
obj.student();
obj.student1();
return 0;
}