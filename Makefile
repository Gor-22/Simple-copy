CXX = g++
CXXFLAGS = -std=c++11

TARGET = simple-copy
OBJS = simple-copy.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

simple-copy.o: simple-copy.cpp
	$(CXX) $(CXXFLAGS) -c simple-copy.cpp

clean:
	rm -f $(TARGET) $(OBJS)

