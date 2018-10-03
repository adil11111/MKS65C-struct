#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "struct.h"
#include <string.h>

void printStruct(struct stat s) {
  printf("%s\n", s.player);
  printf("%d\n", s.points);
}

//0-30

struct stat randStruct() {
  char players[10][64] = {"Durant", "James", "Anthony", "Curry", "Davis", "Harden", "Westbrook", "George", "Leanord", "Thompson"};
  srand(time(NULL));
  struct stat s;
  strcpy(s.player, players[rand() % 10]);
  s.points = rand() %30;

  return s;
}

int main(){
  struct stat foo = randStruct();
  printStruct(foo);
  
  return 0;
}
