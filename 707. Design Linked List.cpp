struct node {
    node * prev;
    node * next;
    int    val;
};

class MyLinkedList {
public:
    MyLinkedList() {
        head = new struct node();
        tail = new struct node();
        
        head->next = tail;
        head->prev = head;
        tail->prev = head;
        tail->next = tail;
    }
    
    int get(int index) {
        int count = 0;
        auto node = head->next;
        while (count < index && node != tail)
        {
            node = node->next;
            count++;
        }
        if (node == tail)
            return -1;
        else
            return node->val;
    }
    
    void addAtHead(int val) {
        auto node = new struct node();
        node->val = val;
        node->next = head->next;
        node->prev = head;
        head->next = node;
        node->next->prev = node;
    }
    
    void addAtTail(int val) {
        auto node = new struct node();
        node->val = val;
        node->next = tail;
        node->prev = tail->prev;
        tail->prev = node;
        node->prev->next = node;
    }
    
    void addAtIndex(int index, int val) {
        int count = 0;
        auto node = head->next;
        while (count < index && node != tail)
        {
            node = node->next;
            count++;
        }
        //if (node != tail)
        if (count == index)
        {
            auto newNode = new struct node();
            newNode->val = val;
            newNode->next = node;
            newNode->prev = node->prev;
            node->prev = newNode;
            newNode->prev->next = newNode;
        }
    }
    
    void deleteAtIndex(int index) {
        int count = 0;
        auto node = head->next;
        while (count < index && node != tail)
        {
            node = node->next;
            count++;
        }
        if (node != tail)
        {
            node->prev->next = node->next;
            node->next->prev = node->prev;
            delete node;
        }
    }
    
    node * head;
    node * tail;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */