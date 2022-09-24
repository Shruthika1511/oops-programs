#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[10],temp;
int i,j,len;
cout<<"\nenter the number: ";
cin>>str;
j=strlen(str)-1;
for(i=0;i<j;i++,j--)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
}
cout<<"reversed number: "<<str<<endl;
}