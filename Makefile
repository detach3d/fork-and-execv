CXX = g++
CXXFLAGS = -std=c++20 -O0 -Wall -g
TARGET = fork_test
SRC = fork_test.cpp

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

