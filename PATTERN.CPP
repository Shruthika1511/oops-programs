#include<iostream.h>
#include<conio.h>
int main()
{
int i,j,rows;
cout<<"\nenter number of rows: ";
cin>>rows;
for(i=1;i<=rows;++i)
{
for(j=1;j<=i;++j)
{
cout<<"* ";
}
cout<<"\n";
}
return 0;
}