.PHONY: all clean run install uninstall
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
install:
	install $(EXECUTABLE) $(PREFIX)
uninstall:
	rm -rf $(PREFIX)/$(EXECUTABLE)

