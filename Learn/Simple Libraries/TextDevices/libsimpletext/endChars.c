#include <ctype.h>
#include "simpletext.h"

void set_endChars(text_t *text, char *endCharArray)
{
  memcpy(text->ec, endCharArray, 4);
}

void set_endCharSequence(text_t *text, char *endCharSeqArray)
{
  memcpy(text->ecs, endCharSeqArray, 4);
}

