//values is an unsorted vector of integers
//k indicates the k'th larges.  For example, if k is 2, then we return the second largest, if k is 5, we return the 5th largest. 

// properties of priority queue:
// max element will reshuffle to top when inserted (.push)
// cannot traverse - only access top element (.top), so will need to delete to access kth element (.pop deletes from top)

#include <queue>
#include <vector>
#include <iostream>

using namespace std;

int kth_largest(vector<int> values, int k) {

    // create the priority queue (empty)
    priority_queue<int> pq;
    
    // placeholder for elements in vector 
    int element;

    // add the unsorted values into the pq
    for (int i=0; i < values.size(); i++) {
        element = values[i];
        pq.push(element);
    }

    // returning the kth largest element (popping k-1 elements, then accessing top)
    int counter = 0;
    while (counter < k - 1) {
        pq.pop();
        counter++;
    }
    
    return pq.top();

}

/*int main() {
    vector<int> og = {6, 9, 2, 21, 8, 10, 11, 3};
    int num = kth_largest(og, 3);

    cout << "3rd largest" << num << endl;

    return 0;
} */