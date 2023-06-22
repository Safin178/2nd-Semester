#include<bits/stdc++.h>
using namespace std;


  /*
    Video 1: S02 STL vector, string, iterator
    vector
    iterator
    range-based loop
    string
    sort, reverse, find function
    Resources:
    Leetcode string tagged problems: https://leetcode.com/tag/string/?__cf_chl_captcha_tk__=pmd_ac4cd981f8b2c087cccfcc54ee9d064b44ddd58e-1628072928-0-gqNtZGzNArijcnBszQyi
    
    Mostafa Saad STL script: https://raw.githubusercontent.com/mostafa-saad/ArabicCompetitiveProgramming/master/15%20C%2B%2B%20Programming%204%20Competitions/40%20C%2B%2B%20Programming%204%20Competitions%20-%20STL.cpp
    
    Cpp reference STL: https://www.cplusplus.com/reference/stl/
    
    Geeks for geeks STL: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
    
    Topcoder STL (Part 1): //http://community.topcoder.com/tc?module=Static&d1=tutorials&d2=standardTemplateLibrary 
    Topcoder STL (Part 2): //http://community.topcoder.com/tc?module=Static&d1=tutorials&d2=standardTemplateLibrary2


  */


int main() 
{
    //int arr[100];
   int n;
   cin >> n;
   vector<int>arr(5, 20);
//    arr.push_back(5);
//   // cout << arr[0] << endl;
//   cout << (int) arr.size() << arr[3]<< endl;
//   //arr.size() O(1) e kaj kore

//vector input >

  for(int  i =0 ; i < n; i++)
  {
    int x;cin >> x;
    arr.push_back(x);
  }
    for(int  i =0 ; i < (int)arr.size(); i++)
  {
   cout << arr[i] << " ";
  }

    //eikane jodi vector<int>arr(5, 10); likle 5 size er array jetar shob element 10











   return 0;
}