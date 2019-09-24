#include <iostream>

int bss;
int data = 1;

int* code();

int main() {
    char* rodata = "ABC";
    int* heap = new int[2];
    heap[0] = 0;
    heap[1] = 1;
    int stack = 1;
    using namespace std;
    cout << "code\t"<< (void*) code << endl;
    cout << "rodata\t" << (void*)rodata << endl;
    cout << "data\t" << &data << endl;
    cout << "bss\t" << &bss << endl;
    cout << "heap\t"<< heap << endl;
    cout << "stack\t" << &stack << endl;
    return 0;
}

int* code() {
    int *a;
    return a;
}
