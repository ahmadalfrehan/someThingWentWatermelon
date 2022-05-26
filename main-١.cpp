#include <iostream>

using namespace std;
int fib (int n ){
int gg[n+2];

gg[0]=0;
gg[1]=1;
    for(int i =2;i<=n;i++)
gg[i]=gg[i-1]+gg[i-2];
return gg[n];

}

int main()

{
    int n ;
    cin>>n;
    cout<<fib(n);
    return 0;
}
