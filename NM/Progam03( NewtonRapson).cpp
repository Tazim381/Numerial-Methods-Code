
#include<bits/stdc++.h>
#define EPSILON 0.001
#define f(x) x*x-3*x+2
#define derif(x) 2*x-3
using namespace std;

void newtonRaphson(double x)
{
    double fx = f(x);
    double derivative = derif(x);
    double h = fx / derivative;

    while (abs(h) >= EPSILON)
    {
        fx = f(x);
        derivative = derif(x);
        h = fx/derivative;

        // x(i+1) = x(i) - f(x) / f'(x)
        x = x - h;
    }

    cout << "The value of the root is : " << x;
}


int main()
{
    double x0 = 0; // Initial values assumed
    newtonRaphson(x0);
    return 0;
}
