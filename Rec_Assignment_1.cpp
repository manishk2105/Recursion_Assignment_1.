

// Que :- Write a program to calculate the sum of odd numbers b/w a and b ie [a,b] using recursion

#include <bits/stdc++.h>
 using namespace std;
  int CalSum( int a , int b){
     int res;
     if( a%2 ==0) 
     a++;
     if( b % 2 == 0)
      b--;
       // base case
        if( a>= b) return b;
        else 
        res = a+CalSum(a+2,b);
        return res;
  
  }
//   int s( int a, int b){
//     int sum =0;
//     if( a%2 ==0) 
//      a++;
//      if( b % 2 == 0)
//       b--;
//       for(int  i=a;i<=b;i+=2){
//               sum= sum+i;
//        }
//              return sum;
//   }
   int main(){
   cout<<CalSum(3,13);
    // cout<<s(2,13);

    return 0;
  }

  


//  ques- Calculate the number of ways in which a person can climb n stairs if he
//  can take exactly 1,2 or 3 steps at each level

#include <bits/stdc++.h>
 using namespace std;
  int NWay( int n){
    
    if( n == 1 || n ==0) return 1;
     if( n == 2) return 2;
  
        // recursive call to find ways for n-1, n-2 and n-2 stairs
    
    return  NWay(n-1) + NWay(n-2) + NWay(n-3); // recursive call to find ways for n-1, n-2 and n-2 stairs
    
  }
  int main(){

     cout<< NWay(4);




    return 0;
  }



// given a positive integer , return true if it is powrer of 2
 #include <iostream>
  using namespace std;
   bool Pow( int n){
    if( n == 1) return true;
    if(n==0 || n % 2 !=0)   return false;
    return Pow(n/2);

   }
  
   int main(){
   int x; cout<<"Enter x"; cin>>x;
   cout<<Pow(x);




    return 0;
   }