#include <stdio.h>
#include <stdlib.h>

int HEX_NUMBER(void);

int main(){
   
     HEX_NUMBER();
     
     return 0 ;
}   

int HEX_NUMBER (){
    int i ;
    int a = 255; 
    FILE * fptr;

    fptr = fopen("file_hex.txt","w++");

    printf("\n");
    for (i = 0 ; i <= a ; i ++){ 
        if(i <= 15){
            printf("\\x0%X",i);
            fprintf(fptr,"\\x0%X",i);
        } 
    }  
    printf("\n");
    fprintf(fptr,"\n");
    for (i = 16 ; i <= a ; i ++){ 
        if(i <= 31){
            printf("\\x%X",i);
            fprintf(fptr,"\\x%X",i);
        } 
    }  
    printf("\n");
    fprintf(fptr,"\n");
    for (i = 32 ; i <= a ; i ++){ 
        if(i <= 47){
            printf("\\x%X",i);
            fprintf(fptr,"\\x%X",i);
        } 
    }  
    printf("\n");
    fprintf(fptr,"\n");
    for (i = 48 ; i <= a ; i ++){ 
        if(i <= 63){
            printf("\\x%X",i);
            fprintf(fptr,"\\x%X",i);
        } 
    }      
    printf("\n");
    fprintf(fptr,"\n");
    for (i = 64 ; i <= a ; i ++){ 
        if(i <= 79){
            printf("\\x%X",i);
            fprintf(fptr,"\\x%X",i);
        } 
    }  
   printf("\n");
   fprintf(fptr,"\n");
    for (i = 80 ; i <= a ; i ++){ 
        if(i <= 95){
            printf("\\x%X",i);
            fprintf(fptr,"\\x%X",i);
        } 
    }  
    printf("\n");
    fprintf(fptr,"\n");
    for (i = 96 ; i <= a ; i ++){ 
        if(i <= 111){
            printf("\\x%X",i);
            fprintf(fptr,"\\x%X",i);
        } 
    }  
    printf("\n");
    fprintf(fptr,"\n");
    for (i = 112 ; i <= a ; i ++){ 
        if(i <= 127){
            printf("\\x%X",i);
            fprintf(fptr,"\\x%X",i);
        } 
    }  
    printf("\n");
    fprintf(fptr,"\n");
    for (i = 128; i <= a ; i ++){ 
        if(i <= 143){
            printf("\\x%X",i);
            fprintf(fptr,"\\x%X",i);
        } 
    }  
    printf("\n");
    fprintf(fptr,"\n");
    for (i = 144 ; i <= a ; i ++){ 
        if(i <= 159){
            printf("\\x%X",i);
            fprintf(fptr,"\\x%X",i);


        } 
    }  
    printf("\n");
    fprintf(fptr,"\n");
    for (i = 160 ; i <= a ; i ++){ 
        if(i <= 175){
            printf("\\x%X",i);
            fprintf(fptr,"\\x%X",i);
        } 
    }  

    printf("\n");
    fprintf(fptr,"\n");
    for (i = 176; i <= a ; i ++){ 
        if(i <= 191){
            printf("\\x%X",i);
            fprintf(fptr,"\\x%X",i);
        } 
    }  
    printf("\n");
    fprintf(fptr,"\n");
    for (i = 192; i <= a ; i ++){ 
        if(i <= 207){
            printf("\\x%X",i);
            fprintf(fptr,"\\x%X",i);
            
        } 
    }  
    printf("\n");
    fprintf(fptr,"\n");
    for (i = 208; i <= a ; i ++){ 
        if(i <= 223){
            printf("\\x%X",i);
            fprintf(fptr,"\\x%X",i);
        } 
    }  
    printf("\n");
    fprintf(fptr,"\n");
    for (i = 224; i <= a ; i ++){ 
        if(i <= 239){
            printf("\\x%X",i);
            fprintf(fptr,"\\x%X",i);
        } 
    } 
    printf("\n");
    fprintf(fptr,"\n");
    for (i = 240; i <= a ; i ++){ 
        if(i <= 255){
            printf("\\x%X",i);
            fprintf(fptr,"\\x%X",i);
        } 
    } 
    fclose(fptr);
    return 0 ;
}    

    




