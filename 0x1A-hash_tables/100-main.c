#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	shash_table_t *ht;

	ht = shash_table_create(1024);

	shash_table_set(ht, "Australia", "fun");
	shash_table_set(ht, "Bahrain", "fun");
	shash_table_set(ht, "Brazil", "fun");
	shash_table_set(ht, "Canada", "fun");
	shash_table_set(ht, "China", "fun");
	shash_table_set(ht, "France", "fun");
	shash_table_set(ht, "Germany", "fun");
	shash_table_set(ht, "Iceland", "fun");
	shash_table_set(ht, "Japan", "fun");
	shash_table_set(ht, "Russia", "fun");
	shash_table_set(ht, "Spain", "fun");
	shash_table_set(ht, "Sweden", "fun");
	shash_table_set(ht, "UK", "fun");
	shash_table_set(ht, "USA", "fun");
	shash_table_print(ht);


	shash_table_delete(ht);
	return (EXIT_SUCCESS);
}
