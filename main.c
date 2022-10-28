#include "prime.h"
#include "hash_table.h"
#include <stdio.h>

int main() {
    ht_hash_table* ht = ht_new(next_prime(HT_INITIAL_BASE_SIZE));

    ht_insert(ht, "mmjwxbc", "github");

    char* value = ht_search(ht, "mmjwxbc");

    printf("%s\n", value);

    ht_del_hash_table(ht);

    return 0;
}