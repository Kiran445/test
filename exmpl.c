#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
    int pid = 0;
    pid = fork();
    if(pid == 0){
       printf("in child");
       }
       else
       printf("in parent process %d");
       return 0;
     }
     
