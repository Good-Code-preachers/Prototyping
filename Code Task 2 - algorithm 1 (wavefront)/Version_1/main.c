/*
A very simple text based simulation of a rescue scenario. Wall, robot and target only.

Copyright 2021 Kristian Rother (kristian.rother@hshl.de)

Redistribution and use in source and binary forms, with or without modification, are permitted provided
that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions
and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions
and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to
endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <stdio.h>
#include <stdlib.h>


int NewArray(char*,int*);
int Algorithm(int*, char*);
int up(int*,char*,int,int );
int down(int*,char*,int,int );
int forward(int*,char*,int,int);
int backward(int*,char*,int, int); 
int decision(char*, int*);

// THIS IS THE FUNCTION YOU IMPLEMENT
int move(char* world)
      {
               int Array[200];
               int robot;
               NewArray(world,Array);
               int a,b,c,d;
              for (int i = 0; i < 200; ++i) {
                 if (world[i] == 'R') {
                  robot= i;
                            }
                       }
               
                   
                   a=Array[robot-21];//return 1;
                   c=Array[robot+1];//return 2;
                   d=Array[robot-1];//return 4;
                   b=Array[robot+21];//return 3;
                   
                    if(a==-1 && b==-1 && c==-1 && d!=-1)
                                        {return 4;}
                    else if(a==-1 && b==-1 && c!=-1 && d==-1)
                                        {return 2;} 
                    else if(a==-1 && b!=-1 && c==-1 && d==-1)
                                        {return 3;}
                    else if(a!=-1 && b==-1 && c==-1 && d==-1)
                                        {return 1;}
                                        
                                
                   
                   

                  else if(a==-1 && b==-1 && c!=-1 && d!=-1)
                                        {
                                           if(c<=d){return 2;} 
                                           else{return 4;} 
                                        }
                  else if(a!=-1 && b!=-1 && c==-1 && d==-1)
                                        {
                                           if(a<=b){return 1;} 
                                           else{return 3;} 
                                        }
                  else if(a==-1 && b!=-1 && c==-1 && d!=-1)
                                        {
                                           if(b<=d){return 3;} 
                                           else{return 4;} 
                                        }
                  else if(a!=-1 && b==-1 && c!=-1 && d==-1)
                                        {
                                           if(a<=c){return 1;} 
                                           else{return 2;} 
                                        }
                  else if(a!=-1 && b==-1 && c==-1 && d!=-1)
                                        {
                                           if(a<=d){return 1;} 
                                           else{return 4;} 
                                        }  
                  else if(a==-1 && b!=-1 && c!=-1 && d==-1)
                                        {
                                           if(b<=c){return 3;} 
                                           else{return 2;} 
                                        }
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                  else if(a==-1 && b!=-1 && c!=-1 && d!=-1)
                                        {
                                           if(b<=c && b<=d){return 3;} 
                                           else if(c<=b && c<=d){return 2;}
                                           else{return 4;} 
                                        }
                  else if(a!=-1 && b==-1 && c!=-1 && d!=-1)
                                        {
                                           if(c<=d && c<=a){return 2;} 
                                           else if(d<=c && d<=a){return 4;}
                                           else{return 1;} 
                                        }
                  else if(a!=-1 && b!=-1 && c==-1 && d!=-1)
                                        {
                                           if(a<=b && a<=d){return 1;} 
                                           else if(b<=d && b<=a){return 3;}
                                           else{return 4;} 
                                        }                    
                  else if(a!=-1 && b!=-1 && c!=-1 && d==-1)
                                        {
                                           if(a<=b && a<=c){return 1;} 
                                           else if(b<=a && b<=c){return 3;}
                                           else{return 2;} 
                                        }  
                                        
                  else if(a!=-1 && b!=-1 && c!=-1 && d!=-1)
                                        {
                                           if(a<=b && a<=c && a<=d){return 1;} 
                                           else if(b<=a &&b<=c && b<=d){return 3;}
                                           else if(c<=a &&c<=b && c<=d){return 2;}
                                           else{return 4;} 
                                        }  
                                        
                 else {return 0;}
                                        
                                        
        }
// Return target index
int update_world(int movement, char* world, int robot_index, int width) {
    int target_index = 0;
    // NORTH
    if (movement == 1) {
        target_index = robot_index - (width + 1); // +1 for the newline
    }
    // SOUTH
    else if (movement == 3) {
        target_index = robot_index + (width + 1); // +1 for the newline
    }
    // EAST
    else if (movement == 2) {
        target_index = robot_index + 1;
    }
    // WEST
    else if (movement == 4) {
        target_index = robot_index - 1;
    }

    // ACTION
    if (world[target_index] == 'O') {
        world[target_index] = 'R';
        world[robot_index] = 'O';
        return target_index;
    }
    else if (world[target_index] == '#') {
        printf("%s", world);
        printf("%c", '\n');
        printf("FAILURE, crashed into a wall!");
        exit(1);
    }
    else if (world[target_index] == 'T') {
        world[target_index] = 'R';
        world[robot_index] = 'O';
        printf("%s", world);
        printf("%c", '\n');
        printf("SUCCESS, target found!");
        exit(0);
    }
}

int main() {
    const int MAX_STEPS = 200;
    int step = 1;

    int movement;
    int width = 20; // excluding newlines

    // The world
    char world[200] = {
        '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','\n',
        '#','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','#','\n',
        '#','O','O','O','O','#','#','#','#','#','O','O','O','O','O','O','O','O','O','#','\n',
        '#','O','O','O','O','#','T','O','O','#','O','O','O','O','O','O','O','O','O','#','\n',
        '#','O','O','O','O','#','#','#','O','#','O','O','O','O','O','O','O','O','O','#','\n',
        '#','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','#','\n',
        '#','O','O','O','O','O','O','O','O','O','O','R','O','O','O','O','O','O','O','#','\n',
        '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','\n'
    };

    // Initialize target and robot positions
    // Assumes only one target, one robot
    unsigned int elements = sizeof(world) / sizeof(world[0]);

    // Initialize the index of the robot and the target.
    // Assumes exactly one robot and one target
    int robot_index;
    int target_index;

    for (int i = 0; i < elements; ++i) {
        if (world[i] == 'R') {
            robot_index = i;
            break;
        }
    }
    for (int i = 0; i < elements; ++i) {
        if (world[i] == 'T') {
            target_index = i;
            break;
        }
    }

    // Print the initial world
    printf("Starting position: %c", '\n');
    // Debug output
    // printf("Robot index: %i / target index: %i %c", robot_index, target_index, '\n');
    printf("%s", world);
    printf("%c", '\n');

    while (step <= MAX_STEPS) {
        printf("After step number %i: %c", step, '\n');

        movement = move(world);
        robot_index = update_world(movement, world, robot_index, width);
        printf("%s", world);
        printf("%c", '\n');
        step = step + 1;
    }
    if (step >= MAX_STEPS) {
        printf("FAILURE, maximum number of steps exceeded.");
    }

}



int NewArray(char* world,int* Array)
            {
                
                for(int i = 0; i<200;i++)
                {
                    if( world[i]=='#')
                                {Array[i]= -1;}
                    else if (world[i]=='T')
                                {Array[i]= 1;}
                    else if(world[i]=='O')
                                {Array[i]=0;}
                    else if( world[i]=='R')
                                {Array[i]=0;}
                    else{Array[i]=0;}
                }
                
                   Algorithm(Array,world);
            }
 
 int Algorithm(int* Array, char* world)
                { 
                    int z=1;
                  
                  int TargetPosition;

                  for(int i = 0; i<200;i++)
                        {
                          if(Array[i]==1)
                              {TargetPosition=i;}
                        }
                        up(Array,world,TargetPosition,z);
                        down(Array,world,TargetPosition,z);
                        forward(Array,world,TargetPosition,z);
                        backward(Array,world,TargetPosition,z);
                }

int up(int* Array,char* world,int TargetPosition,int z)
        {  

                int counter,n; 
                 n=TargetPosition-21;  
               if (Array[n]!=-1){
                    if (Array[n]==0) {
                     counter = z+1 ;
                     Array[n]= counter;
                     up(Array,world,n,counter);
                     forward(Array,world,n,counter);
                     backward(Array,world,n,counter);
                     down(Array,world,n,counter);  

                     } 
                    }
        }
int down(int* Array,char* world,int TargetPosition,int z)
         {

                int counter,n; 
                 n=TargetPosition+21;
                 if (Array[n]!=-1){
                    if (Array[n]==0){
                   counter = z+1 ;

                     Array[n]= counter;

           
                     up(Array,world,n,counter);
                     forward(Array,world,n,counter);
                     backward(Array,world,n,counter);
                     down(Array,world,n,counter);  
                    
                     } 
                 }

         }
int forward(int* Array,char* world,int TargetPosition,int z)
            {
                int counter,n; 
                 n=TargetPosition+1;  
                 if (Array[n]!=-1){
                    if (Array[n]==0) {
                    counter = z+1 ;

                     Array[n]= counter;

                     up(Array,world,n,counter);
                     forward(Array,world,n,counter);
                     backward(Array,world,n,counter);
                     down(Array,world,n,counter);   
                    }
                 }
                     


            }
 int backward(int* Array,char* world,int TargetPosition, int z)  
              {

                int counter,n; 
                 n=TargetPosition-1; 

                  if (Array[n]!=-1){
                    if(Array[n]==0){
                    counter = z+1 ;

                     Array[n]= counter;
                     up(Array,world,n,counter);
                     forward(Array,world,n,counter);
                     backward(Array,world,n,counter);
                     down(Array,world,n,counter);  
                             }
                  }
                     
            }
