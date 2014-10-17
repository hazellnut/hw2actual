#Makefile

CC = gcc
CFLAGS = -Wall

CSRC = hw2.c
HSRC = hw2.h
COMPILE = -gdwarf-2
OBJ = $(CSRC:.c=.o)

%o:%c $(HSRC)
	$(CC) $(CFLAGS) -c $<

        
# Additional targets
.PHONY: clobber
.PHONY: clean
.PHONY: test1
.PHONY: give
.PHONY: gdb

# Target rules

hw2: $(OBJ)
	$(CC) $(CFLAGS) -o hw2 $(OBJ)

clobber:
	rm -f $(OBJ) hw2

clean:
	rm -f $(OBJ)

test1:
	./hw2 < addmessagetest.dat

give:
	give cs1917 hw2 Makefile hw2.c hw2.h
	
gdb: $(OBJ) 
	$(CC) $(CFLAGS) $(COMPILE) -o hw2 $(OBJ)