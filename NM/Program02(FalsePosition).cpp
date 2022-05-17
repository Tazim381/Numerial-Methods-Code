#include<bits/stdc++.h>
#define f(x) x*x -4*x -10

using namespace std;

int main()
{

	 float x2, x1, x, f2, f1, f, e;





	 up:
	 cout<<"Enter first guess: ";
     cin>>x1;
     cout<<"Enter second guess: ";
     cin>>x2;
     cout<<"Enter tolerable error: ";
     cin>>e;


	 f1 = f(x1);
	 f2 = f(x2);

	 if( f1 * f2 >= 0.0)
	 {
		  cout<<"Your guess is Incorrect"<< endl;
		  goto up;
	 }

    int i=1;

	 do
	 {

		  x = (x1*f2- f1*x2)/(f2-f1);
		  f = f(x);

          cout<<"Afer Iteration "<<i<<" value is "<<x<<" Error is "<<f<<endl;
		  if( f1 * f < 0)
		  {
			   x2 = x;
			   f2 = f;
		  }
		  else
		  {
			   x1 = x;
			   f1 = f;
		  }
		  i++;

	 }while(fabs(f)>e);

	 cout<< endl<<"Approximate Root is: "<< x<< endl;

	 return 0;
}
