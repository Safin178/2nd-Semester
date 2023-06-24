#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(n) (int)(n).size()

void solve2()
{
    string s;
    cin >> s;

    for(int i = 0; i < sz(s); i++)
    {
        
    }














}
























void solve(void)
{
    char s[100000];
    scanf("%s", s);
    int n = strlen(s);
    int i , j, temp;
    for( i = 1; i < n; i++)
    {
        for( j = 1; j < n; j++)
        {
            if(s[i] < s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("%s\n", s);
    
}

int main()
{
    int t = 1;
    //scanf("%d", &t);   // remove '//' for test case
    
    while(t--)
    {
        //solve(); wa astese
        solve2();
    }
    return 0;
}