#include <stdio.h>
#include <stdbool.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>

// Estrutura para representar uma carta 
typedef struct {
    wchar_t numero;
    wchar_t naipe;
}carta;

enu