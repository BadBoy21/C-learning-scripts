#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include "stringmani.h"


int main(){

        char * fullDir = "";
        char * subDir = "testosd/";
        DIR *dir;
        struct dirent *ent;
        char filesDir[strlen(fullDir)+strlen(subDir)+1];
        safestrncpy(filesDir, fullDir, sizeof(filesDir));
        strncat(filesDir, subDir, strlen(subDir));

        if ((dir = opendir (filesDir)) != NULL) {
                while ((ent = readdir (dir)) != NULL) {
                        char * fileName = ent->d_name;
                        char fileNameBuff[strlen(fileName)+1];
                        safestrncpy(fileNameBuff, fileName, sizeof(fileNameBuff));
                        if(fileNameBuff[0]!='.' & fileNameBuff[1] != '.') {
                                FILE *fp;
                                char fileDir[strlen(filesDir)+strlen(fileName)+1];
                                safestrncpy(fileDir, filesDir, sizeof(filesDir));
                                strncat(fileDir, fileName, strlen(fileName));

                                fp = fopen(fileDir, "r");
                                if (fp == NULL) {
                                        fprintf(stderr, "Can't open file\n");

                                }
                                else{
                                        char buff[1000];

                                        while(fgets(buff, sizeof(buff), fp ) != NULL) {

                                          if(strstr(buff, "ayylmao") != NULL) {
                                              printf("%s\n", buff);
                                          }

                                        }


                                }
                                fclose(fp);
                        }
                }
                closedir (dir);
        } else {
                /* could not open directory */
                printf("Can't open directory\n");
                return EXIT_FAILURE;
        }

        return 0;
}
