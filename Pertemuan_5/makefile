# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = Task_5
TARGETTEST = Test_5
SRC = Task_5.cpp
SRCTEST = Test_5.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the sum.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean up the compiled files
clean:
	rm -f $(TARGET)
	rm -f $(TARGETTEST)

test: ${TARGETTEST}

$(TARGETTEST): $(SRCTEST)
	$(CXX) $(CXXFLAGS) -o $(TARGETTEST) $(SRCTEST)
	./$(TARGETTEST)

# Phony targets to avoid conflicts
.PHONY: all clean test