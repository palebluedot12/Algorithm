#include <iostream>
#include <unordered_map>

using namespace std;

struct Node {
    char left, right;
};

unordered_map<char, Node> tree;

void preorder(char node) {
    if (node == '.') return;
    cout << node;  // 현재 노드
    preorder(tree[node].left);  // 왼쪽 자식
    preorder(tree[node].right); // 오른쪽 자식
}

void inorder(char node) {
    if (node == '.') return;
    inorder(tree[node].left);
    cout << node;
    inorder(tree[node].right);
}

void postorder(char node) {
    if (node == '.') return;
    postorder(tree[node].left);
    postorder(tree[node].right);
    cout << node;
}

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        char parent, left, right;
        cin >> parent >> left >> right;
        tree[parent] = {left, right};
    }

    preorder('A'); cout << '\n';
    inorder('A'); cout << '\n';
    postorder('A'); cout << '\n';

    return 0;
}
