#include <iostream>

struct Node
{
    int val;
    Node *next;
};

void push(Node *&list, int val)
{
    if (list == NULL)
    {
        list = new Node{val = val};
        return;
    }
    Node *last = list;
    while (last->next != NULL)
        last = last->next;
    last->next = new Node{val = val};
}

void print(Node *list)
{
    if (list == NULL)
        return;
    Node *last = list;
    while (last->next != NULL)
    {
        std::cout << last->val << " ";
        last = last->next;
    }
    std::cout << std::endl;
}

void del(Node *list)
{
    if (list->next != NULL)
        del(list->next);
    delete list;
}

Node* reverse(Node *&list, Node *previous = NULL)
{
    if (list->next == NULL)
    {
        list->next = previous;
        return list;
    }
    reverse(list->next, list);
    if (previous != NULL)
    {
        list->next = previous;
    }
    else
    {
        list->next = NULL;
    }
    list = list->next;
    return list;
}

int main()
{
    Node *list = NULL;
    int val;

    while (!std::cin.fail())
    {
        std::cin >> val;
        push(list, val);
    }

    print(list);

    reverse(list);

    print(list);

    del(list);

    return 0;
}
