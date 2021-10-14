#include <stdio.h>

int main(){
    FILE *fi = fopen("lab1.txt", "r");
    FILE *fo = fopen("lab1-copy.txt", "w");
    int c;
    c = fgetc(fi);
    while(!feof(fi)){
        if(c >= 'A' && c <= 'Z'){
            c = c + 32;
        }
        else if(c >= 'a' && c <= 'z'){
            c = c -32;
        }   
        fputc(c, fo);
        c = fgetc(fi);
    }
    fclose(fi);
    fclose(fo);
    return 0;
}