#include <stdio.h>
#include <stdlib.h>
//&size is the address of the variable that holds the size of ////theinput buffer, another pointer.
int input(char *s,int length);

int main()
{
    char *buffer;
    size_t bufsize = 32;//size_t is a type of integer
    size_t characters;

    buffer = (char *)malloc(bufsize * sizeof(char));
    if( buffer == NULL)
    {
        printf("Unable to allocate buffer");
        exit(1);
    }

    printf("Type something: ");
    characters = getline(&buffer,&bufsize,stdin);
    printf("%zu characters were read.\n",characters);
    printf("You typed: '%s'\n",buffer);

    return(0);
}

