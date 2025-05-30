#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LEN 64

char* validate_hostname(char *hostname, int len){
    if (hostname == NULL){
        return NULL;
    }
    char* valid_hostname = malloc(len + 1);
    for (int i = 0; i < len; i++){
        if (hostname[i] == '-' || hostname[i] == '.'){
            valid_hostname[i] = ' ';
        }
        else {
            valid_hostname[i] = hostname[i];
        }
    }
    return valid_hostname;
}

char* get_hostname(char *user_supplied_name, int len){
    if (len > MAX_NAME_LEN){
        return NULL;
    }
    char* hostname = malloc(MAX_NAME_LEN);

    char* valid_hostname = validate_hostname(user_supplied_name, len);
    if (valid_hostname == NULL){
        return NULL;
    }
    strcpy(hostname, valid_hostname);
    free(valid_hostname);
    valid_hostname = NULL;
    
    return hostname;
}

int main(int argc, char** argv) {
    return 0;
    }