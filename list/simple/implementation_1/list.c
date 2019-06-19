#include <stdlib.h>
#include "node.h"
#include "list.h"

List *create_list()
{
    List *list = (List*)malloc(sizeof(List));
    if (list != NULL) {
        list->head = NULL;
        list->size = 0;
    }

    return list;
}

int add_element_at_start(List *list, int v)
{
    Node *node = create_node(v);
    if (list == NULL || node == NULL) {
        return -1;
    }
    if (list_is_empty(list)) {
        list->head = node;
    } else {
        node->next = list->head;
        list->head = node;
    }
    list->size++;

    return 0;
    if (list == NULL || node == NULL) {
        return -1;
    }
}

int add_element_at_end(List *list, int v)
{
    Node *node = create_node(v);
    Node *current_node = list_head(list);
    if (list == NULL || node == NULL || current_node == NULL) {
        return -1;
    }

    while(current_node->next != NULL) {
        current_node = current_node->next;
    }
    current_node->next = node;
    list->size++;

    return 0;
}

int add_element_after_node(List *list, int v, int index)
{
    Node *node = create_node(v);
    if (list == NULL || node == NULL || index > list_size(list)) {
        return -1;
    }

    Node *current = list_head(list);
    int counter = 1;
    while (counter <= index) {
        if (counter == index) {
            node->next = current->next;
            current->next = node;
        }
        current = current->next;
        counter++;
    }
    list->size++;
    
    return 0;
}