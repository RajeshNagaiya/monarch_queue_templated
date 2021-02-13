#include "queue.h"

void test_int_queue() {
    monarch::Queue<int> queue(3);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);
    queue.printQueue();
    queue.dequeue();
    queue.printQueue();
}

void test_string_queue() {
    monarch::Queue<std::string> string_queue(3);
    string_queue.enqueue("hello");
    string_queue.printQueue();
}

int main() {
    test_int_queue();
    test_string_queue();
    return 1;
}