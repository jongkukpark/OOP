.SUFFIXES: .cpp .o

OBJECTS = Complex.o Float.o Integer.o
CXX = g++
TEST = test.o $(OBJECTS)
TARGET = test

$(TARGET) : $(TEST)
	$(CXX) -o $(TARGET) $(TEST)

clean :
	rm -rf $(TARGET) $(TEST)

Complex.o : Complex.cpp
Float.o : Float.cpp
Integer.o : Integer.cpp
