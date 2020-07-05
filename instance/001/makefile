#+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
#
#	decimal-to-hexadecimal makefile
#
#+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

EXE = decimal-to-hexadecimal.exe
DIR = .
SOURCES = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SOURCES))

CC = gcc
LFLAGS = -Wall
CFLAGS = $(LFLAGS) -c

$(EXE): $(OBJS)
	$(CC) $^ -o $@

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) $^ -o $@

rm = del

clear: #rm
	$(rm) -rf $(OBJS) $(EXE)

