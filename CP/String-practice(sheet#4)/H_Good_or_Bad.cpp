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
    cin >> s;

    int x = s.find("101" , 0);//return kore hocce 1 index e position jekane pawa shoro ei sub str.. na paile -1 return
    int y = s.find("010" , 0);
    if(x >= 0 || y >= 0) cout << "Good\n";
    else cout << "Bad\n";

    //ref : mostafa saad strbasictest

    //https://cplusplus.com/reference/string/string/
    //though ami dekhi nai uporer ta , saad bhai er ta deksi

    // x=s.find("101");
    //     y=s.find("010"); eirokom dileo kaj korto 0 oita dewa lagto na

}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}

// eta c diye korsilam
/*
#include<stdio.h>
#include<string.h>
int main()
{
    
   int t;
   scanf(" %d ", &t);
   while(t--)
   {
        char s[100000];
        scanf("%s", s);
        int f = 0, i , j;
        for(j= 0; j < (strlen(s)-2) ; j++)
        {
            //for(j = 0; j <= i; j++)
            //{
                if(((s[j] == '0') && (s[j+1] == '1') && (s[j+2] == '0')) || ((s[j] == '1') && (s[j+1] == '0') && (s[j+2] == '1')))
                {
                 f = 1;break;}
            //}

        }
        if(f == 1)
        {
            printf("Good\n");
        }
        else
        printf("Bad\n");

   }








    return 0;
}





*/