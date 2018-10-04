struct stat {
  char player[64];
  int points;
};

struct stat randStruct();
void printStruct(struct stat s);
void modPlayer(struct stat * p);
void modPoints(struct stat * p, int newPoints);
