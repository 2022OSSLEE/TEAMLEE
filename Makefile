CC = gcc
CFLAGS = -W -Wall
TARGET = mov
OBJECTS = theater.c manager.o movie.o
all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
clean:
	rm *.o mov
