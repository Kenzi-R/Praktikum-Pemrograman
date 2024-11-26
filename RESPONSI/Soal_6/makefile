CXX = g++
CXXFLAGS = -Wall
TARGET = soal6
TARGETTEST = test_soal6
SRC = soal6.cpp
SRCTEST = test_soal6.cpp

all: $(TARGET)
 	
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
	rm -f $(TARGETTEST)

test: ${TARGETTEST}

$(TARGETTEST): $(SRCTEST)
	$(CXX) $(CXXFLAGS) -o $(TARGETTEST) $(SRCTEST)
	./$(TARGETTEST)

.PHONY: all clean test