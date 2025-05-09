CXX = g++
CXXFLAGS = -std=c++20 -O0 -Wall -g
TARGET = exec_test
SRC = execv_test.cpp

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

