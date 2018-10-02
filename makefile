all: struct.c printStruct.o randStruct.o struct.h
  gcc -o main struct.c printStruct.o randStruct.o

printStruct.o: printStruct.c struct.h
  gcc -c printStruct.c

randStruct.o: randStruct.c struct.h
  gcc -c randStruct.c

clean:
  rm main *.o
