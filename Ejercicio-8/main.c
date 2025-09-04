#include <stdio.h>
#include "type.h"
#include "list.h"
// Hola
int main() {
list_t* l = listNew(TypeFAT32);
fat32_t* f1 = new_fat32();
fat32_t* f2 = new_fat32();
listAddFirst(l, f1);
listAddFirst(l, f2);
listDelete(l);
rm_fat32(f1);
rm_fat32(f2);
return 0;
}