#include <iostream> 
using namespace std;
int main(){
int m,n;
cout<<"Enter number of rows   : " ;
cin>>m ;
cout<<"Enter number of columns: " ;
cin>>n ;
cout <<"\n\n" ;
   
      cout <<"* -------------------------------- *\n \n" ;

//There are two variable 

for(int i=1;i<=m;i++){         //rows 
      for(int j=1;j<=n;j++){   //columns 
      cout<<" *" ;
      }
      cout<<endl;
 }
      cout <<"\n\n" ;
   
      cout <<"* -------------------------------- * \n\n" ;
   
   //there is only for one variable m;
   
   cout<<m<<"×"<<m;
   cout<<"\n\n" ; 
 for(int i=1;i<=m;i++){         
      for(int j=1;j<=m;j++){   
      cout<<" *" ;
      }
      cout<<endl;
  }          
      cout <<"\n\n" ;
   
      cout <<"* -------------------------------- * \n\n" ;
   
   //there is only one variable n ;
   
      cout<<n<<"×"<<n;
      cout<<"\n\n" ; 
  for(int i=1;i<=n;i++){         
      for(int j=1;j<=n;j++){   
      cout<<" *" ;
    }
      cout<<endl;
   }  
     cout<<"\n\n"   ;
      
        cout<<"* ---------------------------------- *\n\n" ;
        
        //thai is for number pattern printing 
        //number are same in colums, different in row 
        
   for(int i=1;i<=m;i++){         
      for(int j=1;j<=n;j++){   
      cout<<j<<" " ;
      }
      cout<<endl;
   }
      cout <<"\n\n" ;
   
      cout <<"* ----------------------------------- * \n\n" ;
        
        //thai is for number pattern printing
        //number are same in row, different in column  
        
   for(int i=1;i<=m;i++){         
      for(int j=1;j<=n;j++){   
      cout<<i ;
      }
      cout<<endl;
   }
      cout <<"\n\n" ;
   
      cout <<"* ---------------------------------- * \n\n" ;
   
        //simply add digit 
        
   for(int i=1;i<=m;i++){         
      for(int j=1;j<=n;j++){   
      cout<<j+64<<" " ;
      }
      cout<<endl;
   }
      cout <<"\n\n" ;
   
      cout <<"* ---------------------------------- * \n\n" ;
   
        //using ascii values print big  letter;
        
   for(int i=1;i<=m;i++){         
      for(int j=1;j<=n;j++){   
      cout<<(char)(j+64)<<" " ;
      }
      cout<<endl;
   }
      cout <<"\n\n" ;
   
      cout <<"* ---------------------------------- * \n\n" ;
      
      //using ascii print small letter 
 
   for(int i=1;i<=m;i++){         
      for(int j=1;j<=n;j++){   
      cout<<(char)(j+96)<<" " ;
      }
      cout<<endl;
   }
      cout <<"\n\n" ;
   
      cout <<"* ---------------------------------- * \n\n" ;
      
      //letter  are same in row 
      //letter are different in column
       
         for(int i=1;i<=m;i++){         
      for(int j=1;j<=n;j++){   
      cout<<(char)(i+96)<<" " ;
      }
      cout<<endl;
   }
      cout <<"\n\n" ;
   
      cout <<"* ---------------------------------- * \n\n" ;
 
	
}