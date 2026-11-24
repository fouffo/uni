#include <iostream>
#include <queue>

struct Tree
{
    int val;
    Tree *left;
    Tree *right;
};

void add(Tree *&tree, int val)
{
    if (tree == NULL)
    {
        tree = new Tree{
            val,
            NULL,
            NULL};
    }
    else if (val < tree->val)
    {
        if (tree->left == NULL)
        {
            tree->left = new Tree{
                val,
                NULL,
                NULL};
        }
        else if (val < tree->left->val)
        {
            tree->left = new Tree{
                val,
                tree->left,
                NULL};
        }
        else
        {
            add(tree->left, val);
        }
    }
    else
    {
        if (tree->right == NULL)
        {
            tree->right = new Tree{
                val,
                NULL,
                NULL};
        }
        else if (val > tree->right->val)
        {
            tree->right = new Tree{
                val,
                NULL,
                tree->right};
        }
        else
        {
            add(tree->left, val);
        }
    }
}

void print_dfs(Tree *tree)
{
    if (tree == NULL)
        return;
    if (tree->left != NULL)
    {
        print_dfs(tree->left);
    }
    std::cout << tree->val << " ";
    print_dfs(tree->right);
}

void print_bfs(Tree *tree)
{
    std::queue<Tree *> nodes;
    nodes.push(tree);
    while (!nodes.empty())
    {
        Tree *node = nodes.front();
        std::cout << node->val << " has children " << (node->left == NULL ? -1000 : node->left->val) << " and " << (node->right == NULL ? -1000 : node->right->val) << std::endl;
        if (node->left != NULL)
            nodes.push(node->left);
        if (node->right != NULL)
            nodes.push(node->right);
        nodes.pop();
    }
}

int main()
{
    Tree *tree = new Tree{0};
    add(tree, 1);
    add(tree, 5);
    add(tree, 6);
    add(tree, 2);
    add(tree, 8);
    add(tree, 9);
    add(tree, 4);
    add(tree, 3);
    add(tree, 7);

    print_bfs(tree);
}
