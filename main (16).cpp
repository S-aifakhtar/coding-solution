/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if(n==1)
    return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
   int a,b;
   cin>>a>>b;
   int N;
   for(int i=a;i<=b;i++)
   {
       if(isPrime(i))
       {
       N=i;
       while(N!=0)
	    {
	        int val=N;
	        int sum=0;
	        while(val>0)
	        {
	            int brk=val%10;
	            sum+=brk;
	            val=val/10;
	        }
	        N=sum;
	        if(sum-9<=0) break;
	    }
	    if(isPrime(N))
	    {
	       cout<<i<<" ";
	    }
       }
   }
    return 0;
}
