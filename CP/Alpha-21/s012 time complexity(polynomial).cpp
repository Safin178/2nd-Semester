#include<bits/stdc++.h>
using namespace std;
  /*
    ref : sheet 2 G sum 1 to N

    // input output er jonno iostream
    // bits/stdc++.h er modde shob ase

    int  er limit 2 x 10^9
    long long 9 X 10 ^18
    ref problem e N er man hobe 10^9

     amder comp 1 sec e 10^8 ta kaj korte pare approx

    1 sec e 10^8 bar loop guraite parbe //time :8 min

    manush onek kabil kinto slow🤣🤣

    10^9 loop colte kotokon lagbe?
    10^9 / 10^8 == 10 sec

    10 ^ 8 korte somoi lage 1 sec
    1 ta kaj korte shomoi lage  1 /10^8
    10^9 ta kaj korte shmoi lage 10^9/10^8

    time complexcity hishab e bhul kora jabe na
     
     N er shate somporko ki
     n joto loop gure toto
     ei jinish ke boli O(n)
      ex :
      for(i = 0;  i  <n ; i ++)
      {
        sum += i;
      }
    cin eugula ke hishabe ani na

      jodi nested loop hoi
      for( i = 0 ;  i  < n; i++)
      {
        for ( j = 0 ; j  < n;  j++)
        {
            sum += (i + j);
        }
      }
    //i er loop er jonno O(n) abar every I er jonno J er loop O(n)

    n jodi 10^5 hoi taile to 100 sec lagbe, 1 min 40 sec
    bairer loop cole n bar
    every n er jonno bitorer loop cole n bar
    total n*n bar cole pura kaj(jog korar kaj ta)
    Tai etar complexity O(n^2)

     aro ekta  loop dile O(n^3) hoi jabe..

    jodi kono problem e dekhi je n er man 10^5 taile amr kase O(n) complexcity te solve korte hobe
    tokon doita loop calai solution korar cinta o korte marbo na

    TLE amra kai na bolse sir kinto ami to kai
    ekn tle age hishab kore code er approach korte hobe


    for( i = 0 ;  i  <= n; i++)
      {
        for ( j = 0 ; j  <= k;  j++)
        {
            sum += (i + j);
        }
      }

    etar time complex koto?

    O(n * k) 

    ekn n = 10^9 ar k= 100 boli dile(maximum) amra hishab kore felte partesi

//special case>

    for( i = 0 ;  i  <= n; i++)
      {
        for ( j = 0 ; j  <= 10;  j++)
        {
            sum += (i + j);
        }
      }

 eikane time complex O(n) likhi jokon n 10^7, n er 10 ^8 hole tokon abar loop ta jamela korve
 kono variable takle likhi kinto kono constant time gun takle oigula ke amara bad diye di, like O(10*n)likhi na O(n) ei likhi

    sir n ke long long e conver korse
    s = n * (n+1) / 2;
    etar shate 1 gun korse jeta abr long long type er constant

    s  = n* 1LL * (n+1) / 2;
    othoba time cast korte pari
    s = n * (long long)*1 * (n+1) / 2;

    tokon etar time complexity O(1) etake contstant time bola hoi karon eikane n er shate somporko nai, jetai input di oitai shate shate output diye dibe

    eigolo ke polynomial time bola hoi
    kinto beshi karap jinish
    2^n, 3^n eigula exponential time eigular te n =20,30 hoilei parbo beshi hoile parbo na

     tarpor hocce factoril n!

    logarithmic log(n)

  */ 

int main() 
{
    /*
    just O(n), O(n^2) eigular kotha bolse kinto log(n) bole nai

    
    */
   return 0;
}