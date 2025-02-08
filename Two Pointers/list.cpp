// 1 -> 2 -> 3 -> 4 -> 5

#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        this->data = x;
        this->next = nullptr;
    }
};

int getMiddle(Node *head)
{
    int length = getLength(head);

    int ind = length / 2;

    while (ind--)
    {
        head = head->next;
    }

    return head->data;
}

int getLength(Node *head)
{
    int length = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << getMiddle(head) << endl;
}