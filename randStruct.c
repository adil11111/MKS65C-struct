#include <time.h>
#include <stdlib.h>
#include "struct.h"
#include <string.h>

//0-30

struct stat randStruct() {
  char* players[] ={"Durant", "James", "Anthony", "Curry", "Davis", "Harden", "Westbrook", "George", "Leanord", "Thompson"};
  srand(time(NULL));
  struct stat s;
  strcpy(s.player, players[rand() % 10]);
  s.points = rand() %30;
  

}
