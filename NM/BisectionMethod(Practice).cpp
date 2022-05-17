#include<bits/stdc++.h>
using namespace std;
#define f(x) x*x -x -2
int main()
{
    float x1,x2,x0,f0,f1,f2,e;

   // cout<< setprecision(6)<< fixed;
start:
    cout<<"Eneter 1st guess "<<endl;
    cin>>x1;
    cout<<"Enter 2nd guess "<<endl;
    cin>>x2;
    cout<<"Enter tolerable error "<<endl;
    cin>>e;

    f1 = f(x1);
    f2 = f(x2);

    if(f1*f2>0)
    {
        cout<<"You input wrong guess "<<endl;
        goto start;
    }

    cout<<endl<<endl;
    cout<<"Ouput of Bisection method "<<endl;
    cout<<endl;
    do
    {
        x0 = (x1+x2)/2.0;
        f0 = f(x0);
        f1 = f(x1);
        f2 = f(x2);
        if(f1*f0<0)
        {
            x2= x0;

        }
        else
        {
            x1 = x0;

        }
    }while(fabs(f0)>e);

    cout<<"Root is "<<x0<<endl;



}
