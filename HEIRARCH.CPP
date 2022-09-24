#include<iostream.h>
#include<conio.h>
class A
{
public:
void parent()
{
cout<<"parent"<<endl;
}
};
class B;public A
{
public:
void parent1()
{
cout<<"parent1"<<endl;
}
};
class C:public B
{
public:
void parent2()
{
cout<<"parent2"<<endl;
}
};
class D:public C
{
public:
void parent3()
{
cout<<"parent3"<<endl;
}
};
int main()
{
D obj;
obj.parent1();
obj.parent2();
obj.parent3();
return 0;
}
