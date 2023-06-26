#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
#define vi  vector<int>
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "

void solve2(){
    int n;
    cin >> n;
    vi arr(n);
    vi :: iterator it,p1,p2;

    forcin(arr);

    int min=arr[0];
    int max=arr[0];
    for(it=arr.begin();it!=arr.end();it++){
        if(min>*it){
            p1=it;
            min = *it;
        }
        if(max<*it){
            p2=it;
            max = *it;
        }
    }
    swap(arr[p1-arr.begin()],arr[p2-arr.begin()]);

    forcout(arr);

}
void solve()
{

    //ami mone hocce parbo tai eta ar korlam na




}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve2();
    }
    return 0;
}