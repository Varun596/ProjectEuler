#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long fib(long long n)
{
  long long a=1,b=2,c=0,s=2;
  
  while(c<n)
      {
      c=a+b;
      a=b;
      b=c;
      if(c%2==0&&c<n)
          s+=c;
  }
    
    return(s);
    
  
}

int main() {
    int t;
    long long n;
    
    cin>>t;
    
    while(t--)
        {
        cin>>n;
        
        cout<<fib(n)<<endl;
        
        
    }
    return 0;
}
