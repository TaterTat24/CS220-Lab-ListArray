#ifndef LISTADT_H
#define LISTADT_H
#define MAX 250

// definition of the list ADT data structure
typedef struct ListADTArray_struct {
	int items[MAX]; // the array of integers held in the list
	int size;		// the current size of the list
} ListADTArray;

ListADTArray createList();

/**
* @brief adds the item to the end of the list
* @param list - address of the list struct (to allow modification)
* @param item - the item to append
* @return 0 on failure and 1 on success
* @pre the list is not full
* @post the item is added to end of list
*/
int append(ListADTArray *list, int item);

/**
* @brief adds the item to the begging of the list
* @param list - address of the list struct (to allow modification)
* @param item - the item to prepend
* @return 0 on failure and 1 on success
* @pre the list is not full
* @post the item is added to beginning of list
*/
int prepend(ListADTArray *list, int item);

/**
* @brief inserts the item into the list at the given position 
		 (positions in the list are numbered starting with position zero).
		 After this operation the inserted item is at the given position in the list 
		 and other items are shifted towards the end of the list.
* @param L - address of the list struct (to allow modification)
* @param W - the number element in the list to insert item at
* @param X - the item to prepend
* @return 0 on failure and 1 on success
* @pre the list is not full
* @post the item is added to the list at specified element
*/
int insertAfter(ListADTArray* L, int W, int X);

/**
* @brief removes the item at the given position
* @param L - address of the list struct (to allow modification)
* @param X - the item to remove
* @return int
* @pre the list is not empty
* @post the item is removed from the list
*/
int removeItem(ListADTArray* L, int X);

int linearSearch(ListADTArray L, int X);

int binarySearch(ListADTArray L, int X);

/**
* @brief checks if list is empty
* @param L - address of the list struct (to allow modification)
* @return 0 if the list is empty
* @pre N/A
* @post N/A
*/
int isEmpty(ListADTArray L);

int getLength(ListADTArray L);

/**
* @brief prints the items in the list from start to end
* @param L - address of the list struct (to allow modification)
* @return N/A
* @pre N/A
* @post N/A
*/
void print(ListADTArray L);

/**
* @brief prints the items in the list from end to start
* @param L - address of the list struct (to allow modification)
* @return N/A
* @pre N/A
* @post N/A
*/
void printReverse(ListADTArray L);

/**
* @brief sorts the items in the list into ascending order
* @param L - address of the list struct (to allow modification)
* @return N/A
* @pre the list is not empty
* @post the list is sorted
*/
void sort(ListADTArray* L);

#endif // listADT_H