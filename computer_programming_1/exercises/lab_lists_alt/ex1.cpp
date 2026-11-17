#include <iostream>

struct Node {
    int val;
    Node* next;
};

bool is_subset(Node* list1, Node* list2){
    Node* temp1 = list1;
    while(list1 != NULL){
        Node* temp2 = list2;
        bool flag = true;
        while(list2 != NULL){
            if(list1 == NULL){
                break;
            }
            if(list1->val != list2->val){
                flag = false;
            }
            list1 = list1->next;
            list2 = list2->next;
        }
        list2 = temp2;
        if(flag) {
            return true;
        }
        temp1 = temp1->next;
        list1 = temp1;
    }
    return false;
}

void push(Node*& list, int val){
    Node* next = new Node{val=val, next=NULL};
    if(list == NULL){
        list = next;
        return;
    }
    if(list->next == NULL){
        list->next = next;
        return;
    }
    push(list->next, val);
}

void print_list(Node* list) {
    if(list == NULL) {
        std::cout << std::endl;
        return;
    }
    std::cout << list->val << " ";
    print_list(list->next);
}

Node* rand_list(int n){
    if(n == 0)
        return NULL;
    Node* list = new Node{rand() % 100};
    list->next = rand_list(n - 1);
    return list;
}

int main(){
    Node* list1 = NULL;
    Node* list2 = NULL;

    /* push(list1, 1);
    push(list1, 2);*/
    
    push(list2, 4);
    push(list2, 5);
    push(list2, 6);

    list1 = rand_list(5);

    print_list(list1);
    print_list(list2);
    std::cout << is_subset(list1, list2) << std::endl;
}
