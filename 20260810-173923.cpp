#include<iostream>
using namespace std;

int main()
{
int n ; 
cout<<"enter your marks : "  ;
cin>> n ; 
if( n>=80 and n<=100 ) {
             cout<<"very good ";
}
if(n>=50 and n<80 ) {
             cout<<"good" ;
}
if(n>=10 and n<50 ){
              cout<<"average" ;
}
if(n>=0 and n<10 ) {
               cout<<"fail";
}
    return 0;
}