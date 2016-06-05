#include <string.h>
#include "stringmani.h"

void safestrncpy(char * dest, char * src, int n){
        memset(dest, '\0', n);
        strncpy(dest, src, n-1);
}
