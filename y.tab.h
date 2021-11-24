/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ENTIER = 258,
    BOOLEEN = 259,
    IDENT = 260,
    CHAINE = 261,
    INT = 262,
    BOOL = 263,
    UNIT = 264,
    ARRAY = 265,
    OF = 266,
    VAR = 267,
    PROG = 268,
    REF = 269,
    RET = 270,
    FUNCT = 271,
    IF = 272,
    THEN = 273,
    ELSE = 274,
    WHILE = 275,
    BEG = 276,
    END = 277,
    READ = 278,
    WRITE = 279,
    DO = 280,
    EQ = 281,
    INF = 282,
    SUPP = 283,
    DIFF = 284,
    OR = 285,
    XOR = 286,
    AND = 287,
    UMOINS = 288,
    NOT = 289
  };
#endif
/* Tokens.  */
#define ENTIER 258
#define BOOLEEN 259
#define IDENT 260
#define CHAINE 261
#define INT 262
#define BOOL 263
#define UNIT 264
#define ARRAY 265
#define OF 266
#define VAR 267
#define PROG 268
#define REF 269
#define RET 270
#define FUNCT 271
#define IF 272
#define THEN 273
#define ELSE 274
#define WHILE 275
#define BEG 276
#define END 277
#define READ 278
#define WRITE 279
#define DO 280
#define EQ 281
#define INF 282
#define SUPP 283
#define DIFF 284
#define OR 285
#define XOR 286
#define AND 287
#define UMOINS 288
#define NOT 289

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "projet.y"

  int value;
  char* id;
  struct{ // si c'est pas un tab, nbdim = 0 et borneinfdim et tailledim = NULL. Pour rangelist, type = ""
    int* borneinfdim;
    int* tailledim;
    int nbdim;
    int type;
  } typevar;

  int index;

  struct{
    char** listeident;
    int nbident;
  } idlist;

  struct{
    int* listeexp;
    int nbexp;
  } explist;


#line 149 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
