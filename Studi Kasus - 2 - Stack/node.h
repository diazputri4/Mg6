#ifndef NODE_H
#define NODE_H

typedef struct tNode *address;
typedef struct tNode {
    int info;
    address next;
} Node;

address createNode(int data);
void deleteNode(address *node);

#endif
