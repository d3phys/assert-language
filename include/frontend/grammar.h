#ifndef GRAMMAR_H
#define GRAMMAR_H

enum ast_type {
       AST_NULL   =   0, 
       AST_ELSE   = 'e', 
       AST_IF     = 'i', 
       AST_WHILE  = 'w', 
       AST_RETURN = 'r',
       AST_GREAT  = '>',
       AST_LOW    = '<',
       AST_ASSIGN = '=',
       AST_INIT   = ':',
       AST_EQUAL  = 'q',
       AST_LEQUAL = 'l',
       AST_GEQUAL = 'g',
       AST_NEQUAL = '!',
       AST_AND    = '&',
       AST_OR     = '|',
       AST_ADD    = '+',
       AST_SUB    = '-',
       AST_DIV    = '/',
       AST_MUL    = '*',
       AST_POW    = '^',
       AST_DEFINE = 'd',
       AST_STMT   = 's',
       AST_PARAM  = 'p',
       AST_CALL   = 'c',
       AST_DECISN = '?',
       AST_FUNC   = 'f',
       AST_CONST  = 'C',
       AST_COS    = 0xDED21,
       AST_SIN    = 0xDED22,
};


enum keyword_type {
#define   LINKABLE(xxx) xxx
#define UNLINKABLE(xxx) xxx
#define KEYWORD(name, keyword, ident) KW_##name = keyword,

#include "../KEYWORDS"

#undef KEYWORD
#undef LINKABLE
#undef UNLINKABLE
};

/*
enum keyword_type {
       KW_NULL   =   0, 
       KW_ELSE   = 'e', 
       KW_IF     = 'i', 
       KW_WHILE  = 'w', 
       KW_RETURN = 'r',
       KW_CONST  = 'c',
       KW_ASSIGN = '=',
       KW_GREAT  = '>',
       KW_LOW    = '<',
       KW_EQUAL  = 'q',
       KW_LEQUAL = 'l',
       KW_GEQUAL = 'g',
       KW_NEQUAL = '!',
       KW_AND    = '&',
       KW_OR     = '|',
       KW_ADD    = '+',
       KW_SUB    = '-',
       KW_DIV    = '/',
       KW_MUL    = '*',
       KW_POW    = '^',
       KW_BEGIN  = '{',
       KW_END    = '}',
       KW_QOPEN  = '[',
       KW_QCLOSE = ']',
       KW_SEP    = ';',
       KW_COMMA  = ',',
       KW_OPEN   = '(',
       KW_CLOSE  = ')',
       KW_DEFINE = 'f',
       KW_CALL   = '%',
       KW_STOP   = '$',
       KW_THEN   = 't',
       KW_ASSERT = 'a',
       KW_COS    = 0x10321,
       KW_SIN    = 0x10322,
};
*/

const char *keyword_ident(int id);
const char *ast_keyword_ident(int id);


#endif /* GRAMMAR_H */