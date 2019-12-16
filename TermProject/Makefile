.SUFFIXES: .cpp .o

OBJECTS = array_2d.o block.o color_block.o big_block.o
MAIN = main.o $(OBJECTS)

CXX = g++

TARGET = test

$(TARGET) : $(MAIN)
	$(CXX) -o $(TARGET) $(MAIN)

clean :
	rm -rf $(MAIN) $(TARGET)
