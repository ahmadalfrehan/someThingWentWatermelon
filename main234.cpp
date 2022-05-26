/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;
using std::max;
int compute_min_refills(int dist, int tank, int x[]) {
    // write your code here
    	int numr=0,curr=0;
	int lastr;
	while(curr<=tank)
	{
		lastr=curr;
	while((curr<=tank)&&((x[curr+1]-x[lastr])<=dist))
	{	
	curr++;
	}
	if(curr==lastr)
	return -1;
	if(curr<=tank)
	numr=numr+1;
	}
	return numr;
	
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;
    n++;
    n++;
    int x[6];
    x[0]=0;
    for (size_t i = 1; i < n-1; ++i)
        cin >> x[i];
    x[5]=d;
    cout << compute_min_refills(m, n, x) << "\n";

    return 0;
}
