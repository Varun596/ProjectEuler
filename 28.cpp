#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#define M 1000000007
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n ;
        cin>>n;
        if(n==1)
            cout<<n<<endl;
        else{
            long long int sum;
            n = n/2 %M; 
            sum = ( (( 16 * n%M * n%M * n%M )%M +  ( 30 * n%M * n%M)%M )%M + ((26 *n%M) + 3 )%M )%M;
            sum = (sum % M * 333333336 %M ) %M;
            cout<<sum%M<<endl;           
       }
    }
    return 0;
}
