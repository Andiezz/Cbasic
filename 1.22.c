#include <stdio.h>
#include <string.h>

#define MAX_LEN 80

int main(int argc, char *argv[]){
    FILE *f1 = fopen(argv[1], "r");
    FILE *f2 = fopen(argv[2], "r");
    FILE *f3 = fopen(argv[3], "w");
    char buff[MAX_LEN];
    while(1) {
        int check = 0;
        if (fgets(buff, MAX_LEN, f1) != NULL){
            fputs(buff, f3);
            check++;
        }
        if (fgets(buff, MAX_LEN, f2) != NULL){
            fputs(buff, f3);
            check++;
        }
        if (check == 0) break;
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
}