#include <stdio.h>
#include <stdlib.h>
#include <stirng.h>
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

    while(fscanf(txt, "%s 0x$X 0x$X", op hexA hexB) == 3){
        uint32_t addSum = hexA + hexB;
        uint32_t subSum = hexA - hexB;
        uint32_t subSum = hexA * 2;
        uint32_t subSum = hexA / 2;
        if(strstr()){

        }
        elseif(){
            
        }
    }
 printf("Meow \n");
    fclose(op);
    return 0;
}