#include<bits/stdc++.h>
using namespace std;
#define EPS 0.0001
#define MAXIT 20
#define f(x) x*x - 3*x + 2
#define fd(x) 2*x - 3
int main()
{
    int count;
    float x1,xn,fx1,fdx1,r;

    cout<<"Input initial value of x "<<endl;
    cin>>x1;//input -20
    int i=0;
    while(fabs(f(x1))>EPS)
    {

        fx1 = f(x1);
        fdx1 = fd(x1);
        xn = x1 -(fx1/fdx1);
        cout<<"Iteration : "<<++i<<" is "<<xn<<" and Error is = "<<fx1<<endl;
        x1 =xn;

    }

    cout<<"Result is :"<<xn<<endl;
}
