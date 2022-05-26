#include<iostream>
using namespace std;
long Gcd(long a,long b)
{
if(b==0)
return a;
long v=a%b;
return Gcd(b,v);	
}
long lcm(long a,long b){
	return (a*b)/Gcd(a,b);
	}
int main(){
	long a,b;
	cin>>a>>b;
	long y =lcm(a,b);
	cout<<y;
	return 0;
}