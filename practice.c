#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stringmani.h"

int main(){

        char lastName[20];
        char firstName[20];
        char total[sizeof(firstName)+sizeof(lastName)];

        char * pointer1 = lastName;
        char * pointer2 = firstName;

        safestrncpy(pointer1, "wqeqwewqdsadsacsacassdadewqewqdsjckdgljewkjlekjrlfdl", sizeof(lastName)-1);

        safestrncpy(pointer2, "weoqipoipocxsjvcjvkfjbenbkjgrkjrntjwnkrejnrkjewqnrkwqnewqekwqlkndlksanxlknl", sizeof(firstName)-1);

        safestrncpy(total, lastName, sizeof(total)-1);

        strncat(total, " ", 1);
        strncat(total, firstName, strlen(firstName));

        printf(" lastName    %s\n", lastName);
        printf(" firstName    %s\n", firstName);
        printf(" total    %s\n", total);

        return 0;
}
