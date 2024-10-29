//Author: Kimberly Agraan

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

    while(fscanf(commands,"%s", op) == 1){
        const char add[] = "ADD";
        const char and[] = "AND";
        const char asr[] = "ASR";
        const char lsr[] = "LSR";
        const char lsl[] = "LSL";
        const char not[] = "NOT";
        const char sub[] = "SUB";
        const char orr[] = "ORR";
        const char xor[] = "XOR";
        if(strcmp(op, add) == 0 || strstr(op, add)){
            int32_t hexA, hexB;
            if(fscanf(commands, "%X %X", &hexA, &hexB) == 2){ //ADD operation
            int32_t addSum = hexA + hexB;
            printf("%s 0x%X 0x%X: 0x%X  \n", op, hexA, hexB, addSum);
            } 
        } 
        else if(strcmp(op, and) == 0 || strstr(op, and)){
            uint32_t hexA, hexB;
            if(fscanf(commands, "%X %X", &hexA, &hexB) == 2){ //AND operation
            uint32_t andSum = hexA & hexB;
            printf("%s 0x%X 0x%X: 0x%X  \n", op, hexA, hexB, andSum);
            }             
        }        
        else if(strcmp(op, asr) == 0 || strstr(op, asr)){
            int32_t hexA;
            if(fscanf(commands, "%X %d", &hexA, &shift) == 2){ //ASR operation
                int32_t right = (int32_t) hexA >> shift;  
                printf("%s 0x%X %d: 0x%X  \n", op, hexA, shift, right);
            }
        }
        else if(strcmp(op, lsr) == 0 || strstr(op, lsr)){
            uint32_t hexA;
            if(fscanf(commands, "%X %d", &hexA, &shift) == 2){ //LSR operation
                uint32_t right = hexA >> shift;  
                printf("%s 0x%X %d: 0x%X  \n", op, hexA, shift, right);
            }
        }       
        else if(strcmp(op, lsl) == 0 || strstr(op, lsl)){
            uint32_t hexA;
            if(fscanf(commands, "%X %d", &hexA, &shift) == 2){ //LSL operation
                uint32_t left = hexA << shift;  
                printf("%s 0x%X %d: 0x%X  \n", op, hexA, shift, left);
            }
        }    
        else if(strcmp(op, not) == 0 || strstr(op, not)){
            uint32_t hexA;
            if(fscanf(commands, "%X", &hexA) == 1){ //NOT operation
            uint32_t no = ~hexA;
            printf("%s 0x%X: 0x%X  \n", op, hexA, no);
            }             
        }  
        else if(strcmp(op, sub) == 0 || strstr(op, sub)){
            uint32_t hexA, hexB;
            if(fscanf(commands, "%X %X", &hexA, &hexB) == 2){ //SUB operation
            uint32_t subSum = hexA - hexB;
            printf("%s 0x%X 0x%X: 0x%X  \n", op, hexA, hexB, subSum);
            }            
        }
        else if(strcmp(op, orr) == 0 || strstr(op, orr)){
            uint32_t hexA, hexB;
        if(fscanf(commands, "%X %X", &hexA, &hexB) == 2){ //ORR operation
                uint32_t your = hexA | hexB;
                printf("%s 0x%X 0x%X: 0x%X  \n", op, hexA, hexB, your);            
            }            
        }
        else if(strcmp(op, xor) == 0 || strstr(op, xor)){
            uint32_t hexA, hexB;
            if(fscanf(commands, "%X %X", &hexA, &hexB) == 2){ //XOR operation
                uint32_t naur = hexA ^ hexB;
                printf("%s 0x%X 0x%X: 0x%X  \n", op, hexA, hexB, naur);
                        
            }
        }
    }
    fclose(commands);
    return 0;
}