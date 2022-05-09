CC = gcc
CFLAGS = -W -Wall
TARGET = mov
OBJECT = theater.c movie.o manager.o
all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
clean:
	rm *.o mov
