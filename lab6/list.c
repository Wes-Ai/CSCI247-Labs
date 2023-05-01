#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int value;
    struct node* next;
    struct node* previous;
};

struct node* make_node(int value, struct node* next, struct node* previous) {
    struct node* tempNode = (struct node*)malloc(sizeof(struct node));
    tempNode->value = value;
    tempNode->next = next;
    tempNode->previous = previous;
    return tempNode;
}

void add_back(struct node** list, int value) {
    struct node* newNode = make_node(value, NULL, NULL);

    if ((*list) == NULL) {
        // If the head is NULL, then the new node is the new head.
        newNode->previous = NULL;
        (*list) = newNode;              // Assign head as the new node.
        return ;
    }
    // If the list is not empty then traverse to the end of the list.
    struct node* ptr = (*list);
    while(ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = newNode;
    newNode->previous = ptr;
}

void print_list(struct node* list, int backwards) {
    struct node* node = list;

    if (backwards == 0) {
        while (node != NULL) {
            printf("%d ", node->value);
            node = node->next;
        }
    } else if (backwards == 1) {
        while (node->next != NULL) {
            node = node->next;
        }
        while (node != NULL) {
            printf("%d ", node->value);
            node = node->previous;
        }
    }
}

void remove_node(struct node** list, int value) {
    struct node* curr = *list;
    // If the value to be removed is at the start of the list, then delete that head.
    if ((*list)->previous == NULL && curr->value == value) {
        *list = (*list)->next;
        curr->next = NULL;
        free(curr);
    } else {
        while (curr != NULL) {
            if (curr->value == value) {
                struct node* prevNode = curr->previous;
                struct node* nextNode = curr->next;

                // Update the next pointer of the previous node and the previous pointer of the next node. 
                // In this way, the middle node is removed from the list.
                curr->previous->next = nextNode;    // 
                if(nextNode != NULL) {
                    nextNode->previous = prevNode;
                }
                // Remove the link to the list and free the memory.
                curr->next = curr->previous = NULL;
                free(curr);
                break;
            } else {
                curr = curr->next;
            }
        }
    }
}


int main(int argc, char** argv) {

    struct node* list = NULL;        // initially the tree is NULL

    add_back(&list, 42);
    add_back(&list, 13);
    add_back(&list, 50);
    add_back(&list, 15);
    add_back(&list, 2);
    print_list(list, 0); // 42, 13, 50, 15, 2
    printf("\n");
    print_list(list, 1);
    printf("\n");

 
    remove_node(&list, 15);   
    remove_node(&list, 13);   
    remove_node(&list, 42);         
    print_list(list, 0);                // 50, 2
    printf("\n");
}