#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    float x,p,a[10];
    float horner(int n, float a[], float x);
    cout<<"Input degree of polynomial , n"<<endl;
    cin>>n;
    cout<<"Input polynomial coefficients a(0) to a(n) "<<endl;
    for(i=0; i<=n; i++) cin>>a[i];
    cout<<"Input value of x (point of evalution) "<<endl;
    cin>>x;

    p = horner(n,a,x);

    cout<<endl;
    cout<<"f(x) = "<<p<<"at x = "<<x<<endl;

}

float horner(int n, float a[], float x)
{
    int i;
    float p;
    p = a[0];
    for(i=1 ; i<=n; i++)
    {
        p = p*x+ a[i];
    }
    return p;
}

//#include <iostream>
//using namespace std;
//
//// returns value of poly[0]x(n-1) + poly[1]x(n-2) + .. + poly[n-1]
//int horner(int poly[], int n, int x)
//{
//    int result = poly[0]; // Initialize result
//
//    // Evaluate value of polynomial using Horner's method
//    for (int i=1; i<n; i++)
//        result = result*x + poly[i];
//
//    return result;
//}
//
//// Driver program to test above function.
//int main()
//{
//    // Let us evaluate value of 2x3 - 6x2 + 2x - 1 for x = 3
//    int poly[] = {2, -6, 2, -1};
//    int x = 3;
//    int n = sizeof(poly)/sizeof(poly[0]);
//    cout<<n<<endl;
//    cout << "Value of polynomial is " << horner(poly, n, x);
//    return 0;
//}
