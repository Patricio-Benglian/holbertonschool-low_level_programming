hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
#endif
unsigned long int key_index(const unsigned char *key, unsigned long int size);
#endif
