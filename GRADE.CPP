#include<iostream.h>
#include<conio.h>
void main()
{
int total,avg,python,cprogram,maths,physics;
cout<<"\nenter the marks in python: "<<endl;
cin>>python;
cout<<"enter the marks in cprogram: "<<endl;
cin>>cprogram;
cout<<"enter the marks in maths: "<<endl;
cin>>maths;
cout<<"enter the marks in physics: "<<endl;
cin>>physics;
total=python+cprogram+maths+physics;
cout<<"total= "<<total<<endl;
avg=total/4;
cout<<"aggregate= "<<avg<<endl;
if(avg>75)
cout<<"DISTINCTION";
else if(avg>=60 && avg<75)
cout<<"FIRST DIVISION";
else if(avg>=50 && avg<60)
cout<<"SECOND DIVISION";
else if(avg>=40 && avg<50)
cout<<"THIRD DIVISION";
else
cout<<"FAIL";
}

