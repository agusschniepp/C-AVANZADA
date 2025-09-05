#include <stdlib.h>
#include <stdint.h>
#include "list.h"
#include "type.h"

list_t* listNew(type_t t) {
list_t* l = malloc(sizeof(list_t));
l->type = t; // l->type es equivalente a (*l).type
l->size = 0;
l->first = NULL;
return l;
}
void listAddFirst(list_t* l, void* data) {
node_t* n = malloc(sizeof(node_t));
switch(l->type) {
case TypeFAT32:
n->data = (void*) copy_fat32((fat32_t*) data);
break;
case TypeEXT4:
n->data = (void*) copy_ext4((ext4_t*) data);
break;
case TypeNTFS:
n->data = (void*) copy_ntfs((ntfs_t*) data);
break;
}
n->next = l->first;
l->first = n;
l->size++;
}
//se asume: i < l->size
void* listGet(list_t* l, uint8_t i){
node_t* n = l->first;
for(uint8_t j = 0; j < i; j++)
n = n->next;
return n->data;
}
//se asume: i < l->size
void* listRemove(list_t* l, uint8_t i){
node_t* tmp = NULL;
void* data = NULL;
if(i == 0){
data = l->first->data;
tmp = l->first;
l->first = l->first->next;
}else{
node_t* n = l->first;
for(uint8_t j = 0; j < i - 1; j++)
n = n->next;
data = n->next->data;
tmp = n->next;
n->next = n->next->next;
}
free(tmp);
l->size--;
return data;
}
void listDelete(list_t* l){
node_t* n = l->first;
while(n){
node_t* tmp = n;
n = n->next;
switch(l->type) {
case TypeFAT32:
rm_fat32((fat32_t*) tmp->data);
break;
case TypeEXT4:
rm_ext4((ext4_t*) tmp->data);
break;
case TypeNTFS:
rm_ntfs((ntfs_t*) tmp->data);
break;
}
free(tmp);
}
free(l);
}

void cambiarDeOrden(list_t* l, uint8_t i, uint8_t j){
    if (!l || l->size <= 1 || i == j || i > l->size || j > l->size) {
        return; // nada que hacer
    }

    if (i > j) { 
        // Para simplificar: siempre que i < j
        uint8_t tmp = i; 
        i = j; 
        j = tmp;
    }

    node_t *previo1 = NULL, *previo2 = NULL;
    node_t *nodo1 = l->first;
    node_t *nodo2 = l->first;

    // avanzar hasta i
    for (uint8_t x = 0; x < i - 1; x++) {
        previo1 = nodo1;
        nodo1 = nodo1->next;
    }

    // avanzar hasta j
    for (uint8_t x = 0; x < j - 1; x++) {
        previo2 = nodo2;
        nodo2 = nodo2->next;
    }

    // Si alguno es NULL, salimos (no debería pasar por chequeos previos)
    if (!nodo1 || !nodo2) return;

    // Caso especial: nodos adyacentes
    if (nodo1->next == nodo2) {
        if (previo1) previo1->next = nodo2;
        else l->first = nodo2;

        nodo1->next = nodo2->next;
        nodo2->next = nodo1;
    } else {
        // Intercambiar punteros en general
        node_t *tmp = nodo2->next;

        if (previo1) previo1->next = nodo2;
        else l->first = nodo2;

        if (previo2) previo2->next = nodo1;
        else l->first = nodo1;

        nodo2->next = nodo1->next;
        nodo1->next = tmp;
    }
}

