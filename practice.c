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
        safestrncpy(pointer1, "1234556798392182oiwqueoiwqi2143i21h321ih2ejwhdejsdsah", sizeof(lastName)-1);

        safestrncpy(pointer2, "12121weqwqeweqweqwewqewqeqwewqewqewqewqeqeweqwewqewqew", sizeof(firstName)-1);

        safestrncpy(total, lastName, sizeof(total)-1);


        strncat(total, " ", 1);
        strncat(total, firstName, strlen(firstName));
        printf("total %i %s\n", strlen(total),total);

        printf("FIRST NAME: %s\n %i \n", firstName,strlen(firstName) );
        printf("LAST NAME: %s\n %i \n", lastName, strlen(lastName) );
        printf("TOTAL %s %i\n", total,strlen(total) );
        
        return 0;
}
