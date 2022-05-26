#include <bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 256;
int printDistinct(string str)
{
    int n = str.length();
    int count[MAX_CHAR];
    int index[MAX_CHAR];
    for (int i = 0; i < MAX_CHAR; i++)
    {
        count[i] = 0;
        index[i] = n; }
for (int i = 0; i < n; i++)
    {
        char x = str[i];
        ++count[x];

        if (count[x] == 1 && x !=' ')
            index[x] = i;
 if (count[x] == 2)
            index[x] = n;
    }
    sort(index, index+MAX_CHAR);
    for (int i=0; i<MAX_CHAR && index[i] != n; i++)
       return index[i];
}
int main()
{
    string str;
    cin>>str;
    int kd=printDistinct(str);
    if(kd%2==0)
    cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";

return 0;
}
