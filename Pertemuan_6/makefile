# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = Task_6
TARGETTEST = Test_6
SRC = Task_6.cpp
SRCTEST = Test_6.cpp

# Default target: compile the program
all: $(TARGET)
 	
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean up the compiled files
clean:
	rm -f $(TARGET)
	rm -f $(TARGETTEST)

# Test the Program
test: ${TARGETTEST}

$(TARGETTEST): $(SRCTEST)
	$(CXX) $(CXXFLAGS) -o $(TARGETTEST) $(SRCTEST)
	./$(TARGETTEST)

# Phony targets to avoid conflicts
.PHONY: all clean test