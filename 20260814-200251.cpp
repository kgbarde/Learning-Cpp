#include<iostream>
using namespace std;
int main(){
// Addition, Subtraction, Division, Multiplication ;
float a, b;
 cout<<"Enter a : " ;
 cin>>a;
 cout<<"Enter b : " ;
 cin>>b;
 cout<<"sum of two numbers is        :" <<a+b <<endl;
 cout<<"subtraction of two number is :" <<a-b <<endl;
 cout<<"a divide by b is             :" <<a/b <<endl;
 cout<<"a multiply by b is           :" <<a*b <<endl ;
 cout<<"\n\n" ;
 
 cout<<"* ------------------------------------- *";
 cout<<"\n\n" ;
 //even or odd 
 
 if((int)a%2 == 0)
        cout<<" a is even number \n"  ;
   else cout<<" a is odd number  \n"  ;  
  
 if((int)b%2 == 0)
        cout<<" b is even  number \n" ;
   else cout<<" b is odd number \n"   ; 
 cout<<"\n\n" ;
  
 cout<<"* ------------------------------------- *" ;
 cout<<"\n\n" ;
 //factore of given number 
 
 cout<<" Factor of a is : ";
 for(int i=0;i<=a;i++){
 if ((int)a%i==0)
      cout<<i<<" " ;
  } 
  cout<<"\n";
  cout<<" Factor of b is : ";
  for(int i=0;i<=b;i++){
  if((int)b%i==0) 
       cout<<i<<" " ;
       
      
    }
 
 }