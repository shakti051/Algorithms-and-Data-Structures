#include <bits/stdc++.h>
#define in cin>>
#define out cout<<
#define ll long long
#define ull unsigned long long
#define FOR(l)   for(int k=0; k<l; k++)
#define max(a,b) ( (a) > (b) ? (a) : (b))
#define min(a,b) ( (a) < (b) ? (a) : (b))

using namespace std;


int main(){
    int n;
    in n;
    string s;
    in s;
    int carry=1;
    int change=0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1' && carry==1)
        {
            s[i]='0';
            change++;
        }
        else if(s[i]=='0' && carry==1)
        {
            s[i]='1';
            change++;
            carry=0;
        }
        if(carry==0)
        {
            break;
        }
    }
    
    out change;
	return 0;
}
