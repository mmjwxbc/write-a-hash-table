typedef struct {
    char *key;
    char *value;
} ht_item;

typedef struct {
    int size;
    int count;
    int base_size;
    ht_item** items;
} ht_hash_table;

void ht_insert(ht_hash_table* ht, const char* key, const char* value);
char* ht_search(ht_hash_table* ht, const char* key);
void ht_delete(ht_hash_table* h, const char* key);
void ht_del_hash_table(ht_hash_table* ht);
ht_hash_table* ht_new();

#define HT_PRIME_1 59
#define HT_PRIME_2 79

#define HT_INITIAL_BASE_SIZE 50

static void ht_resize(ht_hash_table *ht, const int to_size);
static void ht_resize_up(ht_hash_table *ht);
static void ht_resize_down(ht_hash_table *ht);