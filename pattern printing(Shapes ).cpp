#include<iostream>
using namespace std;
  int main (){
  int n;
  cout<<"Enter number of rows or column : " ;
  cin>>n;
       // a digit is once only 
   int a=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
         cout<<a<<" " ;
          a++;
    }
         cout<<endl;
  }
         cout<<" \n* -------------------------------- *\n" ;
         
  //only 0 & 1 digit triangle 
  
 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      if((i+j)%2==0) cout<<"1 ";
     else 
         cout<<"0 " ;
    }
         cout<<endl;
  }
         cout<<" \n* -------------------------------- *\n" ;
         
  // + symbol using star printing 
  
  int mid=n/2 +1;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i==mid || j==mid) cout<<"* " ;
     else
        cout<<"  "  ;
    }
        cout<<endl;
  }
        cout<<"\n* -------------------------------- *\n\n" ;
  
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i==1 || i==n ||j==n ||j==1)
        cout<<"*";
      else
        cout<<" ";
    }
        cout<<endl;
  }
        cout<<" \n\n* -------------------------------- *\n" ;
        
        //for cross(X)
        
        for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i==j || (i+j)==(n+1))
        cout<<"*";
      else
        cout<<" ";
    }
        cout<<endl;
  }
        cout<<" \n\n* -------------------------------- *\n" ;
        
        
        for(int i=1;i<=n;i++){     //     *
    for(int j=1;j<=n-i;j++){       //    **
         cout<<" " ;               //   ***
    }
         for(int j=1;j<=i;j++){
         cout<<"*" ;
         }
         cout<<endl;
  
  }
         cout<<" \n* -------------------------------- *\n" ;
         
       //Rombhua
       
       for(int i=1;i<=n;i++){     
    for(int j=1;j<=n-i;j++){       
         cout<<" " ;               
    }
         for(int j=1;j<=n;j++){
         cout<<"*" ;
         }
         cout<<endl;
  
  }
         cout<<" \n* -------------------------------- *\n" ;
}