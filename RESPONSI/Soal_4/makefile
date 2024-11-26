CXX = g++
CXXFLAGS = -Wall
TARGET = soal4
TARGETTEST = test_soal4
SRC = soal4.cpp
SRCTEST = test_soal4.cpp

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