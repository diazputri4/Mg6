#include <stdio.h>
#include <stdlib.h>
#include "node.h"

address createNode(int data) {
    address newNode = (address)malloc(sizeof(Node));
    if (newNode != NULL) {
        newNode->info = data;
        newNode->next = NULL;
    } else {
        printf("Gagal mengalokasikan memori untuk node baru!\n");
    }
    return newNode;
}

void deleteNode(address *node) {
    if (*node != NULL) {
        free(*node);
        *node = NULL;
    }
}
