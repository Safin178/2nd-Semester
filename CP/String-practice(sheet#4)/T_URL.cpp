#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)	((v).begin()), ((v).end())
#define sz(v)	((int)((v).size()))
#define ll long long
#define pb push_back
#define endll '\n'
#define CY cout<<"YES\n";
#define CN cout<<"NO\n";
#define CYR cout<<"YES\n";return;
#define CNR cout<<"NO\n";return;
#define vit vector<int>::iterator  
#define forcin(n) for(auto &x : n) cin>>x;
#define forcout(n) for(auto x : n) cout << x << " ";
void printVec(vector<int> v2, string s = "")//vector ke print kore just printVec(v) likle hobe
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<<v2[i]<<" ";
		cout<<"\n";
}

void solve()//oabji pura same to same
{
    string s;
    cin >> s;
    int x = 0, i;

    x = s.find("username=");
    cout << "username: ";
    for(i = x+9; s[i] != '&' ; i++)
    {
        cout << s[i];
    }
    cout << endll;

    x = s.find("pwd=");
    cout << "pwd: ";
    for(i = x+4; s[i] != '&' ; i++)
    {
        cout << s[i];
    }
    cout << endll;

    x = s.find("profile=");
    cout << "profile: ";
    for(i = x+8; s[i] != '&' ; i++)
    {
        cout << s[i];
    }
    cout << endll;

    x = s.find("role=");
    cout << "role: ";
    for(i = x+5; s[i] != '&' ; i++)
    {
        cout << s[i];
    }
    cout << endll;

    x = s.find("key=");
    cout << "key: ";
    for(i = x+4; s[i]  ; i++)//eta te jamila cilo
    {
        cout << s[i];
    }
    cout << endll;



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}

/*//! eta C diye korsilam, shundor korei korsilam
#include <stdio.h>
#include <string.h>
int j = 0;
void name()
{
    if (j == 0)
    {
        printf("username: ");
    }
    if (j == 1)
    {
        printf("pwd: ");
    }
    if (j == 2)
    {
        printf("profile: ");
    }
    if (j == 3)
    {
        printf("role: ");
    }
    if (j == 4)
    {
        printf("key: ");
    }
}

int main()
{
    

   // http://www.cleartrip.com/signin/service?username=test&pwd=test&profile=developer&role=ELITE&key=manager

    
    char m[200000];
    scanf("%s", m);
    int f = 0, i;
    int x = strlen(m);
    for (i = 0; i < x; i++)
    {
        if (f == 1)
        {
            if (m[i] != '&')
                printf("%c", m[i]);
        }

        if (m[i] == '=')
        {
            name();
            f = 1;
            j++;
        }
        if (m[i] == '&')
        {
            printf("\n");
            f = 0;
        }
    }

    return 0;
}



*/