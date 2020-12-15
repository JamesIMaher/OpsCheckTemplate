#include <stdio.h>

int HelloWorldFunc();

main(int argc, char *argv[]){
    int returnValue = HelloWorldFunc();
//printf("%s\n", "Hello CS483!");
}

int HelloWorldFunc(){
    printf("Hello World!\n");
    return 0;
}
