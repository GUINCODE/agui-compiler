#ifndef BARRY_LEXER_H
#define BARRY_LEXER_H
#include <stdint.h>
#include <stdlib.h>

/**

identifiant: [a-zA-Z_][a-zA-Z0-9_]*
type: 'number' | 'boolean' | 'string'
declaration: {identifiant} ':' {type} ';'
number: [0-9]+
expression: {identifiant}
assignement: {identifiant} '=' {expression}
print: 'print' {expression} ';'

*/

typedef enum{
    TOKEN_ID,
    TOKEN_VALUE,
    TOKEN_TYPE,
    TOKEN_PRINT,
    TOKEN_COLON,
    TOKEN_SEMICOLON,
    TOKEN_UNKNOWN
 } TokeType ;

typedef struct{
    TokeType type;
    uint8_t *value;
} Token;

typedef struct TokenList{
    Token token;
    struct TokenList *next;
} TokenList;

 uint8_t  *read_file(char *filename);
 TokenList *new_token_list();
 void  add_token(TokenList **tokenList, uint8_t *value, size_t size_val);

#endif //BARRY_LEXER_H

