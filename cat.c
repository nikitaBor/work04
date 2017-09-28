#include <stdio.h>
#include <string.h>

int main(){
    //strcat takes in char *dest and const char *src and appends the src to the end of the dest
    //it takes care of null chars
    //strncat also takes in a size_t n which is the number of bytes of the src that will be put into dest
    //(n<=strlen(src))
    char *src = "world";
    char dest[256] = "hello ";
    printf("appending src to dest we get: %s\n", strcat(dest,src));
    printf("appending first two chars of src to dest we get: %s\n", strncat(dest,src,2));
    return 0;
}
