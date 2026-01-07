#include "LRUCache.h"

LRUCache::LRUCache(int cap) : capacity(cap) {
    head = new Node(0, 0);
    tail = new Node(0, 0);

    head->next = tail;
    tail->prev = head;
}
