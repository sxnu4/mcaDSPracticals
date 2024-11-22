#include <bits/stdc++.h>
using namespace std;

class Heap {
private:
    vector<int> heap;

    void heapifyMin(int i) {
        int smallest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < heap.size() && heap[left] < heap[smallest])
            smallest = left;

        if (right < heap.size() && heap[right] < heap[smallest])
            smallest = right;

        if (smallest != i) {
            swap(heap[i], heap[smallest]);
            heapifyMin(smallest);
        }
    }

    void heapifyMax(int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < heap.size() && heap[left] > heap[largest])
            largest = left;

        if (right < heap.size() && heap[right] > heap[largest])
            largest = right;

        if (largest != i) {
            swap(heap[i], heap[largest]);
            heapifyMax(largest);
        }
    }

public:
    void insert(int data) {
        heap.push_back(data);
    }

    void buildMinHeap() {
        for (int i = heap.size() / 2 - 1; i >= 0; i--)
            heapifyMin(i);
    }

    void buildMaxHeap() {
        for (int i = heap.size() / 2 - 1; i >= 0; i--)
            heapifyMax(i);
    }

    void printHeap() {
        for (int i = 0; i < heap.size(); i++)
            cout << heap[i] << " ";
        cout << endl;
    }
};

int main() {
    Heap h;
    int size;
    cout << "How many elements you wanna insert? : ";
    cin >> size;
    int val;
    for (int i = 0; i < size; i++) {
        cout << "Enter the value of element " << i + 1 << ": ";
        cin >> val;
        h.insert(val);
    }

    int choice;
    cout << "Enter 1 for Min Heap or 2 for Max Heap: ";
    cin >> choice;
    switch (choice) {
        case 1:
            h.buildMinHeap();
            cout << "Min Heap: ";
            break;
        case 2:
            h.buildMaxHeap();
            cout << "Max Heap: ";
            break;
        default:
            cout << "Invalid choice";
            return 1;
    }
    h.printHeap();

    return 0;
}
