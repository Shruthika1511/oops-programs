#include<iostream.h>
#include<conio.h>
class fruit
{
public:
void sweet(int apples,int mangoes)
{
int fruits=apples+mangoes;
cout<<"no.of fruits: "<<fruits<<endl;
}
};
class apple:public fruit
{
public:
void sweet1(int apples)
{
int fruits=apples;
cout<<"no.of apples: "<<fruits<<endl;
}
};
class mango:public apple
{
public:
void sweet2(int mangoes)
{
int fruits=mangoes;
cout<<"no.of mango: "<<fruits<<endl;
}
};
int main()
{
mango obj;
obj.sweet(5,5);
obj.sweet1(6);
obj.sweet2(4);
return 0;
}