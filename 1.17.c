#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *fi = fopen(argv[1], "r");
    FILE *fo = fopen(argv[2], "w");
    int c;
    while((c = fgetc(fi)) != EOF){
        if(c == 10){
            fprintf(fo, "%c", '\n');
            fputc(c, fo);
        }
        else{
            fputc(c, fo);
        }
    }
    fclose(fi);
    fclose(fo);
    return 0;
}