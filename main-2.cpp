#include<iostream>
using namespace std;
int Gcd(int a,int b)
{
if(b==0)
return a;
int à=a%b;
return Gcd(b,à);	
}
int main(){
	int a,b;
	cin>>a>>b;
	int y =Gcd(a,b);
	cout<<y;
	return 0;
}