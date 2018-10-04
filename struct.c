#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "struct.h"
#include <string.h>

void printStruct(struct stat s) {
  printf("Player:%s\n", s.player);
  printf("Points Per Game:%d\n", s.points);
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

void modPoints(struct stat * p, int newPoints){
  (*p).points = newPoints;
}

void modPlayer(struct stat * p){
  char name[32];
  char backName[32];
  strcpy(name,(*p).player);
  int length = strlen((*p).player);
  int i=0;
  while(length--){
    backName[length]=name[i];
    i++;
  }
  strcpy((*p).player,backName);
}
    
int main(){
  struct stat foo = randStruct();
  struct stat same;
  struct stat *p = &same;
  strcpy(same.player,"Batman");
  same.points = 10;
  printf("Player:%s\nPoints Per Game:%d\n",same.player,same.points);
  modPoints(p,1000);
  printf("Batman's points have been modified to:%d\n",same.points);
  modPlayer(p);
  printf("Batman's name has been modifiedto:%s\n\n",same.player);
  printf("Random Structure:-------------------\n");
  printStruct(foo);
  
  return 0;
}
