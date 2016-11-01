#include<iostream>
#include<string>
using namespace std;

template<class T>
void minmax(T &var1, T &var2)
{
 if(var1 < var2)
 var1=var1;

 else
 var2=var1;
}

int main ()
{
 int min1,min2;
 double max1,max2;

 cout<<"enter min value 1: ";
 cin>>min1;

 cout<<"enter min value 2: ";
 cin>>min2;

 minmax(min1,min2);

 cout<<"minimum value: " << min1 <<endl<<endl;

 cout<<"enter max value: ";
 cin>>max1 ;

 cout<<"enter max value: ";
 cin>>max2;

 minmax(max1,max2);

 cout<<"max value : "<<max2;


 return 0;
}
