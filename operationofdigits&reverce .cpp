#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number : " ;
cin>>n;
int sum=0;
int multiply =1;
int evensum=0;
int oddsum=0;

while (n!=0){
int ld =n%10;
n=n/10;


sum +=ld;
multiply *=ld; 

if(ld%2==0){        //only for sum of even digit;
evensum +=ld;
:  }
if (ld%2!=0){       //only for sum of odd digit;
oddsum += ld;
   }
 }

cout<<"The sume of digits is           : " <<sum<<endl      ;
cout<<"The multiplication of digits is : " <<multiply <<endl;
cout<<"the sum of even digit is        : " <<evensum<<endl  ; 
cout<<"the sum of odd digit is        : " <<oddsum<<endl;

}