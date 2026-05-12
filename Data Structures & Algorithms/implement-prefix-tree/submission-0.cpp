
struct Node {
    int value;
    vector<Node*> next;
    bool isEnding;

    Node(int value):value(value){
        next.assign(26, nullptr);
        isEnding = false;
    }
};
class PrefixTree {
public:
    Node* head;
    PrefixTree() {
        head = new Node(-1);
    }
    
    void insert(string word) {
        Node* cur = head;
        int n = word.length();
        for (int i = 0; i < n; i++){
            int value = word[i] - 'a';
            if (cur->next[value] == nullptr){
                Node* newnode = new Node(value);
                cur->next[value] = newnode;
            }
            cur = cur->next[value];
        }
        cur->isEnding = true;
    }
    
    bool search(string word) {
        Node* cur = head;
        int n = word.length();
        for (int i = 0; i < n; i++){
            int value = word[i] - 'a';
            if (cur->next[value] == nullptr) return false;
            cur = cur->next[value];
        }
        return cur->isEnding;
    }
    
    bool startsWith(string prefix) {
        Node* cur = head;
        int n = prefix.length();
        for (int i = 0; i < n; i++){
            int value = prefix[i] - 'a';
            if (cur->next[value] == nullptr) return false;
            cur = cur->next[value];
        }
        return true;
    }
};
