#include "Soundex.h"
#include <ctype.h>
#include <string.h>
void generateSoundex(const char *name, char *soundex) {
    int len = strlen(name);
    soundex[0] = toupper(name[0]);
}


