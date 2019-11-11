.SUFFIXES: .cpp .o
OBJECTS = vehicle.o car.o bike.o
TARGET = test
CXX = g++
MAIN = main.o $(OBJECTS)

$(TARGET) : $(MAIN)
	$(CXX) -o $(TARGET) $(MAIN)

clean :
	rm -rf $(TARGET) $(MAIN)

vehicle.o : vehicle.cpp
car.o : car.cpp
bike.o : bike.cpp
