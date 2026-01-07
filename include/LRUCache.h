#ifndef LRU_CACHE_H
#define LRU_CACHE_H

#include <unordered_map>
#include <mutex>
#include "Node.h"

class LRUCache {
public:
    explicit LRUCache(int capacity);
    int get(int key);
    void put(int key, int value);

private:
    int capacity;
    std::unordered_map<int, Node*> cache;

    Node* head;  // Most recently used
    Node* tail;  // Least recently used

    std::mutex mtx;

    void addToFront(Node* node);
    void removeNode(Node* node);
};

#endif
