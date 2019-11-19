.SUFFIXES: .cpp .o

CXX = g++
OBJECTS = human.o shared_ref.o smart_obj.o student.o weak_pointer.o
TEST = test.o $(OBJECTS)
TARGET = test
MAIN = main.o $(OBJECTS)
MAT = main

$(TARGET) : $(TEST)
	$(CXX) -o $(TARGET) $(TEST)

$(MAT) : $(MAIN)
	$(CXX) -o $(MAT) $(MAIN)

clean :
	rm -rf $(TARGET) $(TEST)
	rm -rf $(MAT) $(MAIN)

human.o : human.cpp
shared_ref.o : shared_ref.cpp
smare_obj.o : smart_obj.cpp
student.o : student.cpp
weak_pointer.o : weak_pointer.cpp
