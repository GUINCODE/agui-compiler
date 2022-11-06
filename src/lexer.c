#include "../include/lexer.h"
#include <stdlib.h>
#include <stdio.h>

uint8_t *read_file(char *filename)
{
    FILE *file = fopen(filename, "r");
    char caracter;
    u_int8_t *content = malloc(sizeof(2048));
    u_int8_t *ptr = content;
    if (file == NULL)
    {
        printf(" le fichier %s n'existe pas \n", filename);
        exit(1);
    }
    else
    {

        while ((caracter = (char) fgetc(file)) != EOF)
        {
            *ptr++ = caracter;
        }
    }
    *ptr = '\0';
    return content;
}

TokenList *new_token_list()
{ 
    TokenList *tokenList = malloc(sizeof(TokenList));
    tokenList->token.type = TOKEN_UNKNOWN;
    tokenList->token.value = NULL;
    tokenList->prev = NULL;
    return tokenList;
}
void add_token(TokenList **tokenList, uint8_t *value, size_t size_val)
{
    
}