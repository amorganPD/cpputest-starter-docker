# Makefile
SRC_DIR=./src
OUT=unitTests
TEST_DIR=tests

test:
	make -C $(TEST_DIR)

test_clean:
	make -C $(TEST_DIR) clean

pencil.o:
	gcc -c -I$(SRC_DIR) $(SRC_DIR)/pencil.cpp -o $(SRC_DIR)/pencil.o

main: pencil.o
	gcc -I$(SRC_DIR) $(SRC_DIR)/pencil.o $(SRC_DIR)/main.cpp -o $(OUT)

all: test main

clean: test_clean
	rm $(SRC_DIR)/*.o $(SRC_DIR)/*.o $(OUT)
