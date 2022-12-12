#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lab1.h"


char* readString(char* file){

    char* ptr = malloc(MAX_LINE_LEN*sizeof(char));
    FILE* txt = fopen(file,"r");
    strcpy(ptr,fgets(ptr,MAX_LINE_LEN-1, txt));
    fclose(txt);

    return ptr;

}

char* mysteryExplode(const char* str){

    int len = strlen(str)-1;
    char* newStr = calloc(((len*(len+1))/2),1);
    int count = 0;
    for(int j = 0; j < len; j++){

        for(int k = 0; k < j+1; k++){

            strncat(newStr,&str[k],1);
        }
    }

    return newStr;
}

