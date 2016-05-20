#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Fibo(int n)
{
  
    int a=1,b=1,c=2;
    while(n>1)
        {
        a=b;
        b=c;
        c=a+b;
        n--;
    } 
    
    return c;
    
}

int digits(int n)
    {
    int i=0;
    while(n>0)
        {
        i++;
        n/=10;
    }
    return i;
}
    
    
int main() {
    int t,n,i;
    cin>>t;
    
    while(t--)
        {
        cin>>n;
        for(i=0;;i++)
            if(digits(Fibo(i-2))==n)
            break;
            
       cout<<i<<endl;
    }
    return 0;
}
