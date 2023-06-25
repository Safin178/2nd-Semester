#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(n) (int)(n).size()

void solve2()
{
    string s;
    int i=0;
    cin >> s;
    string x,y,z,ans=s;
    for(int i = 0; i < sz(s)-1; i++)
    {
        x = s.substr(0, i+1);
        y=s.substr(i+1);
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        z = x + y;
        if(z < ans)
        {
            ans = z;
        }
        //cout << z << endl;
    }
    cout << ans;
    

}

// void solve(void)
// {
//     char s[100000];
//     scanf("%s", s);
//     int n = strlen(s);
//     int i , j, temp;
//     for( i = 1; i < n; i++)
//     {
//         for( j = 1; j < n; j++)
//         {
//             if(s[i] < s[j])
//             {
//                 temp = s[i];
//                 s[i] = s[j];
//                 s[j] = temp;
//             }
//         }
//     }

//     printf("%s\n", s);
    
// }

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