#include <iostream>
#include <vector>
#include <limits>  

#include "Heap.tpp"

int main() {

    std::vector<int> newTree = {3,8,9,4,5};
    Heap<int> myHeap(newTree);

    myHeap.printHeap();

    myHeap.insert(7);
    myHeap.printHeap();

    myHeap.remove(4);
    myHeap.printHeap();



    std::cout << myHeap.getMin() << std::endl;

    return 0;
}