#include <iostream>
using namespace std;

int x=10 ;   //global 
    
int main() {
    /* ******* 1 FOR TRUE & 0 FOR FALSE *********  */
    int a=4 , b=6 ;
   cout<<"Following are the comparison operator " ;
   cout <<"the value of a==b is : " << (a==b) <<endl;
   cout <<"the value of a!=b is : " << (a!=b) <<endl;
   cout <<"the value of a>=b is : " << (a>=b) <<endl;
   cout <<"the value of a<=b is : " << (a<=b) <<endl;
   cout <<"the value of a>b is : " << (a>b) <<endl;
   cout <<"the value of a<b is : " << (a<b) <<"\n\n";
   
   /* ********* GLOBAL AND LOCAL ************** */
   
int x=20;              //Local 
  cout<<:: x<<endl;    // :: that means the global 
  
  /* ********** CONST ********** */
    
    cout<<"\n\n" ;
    
    const int n=20;
          //if we change like n=30 it gives error because n is constanc cannot change 
     cout << "The value of constant n is :"<<n; 
 }