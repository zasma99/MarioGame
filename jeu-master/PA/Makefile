SRC1=game.c
SRC2=mario.c
BIN=mario

$(BIN): $(SRC1) define.h genvars.h mario.h
	gcc -Wall -g -std=c99 $(SRC1) $(SRC2) -lm `sdl-config --cflags --libs` -o $(BIN)

clean:
	rm -f $(BIN)
