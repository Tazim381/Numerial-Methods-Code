#include<bits/stdc++.h>
using namespace std;

struct Data
{
    int x, y;
};


double interpolate(Data f[], int xi, int n)
{
    double result = 0;

    for (int i=0; i<n; i++)
    {

        double term = f[i].y;
        for (int j=0;j<n;j++)
        {
            if (j!=i)
                term = term*(xi - f[j].x)/double(f[i].x - f[j].x);
        }


        result += term;
    }

    return result;
}

// driver function to check the program
int main()
{
    cout<<"Enter input number "<<endl;
    int input;
    cin>>input;

    //Data f[] = {{0,2}, {1,3}, {2,12}, {5,147}};
    Data f[input];
    int x,y;
    cout<<"Enter "<<input<<" point and value "<<endl;
    for(int i=0; i<input; i++)
    {
        cin>>f[i].x>>f[i].y;
    }

    int point;
    cout<<"In which point you want to find the function value  :";
    cin>>point;
    cout << "Value of f(3) is : " << interpolate(f, point, input+1);

    return 0;
}
