#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define txt "Programming-Project-2.txt"

int main(){
    FILE* commands;
    commands = fopen("txt", "r");
    if(commands = NULL){
        printf("empty");
        return 0;
    }
    char op[10];
    uint32_t hexA, hexB;

    while(fscanf(txt, "%s 0x$X 0x$X") == 3){
        if(){

        }
        elseif(){
            
        }
    }
 printf("Meow \n");

}