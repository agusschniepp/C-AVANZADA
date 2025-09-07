#include <stdio.h>
#include "type.h"
#include <stdint.h>
#include <stdlib.h>
fat32_t* new_fat32(){
    fat32_t* f32 = malloc(sizeof(fat32_t));
    return f32;
}
ext4_t* new_ext4(){
    ext4_t* x4 = malloc(sizeof(ext4_t));
    return x4;
}
ntfs_t* new_ntfs(){
    ntfs_t* ns = malloc(sizeof(ntfs_t));
    return ns;
}


fat32_t* copy_fat32(fat32_t* file){
    fat32_t* copy = malloc(sizeof(fat32_t));
    *copy = *file;
    return copy;
}
ext4_t* copy_ext4(ext4_t* file){
    ext4_t* copy = malloc(sizeof(ext4_t));
    *copy = *file;
    return copy;
}
ntfs_t* copy_ntfs(ntfs_t* file){
    ntfs_t* copy = malloc(sizeof(ntfs_t));
    *copy = *file;
    return copy;
}
void rm_fat32(fat32_t* file){
    free(file);
}
void rm_ext4(ext4_t* file){
    free(file);
}
void rm_ntfs(ntfs_t* file){
    free(file);
}