#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define sz(n) (int)(n).size() 
#define vi vector<int>

void solve()
{
    int x,i;
     vector<int> v;// vector hocce array but better
    for(i = 0; i < 5; i++)
    {
        cin >> x;
        v.push_back(x);
    }//---------------------------------------------vector input
    
    // for(  i =0 ; i < sz(v); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    ////-------------------------------------------------vector output

   // int l = v.empty();// see notion-------------------v.empty()
   
    //cout << l;

    /*
        //------------------------------------------------v.resize()
        vector < int > v(20);
        for (int i = 0; i < 20; i++) {
            v[i] = i ;
        }
        v.resize(25);
        for (int i = 20; i < 25; i++) {
            v.push_back(i); // Writes to elements with indices [25…30), not [20…25) ! <
            //v[i] = i;  dile jinish ta normally colto 
        }

        for(i = 0; i < sz(v); i++)
        {
            cout << v[i] << " ";
        }


   */

   // v.clear(); pura vector clear kore dibe-----------v.clear();


    /*
        vector < string > names(6, "safin");

        for(i = 0; i  < sz(names); i++)
        {
                cout << names[i] << endl; 
        }
   */
  /*// ------------------------------------------------vector copy kemne kore 
    vi v2;
        v2 = v;
    vi v3(v.begin(), v.begin()+2);//6 er ag porjonto copy hoise
    cout << sz(v2) << " "<< sz(v3) ;
    */

   





}


int main(){
    int t=1;
    //cin >> t;          // removr '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}