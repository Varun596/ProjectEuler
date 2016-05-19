/* (Sum of multiples of 3) + (Sum of multiples of 5) - (Sum of multiples of 15) */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long s(long n){ return ((n*(n+1))/2);}


int main() {

    int t;
    long n;
    cin>>t;
    
    while(t--)
        {
        cin>>n;
        n-=1;
 
        cout<<s(n/3)*3+s(n/5)*5-s(n/15)*15<<endl;
       
    }
    
    return 0;
}

