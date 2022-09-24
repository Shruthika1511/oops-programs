#include<iostream.h>
#include<conio.h>
int p1,c1,m1,t1,a1;
class student
{
public:
void reg()
{
long int regno=191921006;
cout<<"reg: "<<regno<<endl;
}
};
class physics
{
public:
void subject(int mark)
{
p1=mark;
cout<<"physics: "<<mark<<endl;
}
};
class chemistry
{
public:
void subject1(int mark1)
{
c1=mark1;
cout<<"chemistry: "<<mark1<<endl;
}
};
class maths
{
public:
void subject2(int mark2)
{
m1=mark2;
cout<<"maths: "<<mark2<<endl;
}
};
class total:public student,public physics,public chemistry,public maths
{
public:
void avg()
{
int total=p1+c1+m1;
int avg=total/3;
cout<<"total: "<<total<<endl;
cout<<"avg: "<<avg<<endl;
}
};
int main()
{
total obj;
obj.reg();
obj.subject(90);
obj.subject1(95);
obj.subject2(90);
obj.avg();
return 0;
}