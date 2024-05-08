#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers
 * using the jump search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: return the first index where value is located, otherwise -1.
*/
int jump_search(int array[], size_t size, int target) {
    size_t block_size = sqrt(size);
    size_t current_block = 0;
	size_t prev_block;

    while (current_block < size) {
        if (array[current_block] == target) {
            printf("Value found between indexes [%ld] and [%ld]\n", current_block, current_block + block_size);
            return current_block;
        } else if (array[current_block] < target) {
            printf("Value checked array[%ld] = [%d]\n", current_block, array[current_block]);
            current_block += block_size;
        } else {
            printf("Value checked array[%ld] = [%d]\n", current_block, array[current_block]);
            prev_block = current_block - block_size;
            while (prev_block < current_block) {
                if (array[prev_block] == target) {
                    printf("Value found between indexes [%ld] and [%ld]\n", prev_block, current_block);
                    return prev_block;
                } else if (array[prev_block] < target) {
                    printf("Value checked array[%ld] = [%d]\n", prev_block, array[prev_block]);
                    prev_block++;
                } else {
                    printf("Value checked array[%ld] = [%d]\n", prev_block, array[prev_block]);
                    break;
                }
            }
            return -1;
        }
    }
    return -1;
}
