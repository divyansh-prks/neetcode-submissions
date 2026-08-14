class LRUCache {
    struct Node {
        int key;
        int value;
        Node* prev;
        Node* next;

        Node(int k, int v) {
            key = k;
            value = v;
            prev = nullptr;
            next = nullptr;
        }
    };

    int capacity;
    unordered_map<int, Node*> cacheMap;
    Node* head;
    Node* tail;

    // Remove node from linked list
    void remove(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    // Add node immediately after head
    // This represents "most recently used"
    void add(Node* node) {
        Node* nextNode = head->next;

        head->next = node;
        node->prev = head;

        node->next = nextNode;
        nextNode->prev = node;
    }

public:
    LRUCache(int capacity) {
        this->capacity = capacity;

        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (cacheMap.find(key) == cacheMap.end()) {
            return -1;
        }

        Node* node = cacheMap[key];

        // Accessed -> make it most recently used
        remove(node);
        add(node);

        return node->value;
    }

    void put(int key, int value) {
        // Key already exists
        if (cacheMap.find(key) != cacheMap.end()) {
            Node* oldNode = cacheMap[key];

            remove(oldNode);
            cacheMap.erase(key);
            delete oldNode;
        }

        // Create new node
        Node* node = new Node(key, value);

        cacheMap[key] = node;
        add(node);

        // Capacity exceeded
        if (cacheMap.size() > capacity) {
            // Least recently used = node before tail
            Node* lru = tail->prev;

            remove(lru);
            cacheMap.erase(lru->key);

            delete lru;
        }
    }
};