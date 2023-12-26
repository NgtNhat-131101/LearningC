.PHONY: clean obj shared install all

PRJ_NAME := learningC
SHARED_LIB_NAME := liblearn.so

CC := gcc
CFLAGS := -c -fPIC -o

CUR_DIR := .
SRC_DIR := $(CUR_DIR)/scr
INC_DIR := $(CUR_DIR)/inc
OBJ_DIR := $(CUR_DIR)/obj
BIN_DIR := $(CUR_DIR)/bin
LIB_DIR := $(CUR_DIR)/lib
STATIC_LIB_DIR := $(LIB_DIR)/static
SHARED_LIB_DIR := $(LIB_DIR)/shared

obj:
	$(CC) $(CFLAGS) $(OBJ_DIR)/main.o $(CUR_DIR)/main.c -I $(INC_DIR)
	$(CC) $(CFLAGS) $(OBJ_DIR)/lib.o $(SRC_DIR)/headers.c -I $(INC_DIR)

shared: obj
	$(CC) -shared $(OBJ_DIR)/* -o $(SHARED_LIB_DIR)/$(SHARED_LIB_NAME)

install: shared
	sudo install $(SHARED_LIB_DIR)/$(SHARED_LIB_NAME) /lib

all: obj shared install
	$(CC) $(OBJ_DIR)/main.o -L$(SHARED_LIB_DIR) -llearn -o $(BIN_DIR)/$(PRJ_NAME)

clean:
	rm -rf $(OBJ_DIR)/* $(BIN_DIR)/*
	rm -rf $(SHARED_LIB_DIR)/*