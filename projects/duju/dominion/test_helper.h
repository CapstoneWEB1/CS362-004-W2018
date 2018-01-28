#ifndef _TEST_HELPER_H 
#define _TEST_HELPER_H 
#include <stdbool.h>
#include "dominion_helpers.h"

int cmp(const void* a, const void* b);
int* removeElementFromArray(int* originalArray,int size, int handPos);
int* addElementToArray(int* originalArray,int size, int added);
void printGameState(struct gameState* G, int player);
void asserttrue(bool statement);
bool isSameArray(int* array1, int* array2, int size);
void clearHandPile(struct gameState* G, int player);
void clearDeckPile(struct gameState* G, int player);
void clearDiscardPile(struct gameState* G, int player);

#endif



