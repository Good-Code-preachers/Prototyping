#include <stdio.h>
#include<stdlib.h>


int TwoArray[5][10]={                {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
                                     {-1, 0, 0, 0, 0, 0, 0, 0, 0,-1},
                                     {-1, 0, 0, 0, 0,-1, 0, 0, 0,-1},
                                     {-1, 0,-1, 0, 0, 0, 0,-1, 0,-1},
                                     {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1} };

 void PrintNewArray();
 int West(int x , int y, int z)  ;
 int North(int x , int y, int z)  ;
 int East(int x , int y, int z)  ;
 int South(int x , int y, int z)  ;
 
void NewArray()
            {                    
                TwoArray[3][8]= 1;
                
                West(3,8,1);
                North(3,8,1);
                East(3,8,1);
                South(3,8,1);
            }


int main()
{


   NewArray();
   PrintNewArray();
   

    return 0;
}

 int West(int x , int y, int z)  
              {
                  
                int counter,n; 
                 n=y-1; 
                 
               
               if (TwoArray[x][n]!=-1)
                    {
                        
                        if(TwoArray[x][n]==0){
                   counter = z+1 ;
                      
                     TwoArray[x][n]= counter;
                            South(x,n,counter);
                            North(x,n,counter);
                            East(x,n,counter);
                            
                    return  West(x,n,counter) ;  
                        }
                     } 
              }
     
 int North(int x , int y, int z)  
              {
                  
                int counter,n; 
                 n=x-1;  
               if (TwoArray[n][y]!=-1)
                    {
                    if (TwoArray[n][y]==0) {
                   counter = z+1 ;
                      
                     TwoArray[n][y]= counter;
                     

                      East(n,y,counter);
                      West(n,y,counter) ;
                      South(n,y,counter) ;
                    return  North(n,y,counter) ;  
                    }
                     } 
              }   
int East(int x , int y, int z)  
              {
                  
                int counter,n; 
                 n=y+1;  
               if (TwoArray[x][n]!=-1)
                    {
                    if (TwoArray[x][n]==0) {
                   counter = z+1 ;
                      
                     TwoArray[x][n]= counter;
                     
                     West(x,n,counter) ;  
                     North(x,n,counter) ;  
                     South(x,n,counter) ;  
                    return  East(x,n,counter) ;  
                    }
                     } 
              }
                  
 int South(int x , int y, int z)  
              {
                  
                int counter,n; 
                 n=x+1;  
               if (TwoArray[n][y]!=-1)
                    {
                    if (TwoArray[n][y]==0){
                   counter = z+1 ;
                      
                     TwoArray[n][y]= counter;
                     
                     North(n,y,counter);
                     East(n,y,counter);
                     West(n,y,counter);
                    return  South(n,y,counter) ;  
                    }
                     } 
              }   
 void PrintNewArray()
                {
                     int i, j;
                    
          for(i=0; i<5; i++) 
                  {
                 for (j=0; j<10; j++)
                      {
                        if(TwoArray[i][j]<0)
                        {
                            printf(" ");
                            printf("%d", TwoArray[i][j]);}
                        
                        else { 
                            printf(" ");
                            printf(" ");
                            printf("%d", TwoArray[i][j]);
                             }
                        
                      }
                      
                    printf("\n");  
                  }  
                    
                    
                }