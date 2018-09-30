SRC1=game.c
BIN=mario

$(BIN): $(SRC1) define.h genvars.h
	gcc -Wall -g -std=c99 $(SRC1) -lm `sdl-config --cflags --libs` -o $(BIN)

clean:
	rm -f $(BIN)
