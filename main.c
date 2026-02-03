#include <stdio.h>
#define NOB_IMPLEMENTATION
#define NOB_STRIP_PREFIX
#include "nob.h"
#include "lexer.h"

Lexer nieuwe_lexer(const char *inhoud, size_t inhoud_lengte) {
    Lexer l = {0};
    l.inhoud = inhoud;
    l.inhoud_lengte = inhoud_lengte;

    return l;
}

Token lexer_volgende(Lexer *l) {
    Token token = {0};

    TODO("Not implemented yet!");
    return token;
}

int main(void)
{
    return 0;
}
