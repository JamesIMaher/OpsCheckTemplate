#include <stdio.h>
#include <stdlib.h>
#include "HelloWorld.h"




//This is a simple test to familiarize students with Github Classroom and the CMake autograder system.
// The HelloWorldFunc will return a string "Hello World!". When the student initially clones the repository,
// all tests will pass. If the string is modified, the tests will fail. In follow-on exercises and PEXs the programming
// write-ups will describe how to pass the tests with various levels of abstraction. Just because a student passes all
// autograder tests, does not mean 100%. I may or may not test additional program functionality when grading. Style and
// documentation will also influence a student's grade.

char* HelloWorldFunc(){
    char *returnString = malloc(sizeof ("Hello World!"));
    returnString = "Hello World!";
    return returnString;
}
