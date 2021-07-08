.PHONY: all clean install uninstall
CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=LayoutChanger.cpp Parsing.cpp
PREFIX = /usr/local/bin
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=LayoutChanger
all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
install:
	install $(EXECUTABLE) $(PREFIX)
uninstall:
	rm -rf $(PREFIX)/$(EXECUTABLE)
clean:
	rm -rf *.o
