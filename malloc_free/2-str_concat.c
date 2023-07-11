// Online C compiler to run C program online

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *str_concat(char* s1, char* s2){
    if (s1 == NULL) {
        s1 = "";
    }
    if (s2 == NULL){
        s2 == "";
        }
        size_t len1 = strlen(s1);
        size_t len2 = strlen(s2);
        
        char* result = (char*)malloc((len1 + len2 +1)*sizeof(char));
        if (result == NULL){
            return NULL;
        }
            // Copy the contents of s1 and s2 to the result string
            strcpy(result, s1);
            strcat(result, s2);
            
            return result;
        }
        
        int main(){ 
            char* string1 = "Hello, ";
            char* string2 = "world!";
            
            char* concatenated = str_concat(string1, string2);
            if (concatenated == NULL) {
                printf("Concatenation failed!\n");
                return 1;
            }
            
            printf("Concatenated string: %s\n", concatenated);
            free(concatenated);
            
            return 0;
               }
