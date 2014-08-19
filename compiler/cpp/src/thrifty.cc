
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "src/thrifty.yy"

/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/**
 * Thrift parser.
 *
 * This parser is used on a thrift definition file.
 *
 */

#define __STDC_LIMIT_MACROS
#define __STDC_FORMAT_MACROS
#include <stdio.h>
#ifndef _MSC_VER
#include <inttypes.h>
#else
#include <stdint.h>
#endif
#include <limits.h>
#ifdef _MSC_VER
#include "windows/config.h"
#endif
#include "main.h"
#include "globals.h"
#include "parse/t_program.h"
#include "parse/t_scope.h"

#ifdef _MSC_VER
//warning C4065: switch statement contains 'default' but no 'case' labels
#pragma warning(disable:4065)
#endif

/**
 * This global variable is used for automatic numbering of field indices etc.
 * when parsing the members of a struct. Field values are automatically
 * assigned starting from -1 and working their way down.
 */
int y_field_val = -1;
int g_arglist = 0;
const int struct_is_struct = 0;
const int struct_is_union = 1;



/* Line 189 of yacc.c  */
#line 135 "src\\thrifty.cc"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tok_identifier = 258,
     tok_literal = 259,
     tok_doctext = 260,
     tok_st_identifier = 261,
     tok_int_constant = 262,
     tok_dub_constant = 263,
     tok_include = 264,
     tok_namespace = 265,
     tok_cpp_namespace = 266,
     tok_cpp_include = 267,
     tok_cpp_type = 268,
     tok_php_namespace = 269,
     tok_py_module = 270,
     tok_perl_package = 271,
     tok_java_package = 272,
     tok_xsd_all = 273,
     tok_xsd_optional = 274,
     tok_xsd_nillable = 275,
     tok_xsd_namespace = 276,
     tok_xsd_attrs = 277,
     tok_ruby_namespace = 278,
     tok_smalltalk_category = 279,
     tok_smalltalk_prefix = 280,
     tok_cocoa_prefix = 281,
     tok_csharp_namespace = 282,
     tok_delphi_namespace = 283,
     tok_void = 284,
     tok_bool = 285,
     tok_byte = 286,
     tok_string = 287,
     tok_binary = 288,
     tok_slist = 289,
     tok_senum = 290,
     tok_i16 = 291,
     tok_i32 = 292,
     tok_i64 = 293,
     tok_double = 294,
     tok_map = 295,
     tok_list = 296,
     tok_set = 297,
     tok_oneway = 298,
     tok_typedef = 299,
     tok_struct = 300,
     tok_xception = 301,
     tok_throws = 302,
     tok_extends = 303,
     tok_service = 304,
     tok_enum = 305,
     tok_const = 306,
     tok_required = 307,
     tok_optional = 308,
     tok_union = 309,
     tok_reference = 310
   };
#endif
/* Tokens.  */
#define tok_identifier 258
#define tok_literal 259
#define tok_doctext 260
#define tok_st_identifier 261
#define tok_int_constant 262
#define tok_dub_constant 263
#define tok_include 264
#define tok_namespace 265
#define tok_cpp_namespace 266
#define tok_cpp_include 267
#define tok_cpp_type 268
#define tok_php_namespace 269
#define tok_py_module 270
#define tok_perl_package 271
#define tok_java_package 272
#define tok_xsd_all 273
#define tok_xsd_optional 274
#define tok_xsd_nillable 275
#define tok_xsd_namespace 276
#define tok_xsd_attrs 277
#define tok_ruby_namespace 278
#define tok_smalltalk_category 279
#define tok_smalltalk_prefix 280
#define tok_cocoa_prefix 281
#define tok_csharp_namespace 282
#define tok_delphi_namespace 283
#define tok_void 284
#define tok_bool 285
#define tok_byte 286
#define tok_string 287
#define tok_binary 288
#define tok_slist 289
#define tok_senum 290
#define tok_i16 291
#define tok_i32 292
#define tok_i64 293
#define tok_double 294
#define tok_map 295
#define tok_list 296
#define tok_set 297
#define tok_oneway 298
#define tok_typedef 299
#define tok_struct 300
#define tok_xception 301
#define tok_throws 302
#define tok_extends 303
#define tok_service 304
#define tok_enum 305
#define tok_const 306
#define tok_required 307
#define tok_optional 308
#define tok_union 309
#define tok_reference 310




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 66 "src/thrifty.yy"

  char*          id;
  int64_t        iconst;
  double         dconst;
  bool           tbool;
  t_doc*         tdoc;
  t_type*        ttype;
  t_base_type*   tbase;
  t_typedef*     ttypedef;
  t_enum*        tenum;
  t_enum_value*  tenumv;
  t_const*       tconst;
  t_const_value* tconstv;
  t_struct*      tstruct;
  t_service*     tservice;
  t_function*    tfunction;
  t_field*       tfield;
  char*          dtext;
  t_field::e_req ereq;
  t_annotation*  tannot;
  t_field_id     tfieldid;



/* Line 214 of yacc.c  */
#line 306 "src\\thrifty.cc"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 318 "src\\thrifty.cc"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   201

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNRULES -- Number of states.  */
#define YYNSTATES  223

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      65,    66,    56,     2,    57,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    64,    58,
      67,    61,    68,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,    63,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,    60,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,     8,    12,    13,    15,    19,
      23,    26,    29,    32,    35,    38,    41,    44,    47,    50,
      53,    56,    59,    62,    65,    69,    70,    72,    74,    76,
      78,    80,    82,    84,    86,    91,    93,    95,    96,   103,
     106,   107,   114,   119,   126,   129,   130,   133,   140,   142,
     144,   146,   148,   150,   152,   156,   160,   161,   165,   171,
     172,   174,   176,   184,   186,   187,   189,   190,   192,   193,
     198,   199,   206,   216,   217,   218,   221,   222,   225,   226,
     237,   239,   240,   245,   246,   249,   250,   263,   266,   267,
     269,   270,   272,   274,   275,   278,   279,   281,   283,   285,
     287,   289,   292,   294,   296,   298,   300,   302,   304,   306,
     308,   310,   313,   315,   317,   319,   327,   333,   339,   342,
     343,   347,   348,   351,   352,   356,   359
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      70,     0,    -1,    73,    76,    -1,    -1,    -1,    73,    72,
      74,    -1,    -1,    75,    -1,    10,     3,     3,    -1,    10,
      56,     3,    -1,    11,     3,    -1,    12,     4,    -1,    14,
       3,    -1,    15,     3,    -1,    16,     3,    -1,    23,     3,
      -1,    24,     6,    -1,    25,     3,    -1,    17,     3,    -1,
      26,     3,    -1,    21,     4,    -1,    27,     3,    -1,    28,
       3,    -1,     9,     4,    -1,    76,    71,    77,    -1,    -1,
      87,    -1,    78,    -1,   100,    -1,    79,    -1,    81,    -1,
      84,    -1,    94,    -1,    99,    -1,    44,   115,     3,   124,
      -1,    57,    -1,    58,    -1,    -1,    50,     3,    59,    82,
      60,   124,    -1,    82,    83,    -1,    -1,    71,     3,    61,
       7,   124,    80,    -1,    71,     3,   124,    80,    -1,    35,
       3,    59,    85,    60,   124,    -1,    85,    86,    -1,    -1,
       4,    80,    -1,    51,   115,     3,    61,    88,    80,    -1,
       7,    -1,     8,    -1,     4,    -1,     3,    -1,    89,    -1,
      91,    -1,    62,    90,    63,    -1,    90,    88,    80,    -1,
      -1,    59,    92,    60,    -1,    92,    88,    64,    88,    80,
      -1,    -1,    45,    -1,    54,    -1,    93,     3,    95,    59,
     108,    60,   124,    -1,    18,    -1,    -1,    19,    -1,    -1,
      20,    -1,    -1,    22,    59,   108,    60,    -1,    -1,    46,
       3,    59,   108,    60,   124,    -1,    49,     3,   103,    59,
     101,   104,   102,    60,   124,    -1,    -1,    -1,    48,     3,
      -1,    -1,   104,   105,    -1,    -1,    71,   106,   114,     3,
      65,   108,    66,   107,   124,    80,    -1,    43,    -1,    -1,
      47,    65,   108,    66,    -1,    -1,   108,   109,    -1,    -1,
      71,   110,   112,   115,   111,     3,   113,    96,    97,    98,
     124,    80,    -1,     7,    64,    -1,    -1,    55,    -1,    -1,
      52,    -1,    53,    -1,    -1,    61,    88,    -1,    -1,   115,
      -1,    29,    -1,     3,    -1,   116,    -1,   118,    -1,   117,
     124,    -1,    32,    -1,    33,    -1,    34,    -1,    30,    -1,
      31,    -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,
     119,   124,    -1,   120,    -1,   121,    -1,   122,    -1,    40,
     123,    67,   115,    57,   115,    68,    -1,    42,   123,    67,
     115,    68,    -1,    41,    67,   115,    68,   123,    -1,    13,
       4,    -1,    -1,    65,   125,    66,    -1,    -1,   125,   126,
      -1,    -1,     3,   127,    80,    -1,    61,     4,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   246,   246,   258,   269,   278,   283,   288,   292,   300,
     309,   318,   326,   336,   346,   356,   366,   376,   386,   396,
     406,   416,   426,   437,   450,   458,   463,   471,   486,   504,
     511,   518,   525,   532,   541,   554,   556,   559,   562,   590,
     597,   603,   623,   638,   650,   657,   664,   671,   690,   699,
     705,   710,   716,   721,   728,   735,   742,   749,   756,   763,
     770,   774,   780,   795,   800,   805,   810,   815,   820,   825,
     830,   835,   849,   863,   868,   873,   886,   891,   898,   904,
     919,   924,   929,   939,   944,   954,   961,   995,  1031,  1037,
    1042,  1047,  1051,  1063,  1068,  1077,  1082,  1087,  1094,  1113,
    1118,  1124,  1137,  1142,  1147,  1152,  1157,  1162,  1167,  1172,
    1177,  1183,  1194,  1199,  1204,  1211,  1221,  1231,  1242,  1247,
    1252,  1258,  1263,  1271,  1277,  1286,  1292
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tok_identifier", "tok_literal",
  "tok_doctext", "tok_st_identifier", "tok_int_constant",
  "tok_dub_constant", "tok_include", "tok_namespace", "tok_cpp_namespace",
  "tok_cpp_include", "tok_cpp_type", "tok_php_namespace", "tok_py_module",
  "tok_perl_package", "tok_java_package", "tok_xsd_all",
  "tok_xsd_optional", "tok_xsd_nillable", "tok_xsd_namespace",
  "tok_xsd_attrs", "tok_ruby_namespace", "tok_smalltalk_category",
  "tok_smalltalk_prefix", "tok_cocoa_prefix", "tok_csharp_namespace",
  "tok_delphi_namespace", "tok_void", "tok_bool", "tok_byte", "tok_string",
  "tok_binary", "tok_slist", "tok_senum", "tok_i16", "tok_i32", "tok_i64",
  "tok_double", "tok_map", "tok_list", "tok_set", "tok_oneway",
  "tok_typedef", "tok_struct", "tok_xception", "tok_throws", "tok_extends",
  "tok_service", "tok_enum", "tok_const", "tok_required", "tok_optional",
  "tok_union", "tok_reference", "'*'", "','", "';'", "'{'", "'}'", "'='",
  "'['", "']'", "':'", "'('", "')'", "'<'", "'>'", "$accept", "Program",
  "CaptureDocText", "DestroyDocText", "HeaderList", "Header", "Include",
  "DefinitionList", "Definition", "TypeDefinition", "Typedef",
  "CommaOrSemicolonOptional", "Enum", "EnumDefList", "EnumDef", "Senum",
  "SenumDefList", "SenumDef", "Const", "ConstValue", "ConstList",
  "ConstListContents", "ConstMap", "ConstMapContents", "StructHead",
  "Struct", "XsdAll", "XsdOptional", "XsdNillable", "XsdAttributes",
  "Xception", "Service", "FlagArgs", "UnflagArgs", "Extends",
  "FunctionList", "Function", "Oneway", "Throws", "FieldList", "Field",
  "FieldIdentifier", "FieldReference", "FieldRequiredness", "FieldValue",
  "FunctionType", "FieldType", "BaseType", "SimpleBaseType",
  "ContainerType", "SimpleContainerType", "MapType", "SetType", "ListType",
  "CppType", "TypeAnnotations", "TypeAnnotationList", "TypeAnnotation",
  "TypeAnnotationValue", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,    42,    44,    59,   123,
     125,    61,    91,    93,    58,    40,    41,    60,    62
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    71,    72,    73,    73,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    75,    76,    76,    77,    77,    77,    78,
      78,    78,    78,    78,    79,    80,    80,    80,    81,    82,
      82,    83,    83,    84,    85,    85,    86,    87,    88,    88,
      88,    88,    88,    88,    89,    90,    90,    91,    92,    92,
      93,    93,    94,    95,    95,    96,    96,    97,    97,    98,
      98,    99,   100,   101,   102,   103,   103,   104,   104,   105,
     106,   106,   107,   107,   108,   108,   109,   110,   110,   111,
     111,   112,   112,   112,   113,   113,   114,   114,   115,   115,
     115,   116,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   118,   119,   119,   119,   120,   121,   122,   123,   123,
     124,   124,   125,   125,   126,   127,   127
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     0,     3,     0,     1,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     1,     0,     6,     2,
       0,     6,     4,     6,     2,     0,     2,     6,     1,     1,
       1,     1,     1,     1,     3,     3,     0,     3,     5,     0,
       1,     1,     7,     1,     0,     1,     0,     1,     0,     4,
       0,     6,     9,     0,     0,     2,     0,     2,     0,    10,
       1,     0,     4,     0,     2,     0,    12,     2,     0,     1,
       0,     1,     1,     0,     2,     0,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     7,     5,     5,     2,     0,
       3,     0,     2,     0,     3,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     4,     1,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     7,     0,    23,     0,     0,    10,    11,    12,
      13,    14,    18,    20,    15,    16,    17,    19,    21,    22,
       0,     0,    60,     0,     0,     0,     0,    61,    24,    27,
      29,    30,    31,    26,     0,    32,    33,    28,     8,     9,
       0,    98,   105,   106,   102,   103,   104,   107,   108,   109,
     110,   119,     0,   119,     0,    99,   121,   100,   121,   112,
     113,   114,     0,    76,     0,     0,    64,    45,     0,     0,
       0,     0,   121,   123,   101,   111,    85,     0,     0,    40,
       0,    63,     0,     0,   118,     0,     0,     0,    34,     0,
       3,    75,    73,     3,     0,    85,    37,   121,    44,     0,
     119,     0,   126,   120,   122,   121,    88,    84,    78,   121,
       0,    39,    51,    50,    48,    49,    59,    56,    37,    52,
      53,     3,    35,    36,    46,    43,     0,   117,   116,     0,
      37,    71,     0,    93,     3,    38,   121,     0,     0,    47,
     121,     0,   125,   124,    87,    91,    92,     0,    81,     0,
      77,     0,    37,    57,     0,    54,    37,    62,   115,    90,
      80,     0,   121,   121,    42,     0,    55,    89,     0,    97,
       0,    96,    72,    37,    37,    95,     0,    41,    58,     0,
      66,    85,    94,    65,    68,     3,    67,    70,    83,     0,
     121,     0,   121,    85,    37,    85,    37,     3,    86,     3,
      79,    69,    82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   126,     4,     2,    21,    22,     5,    48,    49,
      50,   144,    51,   113,   131,    52,   103,   118,    53,   138,
     139,   158,   140,   157,    54,    55,   102,   204,   207,   210,
      56,    57,   128,   169,    98,   154,   170,   181,   212,   110,
     127,   153,   188,   167,   200,   190,    74,    75,    76,    77,
      78,    79,    80,    81,    89,    94,   109,   124,   150
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -136
static const yytype_int16 yypact[] =
{
    -136,    25,    70,  -136,   161,    36,    38,    20,    43,    44,
      46,    47,    48,    51,    57,    52,    41,    74,    75,    77,
      79,  -136,  -136,   -11,  -136,    81,    82,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
      83,   127,  -136,    86,    87,    88,   127,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,    89,  -136,  -136,  -136,  -136,  -136,
      34,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,    60,    27,    60,    92,  -136,    31,  -136,    31,  -136,
    -136,  -136,    39,    49,    40,   100,    93,  -136,   102,    37,
     127,    45,    31,  -136,  -136,  -136,  -136,   104,    54,  -136,
      62,  -136,    59,    14,  -136,   127,    58,   127,  -136,     1,
      65,  -136,  -136,    67,    13,  -136,   -30,    31,  -136,    71,
      60,    61,    72,  -136,  -136,    31,   124,  -136,  -136,    31,
     129,  -136,  -136,  -136,  -136,  -136,  -136,  -136,   -30,  -136,
    -136,    78,  -136,  -136,  -136,  -136,   127,  -136,  -136,   130,
     -30,  -136,    76,   -21,   119,  -136,   -39,     4,     6,  -136,
      31,    73,  -136,  -136,  -136,  -136,  -136,   127,    99,   120,
    -136,   128,   -30,  -136,    98,  -136,   -30,  -136,  -136,   126,
    -136,   114,    31,    31,  -136,    13,  -136,  -136,   171,  -136,
     180,  -136,  -136,   -30,   -30,   131,   125,  -136,  -136,    13,
     172,  -136,  -136,  -136,   173,   132,  -136,   174,   147,   136,
      31,   134,    31,  -136,   -30,  -136,   -30,   137,  -136,   135,
    -136,  -136,  -136
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,    -5,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,  -135,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -128,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -113,
    -136,  -136,  -136,  -136,  -136,  -136,   -45,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,   -67,   -73,  -136,  -136,  -136
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -75
static const yytype_int16 yytable[] =
{
      23,    85,   141,   159,   122,    95,    91,   132,   133,   132,
     133,   134,   135,   134,   135,   163,   132,   133,   116,   108,
     134,   135,   171,    25,    40,     3,    93,   142,   143,   174,
     176,   165,   166,    41,    42,    43,    -2,   184,    44,    45,
      46,   186,    24,    47,   145,   106,    27,    35,    28,    29,
      30,    31,   151,   147,    32,    34,   155,   194,   197,   198,
     119,    33,   121,   136,   173,   136,   137,   123,   137,   175,
     -25,   202,   136,    88,   117,   137,    26,    36,    37,   218,
      38,   220,    39,   172,    58,    59,    60,   177,   205,    82,
      83,    84,    86,    87,    90,    92,    93,    97,    96,    99,
     217,   161,   219,   100,   105,   -25,   104,   111,   130,   192,
     193,   101,   107,   112,   -25,   -25,   -25,    61,   115,   -25,
     -25,   -25,   179,   114,   -25,   125,   120,   129,   146,   148,
      61,   152,   156,   149,   162,   183,   191,   214,   160,   216,
     164,   178,   180,   189,    62,    63,    64,    65,    66,   168,
      67,    68,    69,    70,    71,    72,    73,    62,    63,    64,
      65,    66,   185,    67,    68,    69,    70,    71,    72,    73,
       6,     7,     8,     9,   195,    10,    11,    12,    13,   -74,
     182,   187,    14,   196,    15,    16,    17,    18,    19,    20,
     201,   203,   199,   206,   211,   213,   209,   221,   208,   215,
       0,   222
};

static const yytype_int16 yycheck[] =
{
       5,    46,   115,   138,     3,    78,    73,     3,     4,     3,
       4,     7,     8,     7,     8,   150,     3,     4,     4,    92,
       7,     8,    61,     3,    35,     0,    65,    57,    58,   157,
     158,    52,    53,    44,    45,    46,     0,   172,    49,    50,
      51,   176,     4,    54,   117,    90,     3,     6,     4,     3,
       3,     3,   125,   120,     3,     3,   129,   185,   193,   194,
     105,     4,   107,    59,    60,    59,    62,    66,    62,    63,
       0,   199,    59,    13,    60,    62,    56,     3,     3,   214,
       3,   216,     3,   156,     3,     3,     3,   160,   201,     3,
       3,     3,     3,    59,    67,     3,    65,    48,    59,    59,
     213,   146,   215,     3,    67,    35,     4,     3,   113,   182,
     183,    18,    67,    59,    44,    45,    46,     3,    59,    49,
      50,    51,   167,    61,    54,    60,    68,    60,    57,    68,
       3,     7,     3,    61,     4,     7,   181,   210,    60,   212,
      64,    68,    43,    29,    30,    31,    32,    33,    34,   154,
      36,    37,    38,    39,    40,    41,    42,    30,    31,    32,
      33,    34,    64,    36,    37,    38,    39,    40,    41,    42,
       9,    10,    11,    12,     3,    14,    15,    16,    17,    60,
      60,    55,    21,     3,    23,    24,    25,    26,    27,    28,
      65,    19,    61,    20,    47,    59,    22,    60,    66,    65,
      -1,    66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    70,    73,     0,    72,    76,     9,    10,    11,    12,
      14,    15,    16,    17,    21,    23,    24,    25,    26,    27,
      28,    74,    75,    71,     4,     3,    56,     3,     4,     3,
       3,     3,     3,     4,     3,     6,     3,     3,     3,     3,
      35,    44,    45,    46,    49,    50,    51,    54,    77,    78,
      79,    81,    84,    87,    93,    94,    99,   100,     3,     3,
       3,     3,    30,    31,    32,    33,    34,    36,    37,    38,
      39,    40,    41,    42,   115,   116,   117,   118,   119,   120,
     121,   122,     3,     3,     3,   115,     3,    59,    13,   123,
      67,   123,     3,    65,   124,   124,    59,    48,   103,    59,
       3,    18,    95,    85,     4,    67,   115,    67,   124,   125,
     108,     3,    59,    82,    61,    59,     4,    60,    86,   115,
      68,   115,     3,    66,   126,    60,    71,   109,   101,    60,
      71,    83,     3,     4,     7,     8,    59,    62,    88,    89,
      91,   108,    57,    58,    80,   124,    57,   123,    68,    61,
     127,   124,     7,   110,   104,   124,     3,    92,    90,    80,
      60,   115,     4,    80,    64,    52,    53,   112,    71,   102,
     105,    61,   124,    60,    88,    63,    88,   124,    68,   115,
      43,   106,    60,     7,    80,    64,    80,    55,   111,    29,
     114,   115,   124,   124,    88,     3,     3,    80,    80,    61,
     113,    65,    88,    19,    96,   108,    20,    97,    66,    22,
      98,    47,   107,    59,   124,    65,   124,   108,    80,   108,
      80,    60,    66
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 247 "src/thrifty.yy"
    {
      pdebug("Program -> Headers DefinitionList");
      if((g_program_doctext_candidate != NULL) && (g_program_doctext_status != ALREADY_PROCESSED))
      {
        g_program->set_doc(g_program_doctext_candidate);
        g_program_doctext_status = ALREADY_PROCESSED;
      }
      clear_doctext();
    }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 258 "src/thrifty.yy"
    {
      if (g_parse_mode == PROGRAM) {
        (yyval.dtext) = g_doctext;
        g_doctext = NULL;
      } else {
        (yyval.dtext) = NULL;
      }
    }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 269 "src/thrifty.yy"
    {
      if (g_parse_mode == PROGRAM) {
        clear_doctext();
      }
    }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 279 "src/thrifty.yy"
    {
      pdebug("HeaderList -> HeaderList Header");
    }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 283 "src/thrifty.yy"
    {
      pdebug("HeaderList -> ");
    }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 289 "src/thrifty.yy"
    {
      pdebug("Header -> Include");
    }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 293 "src/thrifty.yy"
    {
      pdebug("Header -> tok_namespace tok_identifier tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace((yyvsp[(2) - (3)].id), (yyvsp[(3) - (3)].id));
      }
    }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 301 "src/thrifty.yy"
    {
      pdebug("Header -> tok_namespace * tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("*", (yyvsp[(3) - (3)].id));
      }
    }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 310 "src/thrifty.yy"
    {
      pwarning(1, "'cpp_namespace' is deprecated. Use 'namespace cpp' instead");
      pdebug("Header -> tok_cpp_namespace tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("cpp", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 319 "src/thrifty.yy"
    {
      pdebug("Header -> tok_cpp_include tok_literal");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->add_cpp_include((yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 327 "src/thrifty.yy"
    {
      pwarning(1, "'php_namespace' is deprecated. Use 'namespace php' instead");
      pdebug("Header -> tok_php_namespace tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("php", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 337 "src/thrifty.yy"
    {
      pwarning(1, "'py_module' is deprecated. Use 'namespace py' instead");
      pdebug("Header -> tok_py_module tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("py", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 347 "src/thrifty.yy"
    {
      pwarning(1, "'perl_package' is deprecated. Use 'namespace perl' instead");
      pdebug("Header -> tok_perl_namespace tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("perl", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 357 "src/thrifty.yy"
    {
      pwarning(1, "'ruby_namespace' is deprecated. Use 'namespace rb' instead");
      pdebug("Header -> tok_ruby_namespace tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("rb", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 367 "src/thrifty.yy"
    {
      pwarning(1, "'smalltalk_category' is deprecated. Use 'namespace smalltalk.category' instead");
      pdebug("Header -> tok_smalltalk_category tok_st_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("smalltalk.category", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 377 "src/thrifty.yy"
    {
      pwarning(1, "'smalltalk_prefix' is deprecated. Use 'namespace smalltalk.prefix' instead");
      pdebug("Header -> tok_smalltalk_prefix tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("smalltalk.prefix", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 387 "src/thrifty.yy"
    {
      pwarning(1, "'java_package' is deprecated. Use 'namespace java' instead");
      pdebug("Header -> tok_java_package tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("java", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 397 "src/thrifty.yy"
    {
      pwarning(1, "'cocoa_prefix' is deprecated. Use 'namespace cocoa' instead");
      pdebug("Header -> tok_cocoa_prefix tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("cocoa", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 407 "src/thrifty.yy"
    {
      pwarning(1, "'xsd_namespace' is deprecated. Use 'namespace xsd' instead");
      pdebug("Header -> tok_xsd_namespace tok_literal");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("cocoa", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 417 "src/thrifty.yy"
    {
     pwarning(1, "'csharp_namespace' is deprecated. Use 'namespace csharp' instead");
     pdebug("Header -> tok_csharp_namespace tok_identifier");
     declare_valid_program_doctext();  
     if (g_parse_mode == PROGRAM) {
       g_program->set_namespace("csharp", (yyvsp[(2) - (2)].id));
     }
   }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 427 "src/thrifty.yy"
    {
     pwarning(1, "'delphi_namespace' is deprecated. Use 'namespace delphi' instead");
     pdebug("Header -> tok_delphi_namespace tok_identifier");
     declare_valid_program_doctext();  
     if (g_parse_mode == PROGRAM) {
       g_program->set_namespace("delphi", (yyvsp[(2) - (2)].id));
     }
   }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 438 "src/thrifty.yy"
    {
      pdebug("Include -> tok_include tok_literal");
      declare_valid_program_doctext();  
      if (g_parse_mode == INCLUDES) {
        std::string path = include_file(std::string((yyvsp[(2) - (2)].id)));
        if (!path.empty()) {
          g_program->add_include(path, std::string((yyvsp[(2) - (2)].id)));
        }
      }
    }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 451 "src/thrifty.yy"
    {
      pdebug("DefinitionList -> DefinitionList Definition");
      if ((yyvsp[(2) - (3)].dtext) != NULL && (yyvsp[(3) - (3)].tdoc) != NULL) {
        (yyvsp[(3) - (3)].tdoc)->set_doc((yyvsp[(2) - (3)].dtext));
      }
    }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 458 "src/thrifty.yy"
    {
      pdebug("DefinitionList -> ");
    }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 464 "src/thrifty.yy"
    {
      pdebug("Definition -> Const");
      if (g_parse_mode == PROGRAM) {
        g_program->add_const((yyvsp[(1) - (1)].tconst));
      }
      (yyval.tdoc) = (yyvsp[(1) - (1)].tconst);
    }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 472 "src/thrifty.yy"
    {
      pdebug("Definition -> TypeDefinition");
      if (g_parse_mode == PROGRAM) {
        g_scope->add_type((yyvsp[(1) - (1)].ttype)->get_name(), (yyvsp[(1) - (1)].ttype));
        if (g_parent_scope != NULL) {
          g_parent_scope->add_type(g_parent_prefix + (yyvsp[(1) - (1)].ttype)->get_name(), (yyvsp[(1) - (1)].ttype));
        }
        if (! g_program->is_unique_typename((yyvsp[(1) - (1)].ttype))) {
          yyerror("Type \"%s\" is already defined.", (yyvsp[(1) - (1)].ttype)->get_name().c_str());
          exit(1);
        }
      }
      (yyval.tdoc) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 487 "src/thrifty.yy"
    {
      pdebug("Definition -> Service");
      if (g_parse_mode == PROGRAM) {
        g_scope->add_service((yyvsp[(1) - (1)].tservice)->get_name(), (yyvsp[(1) - (1)].tservice));
        if (g_parent_scope != NULL) {
          g_parent_scope->add_service(g_parent_prefix + (yyvsp[(1) - (1)].tservice)->get_name(), (yyvsp[(1) - (1)].tservice));
        }
        g_program->add_service((yyvsp[(1) - (1)].tservice));
        if (! g_program->is_unique_typename((yyvsp[(1) - (1)].tservice))) {
          yyerror("Type \"%s\" is already defined.", (yyvsp[(1) - (1)].tservice)->get_name().c_str());
          exit(1);
        }
      }
      (yyval.tdoc) = (yyvsp[(1) - (1)].tservice);
    }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 505 "src/thrifty.yy"
    {
      pdebug("TypeDefinition -> Typedef");
      if (g_parse_mode == PROGRAM) {
        g_program->add_typedef((yyvsp[(1) - (1)].ttypedef));
      }
    }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 512 "src/thrifty.yy"
    {
      pdebug("TypeDefinition -> Enum");
      if (g_parse_mode == PROGRAM) {
        g_program->add_enum((yyvsp[(1) - (1)].tenum));
      }
    }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 519 "src/thrifty.yy"
    {
      pdebug("TypeDefinition -> Senum");
      if (g_parse_mode == PROGRAM) {
        g_program->add_typedef((yyvsp[(1) - (1)].ttypedef));
      }
    }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 526 "src/thrifty.yy"
    {
      pdebug("TypeDefinition -> Struct");
      if (g_parse_mode == PROGRAM) {
        g_program->add_struct((yyvsp[(1) - (1)].tstruct));
      }
    }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 533 "src/thrifty.yy"
    {
      pdebug("TypeDefinition -> Xception");
      if (g_parse_mode == PROGRAM) {
        g_program->add_xception((yyvsp[(1) - (1)].tstruct));
      }
    }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 542 "src/thrifty.yy"
    {
      pdebug("TypeDef -> tok_typedef FieldType tok_identifier");
      validate_simple_identifier( (yyvsp[(3) - (4)].id));
      t_typedef *td = new t_typedef(g_program, (yyvsp[(2) - (4)].ttype), (yyvsp[(3) - (4)].id));
      (yyval.ttypedef) = td;
      if ((yyvsp[(4) - (4)].ttype) != NULL) {
        (yyval.ttypedef)->annotations_ = (yyvsp[(4) - (4)].ttype)->annotations_;
        delete (yyvsp[(4) - (4)].ttype);
      }
    }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 555 "src/thrifty.yy"
    {}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 557 "src/thrifty.yy"
    {}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 559 "src/thrifty.yy"
    {}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 563 "src/thrifty.yy"
    {
      pdebug("Enum -> tok_enum tok_identifier { EnumDefList }");
      (yyval.tenum) = (yyvsp[(4) - (6)].tenum);
      validate_simple_identifier( (yyvsp[(2) - (6)].id));
      (yyval.tenum)->set_name((yyvsp[(2) - (6)].id));
      if ((yyvsp[(6) - (6)].ttype) != NULL) {
        (yyval.tenum)->annotations_ = (yyvsp[(6) - (6)].ttype)->annotations_;
        delete (yyvsp[(6) - (6)].ttype);
      }
      (yyval.tenum)->resolve_values();
      // make constants for all the enum values
      if (g_parse_mode == PROGRAM) {
        const std::vector<t_enum_value*>& enum_values = (yyval.tenum)->get_constants();
        std::vector<t_enum_value*>::const_iterator c_iter;
        for (c_iter = enum_values.begin(); c_iter != enum_values.end(); ++c_iter) {
          std::string const_name = (yyval.tenum)->get_name() + "." + (*c_iter)->get_name();
          t_const_value* const_val = new t_const_value((*c_iter)->get_value());
          const_val->set_enum((yyval.tenum));
          g_scope->add_constant(const_name, new t_const(g_type_i32, (*c_iter)->get_name(), const_val));
          if (g_parent_scope != NULL) {
            g_parent_scope->add_constant(g_parent_prefix + const_name, new t_const(g_type_i32, (*c_iter)->get_name(), const_val));
          }
        }
      }
    }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 591 "src/thrifty.yy"
    {
      pdebug("EnumDefList -> EnumDefList EnumDef");
      (yyval.tenum) = (yyvsp[(1) - (2)].tenum);
      (yyval.tenum)->append((yyvsp[(2) - (2)].tenumv));
    }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 597 "src/thrifty.yy"
    {
      pdebug("EnumDefList -> ");
      (yyval.tenum) = new t_enum(g_program);
    }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 604 "src/thrifty.yy"
    {
      pdebug("EnumDef -> tok_identifier = tok_int_constant");
      if ((yyvsp[(4) - (6)].iconst) < 0) {
        pwarning(1, "Negative value supplied for enum %s.\n", (yyvsp[(2) - (6)].id));
      }
      if ((yyvsp[(4) - (6)].iconst) > INT_MAX) {
        pwarning(1, "64-bit value supplied for enum %s.\n", (yyvsp[(2) - (6)].id));
      }
      validate_simple_identifier( (yyvsp[(2) - (6)].id));
      (yyval.tenumv) = new t_enum_value((yyvsp[(2) - (6)].id), static_cast<int>((yyvsp[(4) - (6)].iconst)));
      if ((yyvsp[(1) - (6)].dtext) != NULL) {
        (yyval.tenumv)->set_doc((yyvsp[(1) - (6)].dtext));
      }
      if ((yyvsp[(5) - (6)].ttype) != NULL) {
        (yyval.tenumv)->annotations_ = (yyvsp[(5) - (6)].ttype)->annotations_;
        delete (yyvsp[(5) - (6)].ttype);
      }
    }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 624 "src/thrifty.yy"
    {
      pdebug("EnumDef -> tok_identifier");
      validate_simple_identifier( (yyvsp[(2) - (4)].id));
      (yyval.tenumv) = new t_enum_value((yyvsp[(2) - (4)].id));
      if ((yyvsp[(1) - (4)].dtext) != NULL) {
        (yyval.tenumv)->set_doc((yyvsp[(1) - (4)].dtext));
      }
      if ((yyvsp[(3) - (4)].ttype) != NULL) {
        (yyval.tenumv)->annotations_ = (yyvsp[(3) - (4)].ttype)->annotations_;
        delete (yyvsp[(3) - (4)].ttype);
      }
    }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 639 "src/thrifty.yy"
    {
      pdebug("Senum -> tok_senum tok_identifier { SenumDefList }");
      validate_simple_identifier( (yyvsp[(2) - (6)].id));
      (yyval.ttypedef) = new t_typedef(g_program, (yyvsp[(4) - (6)].tbase), (yyvsp[(2) - (6)].id));
      if ((yyvsp[(6) - (6)].ttype) != NULL) {
        (yyval.ttypedef)->annotations_ = (yyvsp[(6) - (6)].ttype)->annotations_;
        delete (yyvsp[(6) - (6)].ttype);
      }
    }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 651 "src/thrifty.yy"
    {
      pdebug("SenumDefList -> SenumDefList SenumDef");
      (yyval.tbase) = (yyvsp[(1) - (2)].tbase);
      (yyval.tbase)->add_string_enum_val((yyvsp[(2) - (2)].id));
    }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 657 "src/thrifty.yy"
    {
      pdebug("SenumDefList -> ");
      (yyval.tbase) = new t_base_type("string", t_base_type::TYPE_STRING);
      (yyval.tbase)->set_string_enum(true);
    }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 665 "src/thrifty.yy"
    {
      pdebug("SenumDef -> tok_literal");
      (yyval.id) = (yyvsp[(1) - (2)].id);
    }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 672 "src/thrifty.yy"
    {
      pdebug("Const -> tok_const FieldType tok_identifier = ConstValue");
      if (g_parse_mode == PROGRAM) {
        validate_simple_identifier( (yyvsp[(3) - (6)].id));
        g_scope->resolve_const_value((yyvsp[(5) - (6)].tconstv), (yyvsp[(2) - (6)].ttype));
        (yyval.tconst) = new t_const((yyvsp[(2) - (6)].ttype), (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].tconstv));
        validate_const_type((yyval.tconst));

        g_scope->add_constant((yyvsp[(3) - (6)].id), (yyval.tconst));
        if (g_parent_scope != NULL) {
          g_parent_scope->add_constant(g_parent_prefix + (yyvsp[(3) - (6)].id), (yyval.tconst));
        }
      } else {
        (yyval.tconst) = NULL;
      }
    }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 691 "src/thrifty.yy"
    {
      pdebug("ConstValue => tok_int_constant");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_integer((yyvsp[(1) - (1)].iconst));
      if (!g_allow_64bit_consts && ((yyvsp[(1) - (1)].iconst) < INT32_MIN || (yyvsp[(1) - (1)].iconst) > INT32_MAX)) {
        pwarning(1, "64-bit constant \"%" PRIi64"\" may not work in all languages.\n", (yyvsp[(1) - (1)].iconst));
      }
    }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 700 "src/thrifty.yy"
    {
      pdebug("ConstValue => tok_dub_constant");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_double((yyvsp[(1) - (1)].dconst));
    }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 706 "src/thrifty.yy"
    {
      pdebug("ConstValue => tok_literal");
      (yyval.tconstv) = new t_const_value((yyvsp[(1) - (1)].id));
    }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 711 "src/thrifty.yy"
    {
      pdebug("ConstValue => tok_identifier");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_identifier((yyvsp[(1) - (1)].id));
    }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 717 "src/thrifty.yy"
    {
      pdebug("ConstValue => ConstList");
      (yyval.tconstv) = (yyvsp[(1) - (1)].tconstv);
    }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 722 "src/thrifty.yy"
    {
      pdebug("ConstValue => ConstMap");
      (yyval.tconstv) = (yyvsp[(1) - (1)].tconstv);
    }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 729 "src/thrifty.yy"
    {
      pdebug("ConstList => [ ConstListContents ]");
      (yyval.tconstv) = (yyvsp[(2) - (3)].tconstv);
    }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 736 "src/thrifty.yy"
    {
      pdebug("ConstListContents => ConstListContents ConstValue CommaOrSemicolonOptional");
      (yyval.tconstv) = (yyvsp[(1) - (3)].tconstv);
      (yyval.tconstv)->add_list((yyvsp[(2) - (3)].tconstv));
    }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 742 "src/thrifty.yy"
    {
      pdebug("ConstListContents =>");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_list();
    }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 750 "src/thrifty.yy"
    {
      pdebug("ConstMap => { ConstMapContents }");
      (yyval.tconstv) = (yyvsp[(2) - (3)].tconstv);
    }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 757 "src/thrifty.yy"
    {
      pdebug("ConstMapContents => ConstMapContents ConstValue CommaOrSemicolonOptional");
      (yyval.tconstv) = (yyvsp[(1) - (5)].tconstv);
      (yyval.tconstv)->add_map((yyvsp[(2) - (5)].tconstv), (yyvsp[(4) - (5)].tconstv));
    }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 763 "src/thrifty.yy"
    {
      pdebug("ConstMapContents =>");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_map();
    }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 771 "src/thrifty.yy"
    {
      (yyval.iconst) = struct_is_struct;
    }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 775 "src/thrifty.yy"
    {
      (yyval.iconst) = struct_is_union;
    }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 781 "src/thrifty.yy"
    {
      pdebug("Struct -> tok_struct tok_identifier { FieldList }");
      validate_simple_identifier( (yyvsp[(2) - (7)].id));
      (yyvsp[(5) - (7)].tstruct)->set_xsd_all((yyvsp[(3) - (7)].tbool));
      (yyvsp[(5) - (7)].tstruct)->set_union((yyvsp[(1) - (7)].iconst) == struct_is_union);
      (yyval.tstruct) = (yyvsp[(5) - (7)].tstruct);
      (yyval.tstruct)->set_name((yyvsp[(2) - (7)].id));
      if ((yyvsp[(7) - (7)].ttype) != NULL) {
        (yyval.tstruct)->annotations_ = (yyvsp[(7) - (7)].ttype)->annotations_;
        delete (yyvsp[(7) - (7)].ttype);
      }
    }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 796 "src/thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 800 "src/thrifty.yy"
    {
      (yyval.tbool) = false;
    }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 806 "src/thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 810 "src/thrifty.yy"
    {
      (yyval.tbool) = false;
    }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 816 "src/thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 820 "src/thrifty.yy"
    {
      (yyval.tbool) = false;
    }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 826 "src/thrifty.yy"
    {
      (yyval.tstruct) = (yyvsp[(3) - (4)].tstruct);
    }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 830 "src/thrifty.yy"
    {
      (yyval.tstruct) = NULL;
    }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 836 "src/thrifty.yy"
    {
      pdebug("Xception -> tok_xception tok_identifier { FieldList }");
      validate_simple_identifier( (yyvsp[(2) - (6)].id));
      (yyvsp[(4) - (6)].tstruct)->set_name((yyvsp[(2) - (6)].id));
      (yyvsp[(4) - (6)].tstruct)->set_xception(true);
      (yyval.tstruct) = (yyvsp[(4) - (6)].tstruct);
      if ((yyvsp[(6) - (6)].ttype) != NULL) {
        (yyval.tstruct)->annotations_ = (yyvsp[(6) - (6)].ttype)->annotations_;
        delete (yyvsp[(6) - (6)].ttype);
      }
    }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 850 "src/thrifty.yy"
    {
      pdebug("Service -> tok_service tok_identifier { FunctionList }");
      validate_simple_identifier( (yyvsp[(2) - (9)].id));
      (yyval.tservice) = (yyvsp[(6) - (9)].tservice);
      (yyval.tservice)->set_name((yyvsp[(2) - (9)].id));
      (yyval.tservice)->set_extends((yyvsp[(3) - (9)].tservice));
      if ((yyvsp[(9) - (9)].ttype) != NULL) {
        (yyval.tservice)->annotations_ = (yyvsp[(9) - (9)].ttype)->annotations_;
        delete (yyvsp[(9) - (9)].ttype);
      }
    }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 863 "src/thrifty.yy"
    {
       g_arglist = 1;
    }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 868 "src/thrifty.yy"
    {
       g_arglist = 0;
    }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 874 "src/thrifty.yy"
    {
      pdebug("Extends -> tok_extends tok_identifier");
      (yyval.tservice) = NULL;
      if (g_parse_mode == PROGRAM) {
        (yyval.tservice) = g_scope->get_service((yyvsp[(2) - (2)].id));
        if ((yyval.tservice) == NULL) {
          yyerror("Service \"%s\" has not been defined.", (yyvsp[(2) - (2)].id));
          exit(1);
        }
      }
    }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 886 "src/thrifty.yy"
    {
      (yyval.tservice) = NULL;
    }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 892 "src/thrifty.yy"
    {
      pdebug("FunctionList -> FunctionList Function");
      (yyval.tservice) = (yyvsp[(1) - (2)].tservice);
      (yyvsp[(1) - (2)].tservice)->add_function((yyvsp[(2) - (2)].tfunction));
    }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 898 "src/thrifty.yy"
    {
      pdebug("FunctionList -> ");
      (yyval.tservice) = new t_service(g_program);
    }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 905 "src/thrifty.yy"
    {
      validate_simple_identifier( (yyvsp[(4) - (10)].id));
      (yyvsp[(6) - (10)].tstruct)->set_name(std::string((yyvsp[(4) - (10)].id)) + "_args");
      (yyval.tfunction) = new t_function((yyvsp[(3) - (10)].ttype), (yyvsp[(4) - (10)].id), (yyvsp[(6) - (10)].tstruct), (yyvsp[(8) - (10)].tstruct), (yyvsp[(2) - (10)].tbool));
      if ((yyvsp[(1) - (10)].dtext) != NULL) {
        (yyval.tfunction)->set_doc((yyvsp[(1) - (10)].dtext));
      }
      if ((yyvsp[(9) - (10)].ttype) != NULL) {
        (yyval.tfunction)->annotations_ = (yyvsp[(9) - (10)].ttype)->annotations_;
        delete (yyvsp[(9) - (10)].ttype);
      }
    }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 920 "src/thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 924 "src/thrifty.yy"
    {
      (yyval.tbool) = false;
    }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 930 "src/thrifty.yy"
    {
      pdebug("Throws -> tok_throws ( FieldList )");
      (yyval.tstruct) = (yyvsp[(3) - (4)].tstruct);
      if (g_parse_mode == PROGRAM && !validate_throws((yyval.tstruct))) {
        yyerror("Throws clause may not contain non-exception types");
        exit(1);
      }
    }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 939 "src/thrifty.yy"
    {
      (yyval.tstruct) = new t_struct(g_program);
    }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 945 "src/thrifty.yy"
    {
      pdebug("FieldList -> FieldList , Field");
      (yyval.tstruct) = (yyvsp[(1) - (2)].tstruct);
      if (!((yyval.tstruct)->append((yyvsp[(2) - (2)].tfield)))) {
        yyerror("\"%d: %s\" - field identifier/name has already been used", (yyvsp[(2) - (2)].tfield)->get_key(), (yyvsp[(2) - (2)].tfield)->get_name().c_str());
        exit(1);
      }
    }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 954 "src/thrifty.yy"
    {
      pdebug("FieldList -> ");
      y_field_val = -1;
      (yyval.tstruct) = new t_struct(g_program);
    }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 962 "src/thrifty.yy"
    {
      pdebug("tok_int_constant : Field -> FieldType tok_identifier");
      if ((yyvsp[(2) - (12)].tfieldid).auto_assigned) {
        pwarning(1, "No field key specified for %s, resulting protocol may have conflicts or not be backwards compatible!\n", (yyvsp[(6) - (12)].id));
        if (g_strict >= 192) {
          yyerror("Implicit field keys are deprecated and not allowed with -strict");
          exit(1);
        }
      }
      validate_simple_identifier((yyvsp[(6) - (12)].id));
      (yyval.tfield) = new t_field((yyvsp[(4) - (12)].ttype), (yyvsp[(6) - (12)].id), (yyvsp[(2) - (12)].tfieldid).value);
      (yyval.tfield)->set_reference((yyvsp[(5) - (12)].tbool));
      (yyval.tfield)->set_req((yyvsp[(3) - (12)].ereq));
      if ((yyvsp[(7) - (12)].tconstv) != NULL) {
        g_scope->resolve_const_value((yyvsp[(7) - (12)].tconstv), (yyvsp[(4) - (12)].ttype));
        validate_field_value((yyval.tfield), (yyvsp[(7) - (12)].tconstv));
        (yyval.tfield)->set_value((yyvsp[(7) - (12)].tconstv));
      }
      (yyval.tfield)->set_xsd_optional((yyvsp[(8) - (12)].tbool));
      (yyval.tfield)->set_xsd_nillable((yyvsp[(9) - (12)].tbool));
      if ((yyvsp[(1) - (12)].dtext) != NULL) {
        (yyval.tfield)->set_doc((yyvsp[(1) - (12)].dtext));
      }
      if ((yyvsp[(10) - (12)].tstruct) != NULL) {
        (yyval.tfield)->set_xsd_attrs((yyvsp[(10) - (12)].tstruct));
      }
      if ((yyvsp[(11) - (12)].ttype) != NULL) {
        (yyval.tfield)->annotations_ = (yyvsp[(11) - (12)].ttype)->annotations_;
        delete (yyvsp[(11) - (12)].ttype);
      }
    }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 996 "src/thrifty.yy"
    {
      if ((yyvsp[(1) - (2)].iconst) <= 0) {
        if (g_allow_neg_field_keys) {
          /*
           * g_allow_neg_field_keys exists to allow users to add explicitly
           * specified key values to old .thrift files without breaking
           * protocol compatibility.
           */
          if ((yyvsp[(1) - (2)].iconst) != y_field_val) {
            /*
             * warn if the user-specified negative value isn't what
             * thrift would have auto-assigned.
             */
            pwarning(1, "Nonpositive field key (%" PRIi64") differs from what would be "
                     "auto-assigned by thrift (%d).\n", (yyvsp[(1) - (2)].iconst), y_field_val);
          }
          /*
           * Leave $1 as-is, and update y_field_val to be one less than $1.
           * The FieldList parsing will catch any duplicate key values.
           */
          y_field_val = static_cast<int32_t>((yyvsp[(1) - (2)].iconst) - 1);
          (yyval.tfieldid).value = static_cast<int32_t>((yyvsp[(1) - (2)].iconst));
          (yyval.tfieldid).auto_assigned = false;
        } else {
          pwarning(1, "Nonpositive value (%d) not allowed as a field key.\n",
                   (yyvsp[(1) - (2)].iconst));
          (yyval.tfieldid).value = y_field_val--;
          (yyval.tfieldid).auto_assigned = true;
        }
      } else {
        (yyval.tfieldid).value = static_cast<int32_t>((yyvsp[(1) - (2)].iconst));
        (yyval.tfieldid).auto_assigned = false;
      }
    }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1031 "src/thrifty.yy"
    {
      (yyval.tfieldid).value = y_field_val--;
      (yyval.tfieldid).auto_assigned = true;
    }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1038 "src/thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1042 "src/thrifty.yy"
    {
     (yyval.tbool) = false;
   }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1048 "src/thrifty.yy"
    {
      (yyval.ereq) = t_field::T_REQUIRED;
    }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1052 "src/thrifty.yy"
    {
      if (g_arglist) {
        if (g_parse_mode == PROGRAM) {
          pwarning(1, "optional keyword is ignored in argument lists.\n");
        }
        (yyval.ereq) = t_field::T_OPT_IN_REQ_OUT;
      } else {
        (yyval.ereq) = t_field::T_OPTIONAL;
      }
    }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1063 "src/thrifty.yy"
    {
      (yyval.ereq) = t_field::T_OPT_IN_REQ_OUT;
    }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1069 "src/thrifty.yy"
    {
      if (g_parse_mode == PROGRAM) {
        (yyval.tconstv) = (yyvsp[(2) - (2)].tconstv);
      } else {
        (yyval.tconstv) = NULL;
      }
    }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1077 "src/thrifty.yy"
    {
      (yyval.tconstv) = NULL;
    }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1083 "src/thrifty.yy"
    {
      pdebug("FunctionType -> FieldType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1088 "src/thrifty.yy"
    {
      pdebug("FunctionType -> tok_void");
      (yyval.ttype) = g_type_void;
    }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1095 "src/thrifty.yy"
    {
      pdebug("FieldType -> tok_identifier");
      if (g_parse_mode == INCLUDES) {
        // Ignore identifiers in include mode
        (yyval.ttype) = NULL;
      } else {
        // Lookup the identifier in the current scope
        (yyval.ttype) = g_scope->get_type((yyvsp[(1) - (1)].id));
        if ((yyval.ttype) == NULL) {
          /*
           * Either this type isn't yet declared, or it's never
             declared.  Either way allow it and we'll figure it out
             during generation.
           */
          (yyval.ttype) = new t_typedef(g_program, (yyvsp[(1) - (1)].id), true);
        }
      }
    }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1114 "src/thrifty.yy"
    {
      pdebug("FieldType -> BaseType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1119 "src/thrifty.yy"
    {
      pdebug("FieldType -> ContainerType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1125 "src/thrifty.yy"
    {
      pdebug("BaseType -> SimpleBaseType TypeAnnotations");
      if ((yyvsp[(2) - (2)].ttype) != NULL) {
        (yyval.ttype) = new t_base_type(*static_cast<t_base_type*>((yyvsp[(1) - (2)].ttype)));
        (yyval.ttype)->annotations_ = (yyvsp[(2) - (2)].ttype)->annotations_;
        delete (yyvsp[(2) - (2)].ttype);
      } else {
        (yyval.ttype) = (yyvsp[(1) - (2)].ttype);
      }
    }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1138 "src/thrifty.yy"
    {
      pdebug("BaseType -> tok_string");
      (yyval.ttype) = g_type_string;
    }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1143 "src/thrifty.yy"
    {
      pdebug("BaseType -> tok_binary");
      (yyval.ttype) = g_type_binary;
    }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1148 "src/thrifty.yy"
    {
      pdebug("BaseType -> tok_slist");
      (yyval.ttype) = g_type_slist;
    }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1153 "src/thrifty.yy"
    {
      pdebug("BaseType -> tok_bool");
      (yyval.ttype) = g_type_bool;
    }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1158 "src/thrifty.yy"
    {
      pdebug("BaseType -> tok_byte");
      (yyval.ttype) = g_type_byte;
    }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1163 "src/thrifty.yy"
    {
      pdebug("BaseType -> tok_i16");
      (yyval.ttype) = g_type_i16;
    }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1168 "src/thrifty.yy"
    {
      pdebug("BaseType -> tok_i32");
      (yyval.ttype) = g_type_i32;
    }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1173 "src/thrifty.yy"
    {
      pdebug("BaseType -> tok_i64");
      (yyval.ttype) = g_type_i64;
    }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1178 "src/thrifty.yy"
    {
      pdebug("BaseType -> tok_double");
      (yyval.ttype) = g_type_double;
    }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1184 "src/thrifty.yy"
    {
      pdebug("ContainerType -> SimpleContainerType TypeAnnotations");
      (yyval.ttype) = (yyvsp[(1) - (2)].ttype);
      if ((yyvsp[(2) - (2)].ttype) != NULL) {
        (yyval.ttype)->annotations_ = (yyvsp[(2) - (2)].ttype)->annotations_;
        delete (yyvsp[(2) - (2)].ttype);
      }
    }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1195 "src/thrifty.yy"
    {
      pdebug("SimpleContainerType -> MapType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1200 "src/thrifty.yy"
    {
      pdebug("SimpleContainerType -> SetType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1205 "src/thrifty.yy"
    {
      pdebug("SimpleContainerType -> ListType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1212 "src/thrifty.yy"
    {
      pdebug("MapType -> tok_map <FieldType, FieldType>");
      (yyval.ttype) = new t_map((yyvsp[(4) - (7)].ttype), (yyvsp[(6) - (7)].ttype));
      if ((yyvsp[(2) - (7)].id) != NULL) {
        ((t_container*)(yyval.ttype))->set_cpp_name(std::string((yyvsp[(2) - (7)].id)));
      }
    }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1222 "src/thrifty.yy"
    {
      pdebug("SetType -> tok_set<FieldType>");
      (yyval.ttype) = new t_set((yyvsp[(4) - (5)].ttype));
      if ((yyvsp[(2) - (5)].id) != NULL) {
        ((t_container*)(yyval.ttype))->set_cpp_name(std::string((yyvsp[(2) - (5)].id)));
      }
    }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1232 "src/thrifty.yy"
    {
      pdebug("ListType -> tok_list<FieldType>");
      check_for_list_of_bytes((yyvsp[(3) - (5)].ttype));
      (yyval.ttype) = new t_list((yyvsp[(3) - (5)].ttype));
      if ((yyvsp[(5) - (5)].id) != NULL) {
        ((t_container*)(yyval.ttype))->set_cpp_name(std::string((yyvsp[(5) - (5)].id)));
      }
    }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1243 "src/thrifty.yy"
    {
      (yyval.id) = (yyvsp[(2) - (2)].id);
    }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1247 "src/thrifty.yy"
    {
      (yyval.id) = NULL;
    }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1253 "src/thrifty.yy"
    {
      pdebug("TypeAnnotations -> ( TypeAnnotationList )");
      (yyval.ttype) = (yyvsp[(2) - (3)].ttype);
    }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1258 "src/thrifty.yy"
    {
      (yyval.ttype) = NULL;
    }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1264 "src/thrifty.yy"
    {
      pdebug("TypeAnnotationList -> TypeAnnotationList , TypeAnnotation");
      (yyval.ttype) = (yyvsp[(1) - (2)].ttype);
      (yyval.ttype)->annotations_[(yyvsp[(2) - (2)].tannot)->key] = (yyvsp[(2) - (2)].tannot)->val;
      delete (yyvsp[(2) - (2)].tannot);
    }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1271 "src/thrifty.yy"
    {
      /* Just use a dummy structure to hold the annotations. */
      (yyval.ttype) = new t_struct(g_program);
    }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1278 "src/thrifty.yy"
    {
      pdebug("TypeAnnotation -> TypeAnnotationValue");
      (yyval.tannot) = new t_annotation;
      (yyval.tannot)->key = (yyvsp[(1) - (3)].id);
      (yyval.tannot)->val = (yyvsp[(2) - (3)].id);
    }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1287 "src/thrifty.yy"
    {
      pdebug("TypeAnnotationValue -> = tok_literal");
      (yyval.id) = (yyvsp[(2) - (2)].id);
    }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1292 "src/thrifty.yy"
    {
      pdebug("TypeAnnotationValue ->");
      (yyval.id) = strdup("1");
    }
    break;



/* Line 1455 of yacc.c  */
#line 3284 "src\\thrifty.cc"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 1297 "src/thrifty.yy"


