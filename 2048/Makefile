#all:
#	g++ Main.cpp DrawGrid.cpp Tile.cpp SpawnTile.cpp -o Main
CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=Main.cpp DrawGrid.cpp Tile.cpp SpawnTile.cpp Move.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=Main
.PHONY: all clean run
all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
clean:
	rm -rf *.o
run: $(EXECUTABLE)
	./$(EXECUTABLE)
	
