#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void push(struct Node **head, int value){
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));  
    newnode->data = value; 
    newnode->next = *head;  
    *head = newnode;
}
void print(struct Node *head){
    struct Node *temp = head;
    while (temp != NULL){
        cout << temp->data;
        temp = temp->next;
    }
}
int main()
{
    struct Node *head = NULL;
    int n;
    while (1){
        cin >> n;
        if (n != -1)
            push(&head, n);
        else
            break;
    }
    print(head);
}

// == == == == == == == == == == == ==

//     2. #include<iostream>

//     using namespace std;

// class Node

// {

//     ​public :

// ​int data;

//     ​Node *next;
// };

// void push(struct Node **head, int value)

// {

//     ​Node *newnode = new Node();

//     ​newnode->data = value;

//     ​newnode->next = *head;

//     ​*head = newnode;
// }

// void print(Node *head)

// {

//     ​Node *temp = head;

//     ​while (temp != NULL)

// ​
//     {

//         ​​cout << temp->data;

//         ​​temp = temp->next;

//         ​
//     }
// }

// int main()

// {

//     ​Node *head = NULL;
//     ​int n;

//     ​while (1)

// ​
//     {

//         ​​cin >> n;

//         ​​if (n != -1)

// ​​​push(&head, n);

//         ​​else

//             ​​​break;

//         ​
//     }

//     ​print(head);
// }

// https: // writexo.com/dsqueue