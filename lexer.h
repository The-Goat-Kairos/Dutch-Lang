#include <stdio.h>
#ifndef LEXER_H_
#define LEXER_H_

typedef enum {
    TOKEN_EINDE_PROGRAMMA = 0,
    TOKEN_ONGELDIG,
    TOKEN_TEDOEN,

    TOKEN_IDENT,
    TOKEN_STRING,
    TOKEN_GETALLEN,             // Alleen gehele getallen tot nu toe
    TOKEN_WAAR,                 // waar (= true)
    TOKEN_VALS,                 // vals (= false)

    TOKEN_GEHEEL,               // Gehele getallen (= integers)
    TOKEN_GEEFTERUG,            // geefterug (= return)
    TOKEN_ALS,                  // als // als (...) dan ... anders ... einde
    TOKEN_DAN,                  // dan
    TOKEN_ANDERS,               // anders
    TOKEN_EINDE,                // einde
    TOKEN_ZOLANG,               // zolang // zolang (...) dan ... einde

    TOKEN_LPAREN,               // (
    TOKEN_RPAREN,               // )
    // TOKEN_LKRULHAAK,            // {
    // TOKEN_RKRULHAAK,            // }
    TOKEN_PUNTKOMMA,            // ;
    TOKEN_KOMMA,                // ,
    TOKEN_TOEWIJZEN,            // =
    TOKEN_HEKJE,                // # // schrijf("#{variabele}") voor variabele substitutie

    TOKEN_KLEINER,              // <
    TOKEN_GROTER,               // >
    TOKEN_GELIJK_AAN,           // ==
    TOKEN_NIET_GELIJK_AAN,      // !=
    TOKEN_PLUS_GELIJK_AAN,      // +=
    TOKEN_MINUS_GELIJK_AAN,     // +=
    TOKEN_OF,                   // |
    TOKEN_EN,                   // &
    TOKEN_XOR,                  // ^
    TOKEN_OFOF,                 // ||
    TOKEN_ENEN,                 // &&

    TOKEN_MODULO,               // %
    TOKEN_PLUS,                 // +
    TOKEN_MIN,                  // -
    TOKEN_KEER,                 // *
    TOKEN_DELEN,                // /
} Token_Type;

typedef struct {
    const char *bestand_pad;
    size_t rij;
    size_t kolom;
} Loc;

typedef struct {
    Token_Type type;
    const char *text;
    size_t text_lengte;
    Loc locatie;
} Token;

typedef struct {
    const char *inhoud;
    size_t inhoud_lengte;
    size_t cursor; // Dit is makkelijker dan regel en kolom bijhouden
    size_t regel;
    size_t rb; // regel begin
} Lexer;
// Lexer l*; kolom = l->cursor - l->rb;

Lexer nieuwe_lexer(const char *inhoud, size_t inhoud_lengte);
Token lexer_volgende(Lexer *l);


#endif // LEXER_H_
