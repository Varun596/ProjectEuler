#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int N){
	if(N==0||N==1)
		return false;
	for(int i=2;i<=sqrt(N);i++)
		if(N%i==0)
			return false;

	return true;
}

int check(int a,int b){
	int n=0;
	for(;;n++){
		if(isPrime(abs(n*n+a*n+b)))                     
			continue;
		else
			break;
	}
	return n;
}

int main(){

	int N,A,B,max=0,S;
	cin>>N;
	
	for(int a=-N;a<=N;a++){
		for(int b=-N;b<=N;b++){
			S=check(a,b);               
			if(S>max){
				max=S;
				A=a;
				B=b;
			}
		}
	}
	cout<<A<<" "<<B<<endl;
	
	return 0;
}
