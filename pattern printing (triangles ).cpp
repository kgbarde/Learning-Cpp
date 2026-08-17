#include <iostream>
using namespace std;

int main (){
    int m;
     cout<<"Enter number of row : " ;
     cin>>m;
     cout<<endl;
     cout <<"* -------------------------------- *\n\n\n" ;
      
     //number triangle
        //same number in column 
        
     for(int i=1;i<=m;i++){       
        for(int j=1;j<=i;j++){   
        cout<<j<<" "  ;
        }
        cout<<endl ;
     }
        cout <<"\n\n* -------------------------------- *\n\n\n" ;
        
                for(int i=1;i<=m;i++){ 
        for(int j=1;j<=m-i+1;j++){ 
        cout<<j<<" " ;
        }
        cout<<endl ;
      }
        cout <<"\n\n" ;
   
        cout <<"* -------------------------------- *\n\n\n" ;
        
      
     
     for(int i=1;i<=m;i++){ 
        for(int j=1;j<=i;j++){ 
        cout<<"* " ;
        }
        cout<<endl ;
      }
        cout <<"\n\n" ;
   
        cout <<"* -------------------------------- *\n\n\n" ;
        
        for(int i=1;i<=m;i++){ 
        for(int j=1;j<=m-i+1;j++){ 
        cout<<"* " ;
        }
        cout<<endl ;
      }
        cout <<"\n\n" ;
   
        cout <<"* -------------------------------- *\n\n\n" ;

      
        //same number in row 
         
     for(int i=1;i<=m;i++){       
        for(int j=1;j<=i;j++){   
        cout<<i<<" "  ;
        }
        cout<<endl ;
     }
        cout<<"\n\n" ;
   
        cout <<"* -------------------------------- *\n\n\n" ;
        
        //one row number & one row letter ;
      
      for(int i=1;i<=m;i++){       
        for(int j=1;j<=i;j++){   
        if (i%2==0) cout<<j;
        if (i%2!=0) cout<<char(j+64);
        }
        cout<<endl ;
     }
        cout<<"\n\n" ;
        
        cout <<"* -------------------------------- *\n\n\n" ;
         
}