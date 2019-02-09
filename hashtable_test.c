/* CMSC 16200 - lab 3
 * File: hashtable_test.c 
 * Test of hash table
 */

#include "lib/hashtable.h"
#include <stdlib.h>
#include <stdio.h>


int main(void) {

  hashtable* ht = allocate(20);

  keyType key = "Key1";
  valType value = 1;

  put(ht, key, value);

  valType result = get(ht, key);
  printf("The value of %s is %d\n", key, result);

  erase(ht, key);
  result = get(ht, key);
  printf("The value of %s is %d\n", key, result);


  deallocate(ht);
  printf("All tests have been successfully passed.\n");
  return 0;
}

