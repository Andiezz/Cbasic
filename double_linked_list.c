#include "double_linked_list.h"
#include <stdlib.h>

dll_node_t dll_create_node(){
    dll_node_t n = malloc(sizeof(struct dll_node_s));
    n->next = n->prev = NULL;
    return n;
}

void dll_free_node(dll_node_t node){
    free(node);
}

dll_t dll_create_list(){
    dll_t list = malloc(sizeof(struct dll_s));
    list->front = list->back = NULL;
    return list;
}

void dll_free_list(dll_t list){
    while(!dll_is_empty(list)){
        dll_pop_front(list);
    }
    free(list);
}

void dll_push_back(dll_t list, dll_node_t node){
    if(list->back == NULL){
        list->back = node;
        list->front = node;
    }
    else{
        list->back->next == node;
        node->prev = list->back;
        list->back = node;
    }
}

void dll_push_front(dll_t list, dll_node_t node){
    if(list->front == NULL){
        list->back = node;
        list->front = node;
    }
    else{
        list->front->prev = node;
        node->next = list->front;
        list->front = node;
    }
}

void dll_pop_back(dll_t list){
    if(list->back == NULL){
        return;
    }
    else{
        dll_node_t temp = list->back;
        list->back = list->back->prev;
        dll_free_node(temp); //list->back->next
        list->back->next = NULL; 
    }
}

void dll_pop_front(dll_t list){
    if(list->front == NULL){
        return;
    }
    else{
        dll_node_t temp = list->front;
        list->front = list->front->next;
        dll_free_node(temp); //list->front->prev
        list->front->prev = NULL; 
    }
}

dll_node_t dll_front(dll_t list){
    return list->front;
}

dll_node_t dll_back(dll_t list){
    return list->back;
}

//insert node after pos in list
dll_node_t dll_inserta(dll_t list, dll_node_t pos, dll_node_t node){
    if(pos != NULL){
        dll_node_t temp = pos->next;
        pos->next = node;
        node->prev = pos;
        node->next = temp;
        if(temp != NULL){
            temp->prev = node;
        }
        else{
            list->back = node;
        }
    }
    /*else{
        dll_push_back(list, node);
    }
    */
    return node;
}

//insert node before pos in list
dll_node_t dll_insertb(dll_t list, dll_node_t pos, dll_node_t node){
    if(pos != NULL){
        dll_node_t temp = pos->prev;
        pos->prev = node;
        node->next = pos;
        node->prev = temp;
        if(temp != NULL){
            temp->next = node;
        }
        else{
            list->front = node; 
        }
    }
    /*else{
        dll_push_front(list, node);
    }
    */
    return node;
}

int dll_is_empty(dll_t list){
    if(list->front == NULL && list->back == NULL){
        return 1;
    }
    else return 0;
}

long dll_length(dll_t list){
    long len = 0;
    dll_node_t n = dll_front(list);
    while(n){
        len++;
        n = n->next;
    }
    return len;
}


