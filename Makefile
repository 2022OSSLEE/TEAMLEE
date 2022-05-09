CC = gcc
CFLAGS = -W -Wall
TARGET = mov
OBJECTS = theater.c manager.o movie.c
all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
clean:
	rm *.o mov
