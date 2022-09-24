#include<iostream.h>
#include<conio.h>
void main(){
int num,i=1,sum=0;
cout<<"enter the number:";
cin>>num;
while(i<num)
{
if(num%i==0)
sum=sum+i;
i++;
}
if(sum==num)
cout<<i<<"is  a perfect number."<<endl;
else
cout<<i<<"is not a perfect number."<<endl;
}


