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
   int n,i;
   cin >> n;
   vector<int>arr;
//    arr.push_back(5);
//   // cout << arr[0] << endl;
//   cout << (int) arr.size() << arr[3]<< endl;
//   //arr.size() O(1) e kaj kore

//vector input >

  for( i =0 ; i < n; i++)
  {
    int x;cin >> x;
    arr.push_back(x);
  }
    for(  i =0 ; i < (int)arr.size(); i++)
  {
      cout << arr[i] << " ";
  }
    cout << endl;
    //eikane jodi vector<int>arr(5, 10); likle 5 size er array jetar shob element 10 

    /*
       arr.pop_back(); //eta last theke ekta value dlt kore dibe

      for(  i =0 ; i < (int)arr.size(); i++)
      {
          cout << arr[i] << " ";
      }
      */

      //typedef vector<int> vi;
      //#define vi vector<int> 

      // #define sz(n) (int)(n).size() // vector etar size koto oita

    /*
      template use korte hobe

      front hocce 1st element return kore
      cout << arr.front << endl;

      back hocce last er ta print korbe
      arr.back() =500 likle last value ta chagne hoi jabe permenently
      front er ta check korte hobe kora jai kina

      arr.resize dile size boro korte parbo array er

      ekn bujhe ni  pore use korte korte mukusto hobe


    
    */

   /* iterator /kind of pointer

   vector<int>::iterator it;
   majkane just int char eigula change kore dibo
   
   arr.begin()
   cout << *arr.begin() <<endl dile 1 print korbe
   cout << *(arr.begin() + 2) << endl dile 3 print korbe

  arr.end() sesh er position denote kore

  *arr.end hocce value ig

  see notion question .

  it diye print

  for(it = arr.begin() ; it != arr.end() ; it++)
  {
    cout << *it << endl;
  }

  jekono container er jonno common;

  //google search find vector stl
  it = arr.find(arr.begin(), arr.end(), 31) 31 ase kina check korbe and return korbe iterator

  ekn etar index kemne pabo

  cout << it - arr.begin() << endl;

  mani it er address theke  1st element er address minus korbe


    jodi 50 kuji taile it er man return kore arr.end() karon 50 to nai 


    if(it != arr.end) cout << "Found";

   it = arr.find(arr.begin(), arr.begin()+4, 31);

   dile 1st theke shuru kore 2nd er ag pojonto search korbe
  69 porjonto kujbe

  sort , reverse see notion question //https://www.notion.so/safin178/Questions-18d680f7b11b4d52abe621cbefc0e19a?pvs=4#1ef8afc6ab19469fad80bad5bcc76aa4

   */

  //auto x = 5; dile x er data type value er moto copy hoi jai
  // 5 eta jeheto int taile x ekn int


/*
  ranged based for loop

  for(int x : arr)
  {
    cout << x << " ";
  }
  eikon bitore x copy hoye print hocce just

  for(auto &x : arr)
  {
    cout << x << " ";
  }
  ekn tik moto arr o change hobe and arr er data type icca moto hote pare

  vector<int>arr(n);
  size define kore dile

  for(auto &x : arr)
  {
    cin >> x;
  }
  input korte parbo
*/

  /*
  string s;

  
  s.size() //string er size koto oita

  s.length() //string er size koto oita
  doita same

  s.push_back('a'); //string er last e a add hobe
  s.pop_back(); //string er last e a remove hobe

  /////s.insert(2, "abc"); //2 no index e abc add hobe
  s.erase(2, 3); //2 no index theke 3 ta remove hobe

  ////////s.substr(2, 3); //2 no index theke 3 charecter ta print hobe
  getline(cin, s); //string input nibo \n porjonto

  getline(cin, s, 'a'); //string input nibo a porjonto
  
  getline er age int n nile jamela hoi
  tokon cin.ignore() use korte hoi
  watch   notion question

  string input

  string s;
  cin >> s;
  for(i = 0; i < (int)s.size(); i++)
  {
    cout << s[i] << endl;
  }

  int pos = s.find("abc"); //string er moddhe abc ase kina check korbe and return korbe index

  bhai co-pilot amr theke balo banglish liktese 
  
    swap function referance parameter niye kaj kore

    max(5, 10) //10 return korbe

    max("abc", "def") //def return korbe

    max(5, 10, 15) //15 return korbe

    oparetor overloading bujte hobe
    polymorphism bujte hobe

    sort(s.begin(), s.end()); //string er sob char sort kore dibe
    l theke r porjonto sort korte

    sort(s.begin()+l-1, s.begin()+r); //string er l theke r-1 porjonto sort korte
  
    vector manupulation
    mostafa saad er code dekhe nite hobe

    string basic test function
    vector basic test function

    na bujle cpp reference theke dekhte hobe

    //onno jon er code dekha lagbe
    debug skill barbe

  */














   return 0;
}