SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
BIN=process

$(BIN):$(OBJ)
	gcc -o $@ $^
%.o:%.c
	gcc -c $<

.PHONY: 
clean: 
	rm -f $(OBJ) $(BIN) 