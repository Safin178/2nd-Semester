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
void solve()
{
    string s;
    getline(cin , s);
    int k = 0, i;
    for(int i = 0 ; i < sz(s) ; i++)
    {
        if(s[i] == ' ')
        {
            reverse(s.begin()+k,s.begin()+i);
            k = i+1;
        }
    }

    
   reverse(s.begin()+k,s.end());

    cout << s;
}

void trash()
{
    string s;
    getline(cin , s);
    string r;
    int j = 0;

    for(int i = 0 ; i <= sz(s) ; i++)
    {
        
        r[j] = s[i];
        if( ((s[i]<='Z' && s[i]>='A') || s[i]>='a' && s[i]<='z'))
        {
            j++;
           continue;
           
        }
        else if(s[i] == ' ')
        {
            while(j--)
            {
                cout << r[j];
            }
            cout << " ";
        }
       
        else if(s[i] == '\0')
        {
            while(j--)
            {
                cout << r[j];
            }
        }
        j++;

    }



}
 
void solve_C(void)//eta C diye korsilam
{
        
    char s[100000] ;
 
    
    int len = strlen(s);
    int i, j=0;
   while (scanf("%s", s) != -1)
   {
        strrev(s);
        if(j == 0)
            printf("%s", s);
        else 
            printf(" %s", s);
        j =1;
        
   }}
int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}