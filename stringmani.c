#include <string.h>
#include "stringmani.h"

void safestrncpy(char * dest, char * src, int n){
        memset(dest, '\0', n+1);
        strncpy(dest, src, n);

}
