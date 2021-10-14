#include <stdio.h>

#define N 80

int main(int argc, char *argv[]){
    FILE *f = fopen(argv[1], "a+");
    char s[80], buff[N];
    int count = 0;
    while(fgets(buff, N, f)){
        s[count] = buff[0];
        count++; 
    }
    fprintf(f, "%s", s);
    fclose(f);
    return 0;
}