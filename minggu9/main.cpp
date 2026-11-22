#include <iostream>
#include "queue.h"

using namespace std;            /// Muhammad Nabil RAissa P 109082500127

int main() {
    Queue Q;
    createQueue(Q);

    cout << "Kondisi awal: ";
    printInfo(Q);

    enqueue(Q, 5);
    printInfo(Q);

    enqueue(Q, 2);
    printInfo(Q);

    enqueue(Q, 7);
    printInfo(Q);

    dequeue(Q);
    printInfo(Q);

    enqueue(Q, 4);
    printInfo(Q);

    dequeue(Q);
    printInfo(Q);

    dequeue(Q);
    printInfo(Q);

    return 0;
}