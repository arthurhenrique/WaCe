/*
 
           ____       _______    __________   __     __   __    __   _______
          /    \     |  ____  \ |___   ____| |  |   |  | |  |  |  | |  ____  \
         /  /\  \    |  |  /  /     |  |     |  |___|  | |  |  |  | |  |  /  /
        /  /  \  \   |  | /  /      |  |     |   ___   | |  |  |  | |  | /  /
       /  /    \  \  |  | \  \      |  |     |  |   |  | |  |__|  | |  | \  \
      /__/      \__\ |__|  \__\     |__|     |__|   |__|  \______/  |__|  \__\
 
 
        Para maior alegria altere os valores
        da constante "MAX" e da variável "velocidade".
 
*/
 
 
#include <stdio.h>
#define MAX 10
#define TRUE 1
 
int main(){
    int x[MAX],i,z;
    int velocidade=2;
 
    while(TRUE){
                for(i=0;i<MAX;i++)
                        x[i]=velocidade;
         
                for(i=0;i<MAX;i++){
                        while(x[i]--){
                                for(z=0;z<i;z++)
                                        printf(".");
                                printf("\n");
                        }
                }
         
                for(i=0;i<MAX;i++)
                        x[i]=velocidade;
         
                for(i=0;i<MAX;i++){
                        while(x[i]--){
                                for(z=MAX-1;z>i;z--)
                                        printf(".");
                                printf("\n");
                        }
                }          
        }
}
