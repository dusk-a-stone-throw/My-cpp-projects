.PHONY: all clean run
CC=clang++
CFLAGS=-c -Wall -std=c++20 
LDFLAGS=
SOURCES=Main.cpp DrawGrid.cpp Tile.cpp SpawnTile.cpp Move.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=Main
all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
clean:
	rm -rf *.o
run: $(EXECUTABLE)
	./$(EXECUTABLE)
	
