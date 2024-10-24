#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define txt "Programming-Project-2.txt"

int main(){
    FILE* commands;
    commands = fopen(txt, "r");
    if(commands == NULL){
        printf("empty");
        return 0;
    }
    char op[10];
    int shift;
    uint32_t hexA, hexB;

    while(fscanf(commands, "%s %X %X", op, &hexA, &hexB) == 3 || fscanf(commands, "%s %X", op, &hexA) == 2 || fscanf(commands, "%s %X %d", op, &hexA, &shift) == 3){
        const char add[] = "ADD";
        const char and[] = "AND";
        const char asr[] = "ASR";
        const char lsr[] = "LSR";
        const char lsl[] = "LSL";
        const char not[] = "NOT";
        const char sub[] = "SUB";
        const char orr[] = "ORR";
        const char xor[] = "XOR";
        if(strcmp(op, add) == 0 || strstr(op, add)){ //ADD operation
            int32_t addSum = hexA + hexB;
            printf("%s 0x%X 0x%X < 0x%X > \n", op, hexA, hexB, addSum);
        }
        else if(strcmp(op, sub) == 0 || strstr(op, sub)){ //SUB operation
            uint32_t subSum = hexA - hexB;
            printf("%s 0x%X 0x%X < 0x%X > \n", op, hexA, hexB, subSum);
            
        }
        else if(strcmp(op, and) == 0 || strstr(op, and)){ //AND operation
            uint32_t andSum = hexA & hexB;
            printf("%s 0x%X 0x%X < 0x%X > \n", op, hexA, hexB, andSum);
    }
        else if(strcmp(op, orr) == 0 || strstr(op, orr)){ //ORR operation
            uint32_t your = hexA | hexB;
            printf("%s 0x%X 0x%X < 0x%X > \n", op, hexA, hexB, your);
    }    
        else if(strcmp(op, xor) == 0 || strstr(op, xor)){ //XOR operation
            uint32_t naur = hexA ^ hexB;
            printf("%s 0x%X 0x%X < 0x%X > \n", op, hexA, hexB, naur);
    }   
        //     else if(strcmp(op, asr) == 0 || strstr(op, asr)){
        //     uint32_t right = hexA >> shift;
        //     printf("%s 0x%X %d < 0x%X > \n", op, hexA, shift, right);
        // }
    }
    fclose(commands);
    return 0;
}