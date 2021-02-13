#ifndef MONARCH_QUEUE_H
#define MONARCH_QUEUE_H

#include <iostream>

namespace monarch {

template <typename T>
class Queue {
public:
    class Node {
        public:
            Node(const T& data);
            friend class Queue;
        private:
            T data_;
            Node* next_;
        
    };
    Queue(size_t len);
    ~Queue();
    void enqueue(const T& data);
    void dequeue();
    void printQueue();

private:
    Node* m_front;
    Node* m_rear;
    size_t m_len;

};

template<typename T>
Queue<T>::Node::Node(const T& data):
        data_(data),
        next_(NULL) {
}

template <typename T>
Queue<T>::Queue(size_t len): m_len(len), m_rear(NULL), m_front(NULL) {
}

template <typename T>
Queue<T>::~Queue() {
}

template <typename T>
void Queue<T>::enqueue(const T& data) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    Node* iter = new Node(data);
    if ((m_front == NULL) && (m_rear == NULL)) {
        m_front = m_rear = iter;
        return; 
    }
    m_rear->next_ = iter;
    m_rear = iter;
}

template <typename T>
void Queue<T>::dequeue() {
    if (m_rear == NULL) {
        std::cout << __PRETTY_FUNCTION__ << " queue empty:: " << std::endl;
        return;
    }
    Node* iter = m_front;
    m_front = m_front->next_;
    if (m_front == NULL) {
        m_rear = NULL;
    }
    delete iter;
}

template <typename T>
void Queue<T>:: printQueue() {
    if (m_front == NULL) {
        std::cout << __PRETTY_FUNCTION__ << "queue is empty" << std::endl;
        return;
    }

    Node *temp = m_front;
    while (temp != NULL) {
        std::cout << "data:: " << temp->data_ << std::endl;
        temp = temp->next_;
    }
}


} // namespace monarch

#endif // MONARCH_QUEUE_H
