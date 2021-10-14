#include <stdio.h>

//Caesar Caesar Caesar Caesar Caesar Caesar Caesar Caesar Caesar Caesar Caesar Caesar Caesar Caesar Caesar Caesar Caesar Caesar Caesar Caesar Caesar Caesar
int main(int argc, char *argv[]){
    FILE *fi = fopen(argv[1], "r");
    FILE *fo = fopen(argv[3], "w");
    int c, n;
    sscanf(argv[2], "%d", &n);
    while((c = fgetc(fi)) != EOF){
        if(65 <= c && c <= 90){
            if(c + n > 90){
                fputc(c + n%26 - 26, fo);
            }
            else{
                fputc(c + n, fo);
            }
        }
        else if(97 <= c && c <= 122){
            if(c + n > 122){
                fputc(c + n%26 - 26, fo);
            }
            else{
                fputc(c + n, fo);
            }
        }
        else if(c == 32){
            fputc(c, fo);
        }
    }
    fclose(fi);
    fclose(fo);
    return 0;
}