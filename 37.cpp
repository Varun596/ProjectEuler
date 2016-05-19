#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long isprime(long a)
    {
    long i;
 
    if(a==1)
        return 0;
        
    if (a==2)
        return 1;

    if (a%2==0)
        return 0;

    for (i=3;i<=sqrt(a);i+=2)
        if (a%i==0)
            return 0;

    return 1;
    
}

int main() {
  
    long n,a,b,c,s=0,i;
    cin>>n;
    
    
    for(i=10;i<=n;i++)
    {
    a=i;

   while(a>0)
        {
       if(isprime(a)==1)
       {
	    a/=10;

}
       else
       goto L;       
        
    }
    
    a=i;
    
    while(a>0)
    {
    	b=a;
    	c=0;
    	if(isprime(a)==1)
    	{
    		while(b>10)
    		{
    			b/=10;
    			c++;
			}
			
			b*=pow(10,c);
			a%=b;
		}
		else
		goto L;
	}
	
	s+=i;
    
    L:
    	i+=0;
    }
    
    cout<<s;

    return 0;
}
