.PHONY:process_copy

CC=gcc
INCLUDE_PATH=../include/

CFLAGS=-I$(INCLUDE_PATH) -g -Wall -c
CPPFLAGS=
LDLFAGS=
CODE_CNAME=$(wildcard *.c)
CODE_ONAME=$(patsubst %.c,%.o,$(CODE_CNAME))
TARGET=process_copy

$(TARGET):$(CODE_ONAME)
	 $(CC) $^ -o $@
	 mv $(TARGET) ../
%.o:%.c
	$(CC) $(CFLAGS) $<

clean:
	rm $(CODE_ONAME) -rf
	rm ../$(TARGET) 	-rf

