#include<iostream>
using namespace std;
char *removeDuplicate(char str[], int n)

{
// Used as index in the modified string
int index = 0;
// Traverse through all characters

for (int i=0; i<n; i++) {
    // Check if str[i] is present before it  
int j;

for (j=0; j<i; j++)

if (str[i] == str[j])

break;
// If not present, then add it to

// result.
if (j == i)

str[index++] = str[i];
else if(j!=i)
str[index]=str[i];
}
return str;
}
// Driver code

int main()

{
char str[100];
for(int i =0;i<100;i++)
cin>>str[i];
int n = sizeof(str) / sizeof(str[0]);

string y= removeDuplicate(str, n);
int h =y.size();
if(h%2==0)
cout<<"CHAT WITH HER!";
else 
cout<<"IGNORE HIM!";

return 0;

}

