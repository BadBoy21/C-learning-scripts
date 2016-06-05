#include <string.h>
#include "stringmani.h"

void safestrncpy(char * dest, char * src, int n){
        memset(dest, '\0', sizeof(dest));
        strncpy(dest, src, n);
}
