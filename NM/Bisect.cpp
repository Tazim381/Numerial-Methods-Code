#include<iostream>
#include<iomanip>
#include<math.h>

/*
 Defining equation to be solved.
 Change this equation to solve another problem.
*/

#define f(x) x*x-4*x-10

using namespace std;

int main()
{
	 /* Declaring required variables */
	 float x0, x1, x2, f0, f1, f2, e;
	 int step = 1;

	 /* Setting precision and writing floating point values in fixed-point notation. */
     cout<< setprecision(6)<< fixed;

	 /* Inputs */
	 start :
	 cout<<"Enter first guess: ";
     cin>>x1;
     cout<<"Enter second guess: ";
     cin>>x2;
     cout<<"Enter tolerable error: ";
     cin>>e;

	 /* Calculating Functional Value */
	 f1 = f(x1);
	 f2 = f(x2);

	 /* Checking whether given guesses brackets the root or not. */
	 if( f1 * f2 > 0.0)
	 {
		  cout<<"Incorrect Initial Guesses."<< endl;
		  goto start;
	 }
   /* Implementing Bisection Method */
     cout<< endl<<"****************"<< endl;
	 cout<<"Bisection Method"<< endl;
	 cout<<"****************"<< endl;
	 while((x2-x1)>=e)
	 {
		  /* Bisecting Interval */
		  x0 = (x2 + x1)/2;
		  f0 = f(x0);

		  cout<<"Iteration-"<< step<<":\t x = "<< setw(10)<< x0<<" and f(x) = "<< setw(10)<< f(x0)<< endl;

		  if( f0 * f1 < 0)
		  {
			   x2 = x0;
		  }
		  else
		  {
			   x1 = x0;
		  }
		  step = step + 1;

	 }
	 cout<< endl<< "Root is: "<<  x0<< endl;

	 return 0;
}
