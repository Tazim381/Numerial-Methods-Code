#include<bits/stdc++.h>
using namespace std;
#define f1(x1,x2,x3) (5-x2-x3)/2
#define f2(x1,x2,x3) (15-3*x1-2*x3)/5
#define f3(x1,x2,x3) (8-2*x1-x2)/4
#define EPS 0.01
int main()
{
    float x10=0,x20=0,x30=0,x1,x2,x3,r1,r2,r3;
    int i=1;

    do{

        x1=f1(x10,x20,x30);
        x2=f2(x10,x20,x30);
        x3=f3(x10,x20,x30);
        cout<<"After iteration "<<i<<" Value of x1 ="<<x1<<", x2 = "<<x2<<", x3 ="<<x3<<endl;
        r1 = fabs(x1-x10);
        r2 = fabs(x2-x20);
        r3 = fabs(x3-x30);
        x10=x1;
        x20=x2;
        x30=x3;
        i++;


    }while(r1>EPS&& r2>EPS&&r3>EPS);


    cout<<"Approximate value of Output  are : x1 = "<<x1<<", x2 = "<<x2<<",x3 = "<<x3<<endl;

}
