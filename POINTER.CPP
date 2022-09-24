#include<iostream.h>
#include<conio.h>
int main()
{
int a[8],i,s=0;
int *ptr;
cout<<"enter: "<<endl;
for(i=0;i<8;i++)
{
cin>>a[i];
}
ptr=a;
for(i=0;i<8;i++)
{
s=s+*(ptr+i);
}
cout<<"sum of elements in array: "<<s;
return 0;
}