//
// Created by jamesmaher on 12/15/20.
#include "HelloWorld.h"
#include <assert.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int main (int argc, char *argv[]){
    char* newString = HelloWorldFunc();
    assert(strcmp(newString,"Hello World!") == 0 && "You have an error in how you return the string from HelloWorldFunc to the main program.");
}
//Simple
//

