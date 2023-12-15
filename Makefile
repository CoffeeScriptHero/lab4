CXX = g++
CXXFLAGS = -Wall -std=c++11
LIBRARY = libcalculator.a
TARGET = calculator
SOURCES = calculator.cpp advanced_calculator.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(LIBRARY) $(TARGET)

$(LIBRARY): $(OBJECTS)
	ar rcs $(LIBRARY) $(OBJECTS)

$(TARGET): main.cpp $(LIBRARY)
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp $(LIBRARY)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJECTS) $(LIBRARY) $(TARGET)
