#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{





}

//Challenge reveals the gaps in your knowledge..




void solvecupcode(){
    int n,i;
    cin >> n;
    vector<ll> arr(n);
    vector<ll>::iterator it;
    for(auto &x : arr){
        cin >> x;
    }
    for(i=0;i<(ll)arr.size();i++){
        if(arr[i]<=10){
            it=find(arr.begin()+i,arr.end(),arr[i]);
            cout << 'A' << '[' << it-arr.begin() << ']' << " " << '=' << " " << arr[i] << endl;
        }
    }
}
int main(){
    int t=1;
    //cin >> t;          // removr '//' for testcase
    while(t--){
        //solvecupcode();
        solve();
    }
    return 0;
}