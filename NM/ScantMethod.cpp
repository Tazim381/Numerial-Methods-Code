#include<bits/stdc++.h>
using namespace std;
#define EPS 0.001
#define f(x) x*x-4*x-10

int main()
{
   float x1,x2,f1,f2,r,x3,f3;
     cout<<"Enter first guess: ";
	 cin>>x1;//4
	 cout<<"Enter second guess: ";
	 cin>>x2;//2
	 int i=0;

   do
	 {
		  f1 = f(x1);
		  f2 = f(x2);
		  x3 = x2 - (x2 - x1) * f2/(f2-f1);
		  f3 = f(x3);
		  x1 = x2;
		  f1 = f2;
		  x2 = x3;
		  f2 = f3;

        cout<<"After iteration "<<++i<<" Output value is ="<<x3<<" Error is "<<fabs(f3)<<endl;

	 }while(fabs(f3)>EPS);


   cout<< endl<<"Approximate Root is: "<< x3;
}
