/** lab02.c
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Lab 2 - List ADT (w/array)
 * ===========================================================
 */

#include <stdio.h>
#include "listADTArray.h"

int main() {

    // create a new list
    ListADTArray myList = createList();

    // add items
    append(&myList, 56);
    append(&myList, 33);
    append(&myList, 99);
    print(myList);
 
    // prepend item
    prepend(&myList, 17);
    print(myList);

    return 0;
    
}