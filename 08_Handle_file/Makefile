.PHONY: clean obj

CC := gcc
CFLAGS := -c -fPIC -o

CUR_DIR := .
SCR_DIR := $(CUR_DIR)/scr
INC_DIR := $(CUR_DIR)/inc
OBJ_DIR := $(CUR_DIR)/obj
EXC_DIR := $(CUR_DIR)/bin


obj:
	$(CC) $(CFLAGS) $(OBJ_DIR)/main.o $(CUR_DIR)/main.c -I $(INC_DIR)
	$(CC) $(CFLAGS) $(OBJ_DIR)/lib.o $(SCR_DIR)/lib.c -I $(INC_DIR)


clean:
	rm -rf ./obj/* ./bin/*