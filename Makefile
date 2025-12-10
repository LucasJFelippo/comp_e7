CC := gcc
CFLAGS := -Wall -Wextra -pedantic -std=c11
TARGET := main
SRCS := main.c soma.c subtrai.c multi.c div.c mod.c power.c
OBJS := $(SRCS:.c=.o)

.PHONY: all clean run
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@

main.o: main.c soma.h subtrai.h multi.h div.h mod.h power.h
soma.o: soma.c soma.h
subtrai.o: subtrai.c subtrai.h
multi.o: multi.c multi.h
div.o: div.c div.h
mod.o: mod.c mod.h
power.o: power.c power.h

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
