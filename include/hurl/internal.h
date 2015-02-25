#ifndef INCLUDE_HURL_INTERNAL__H_
#define INCLUDE_HURL_INTERNAL__H_

char *hurl_allocstrcpy(char *str, size_t str_len, unsigned int alloc_padding);

void hurl_debug(const char *func, const char *msg, ...);

void hurl_print_status(HURLManager *manager, FILE *fp);

#endif /* INCLUDE_HURL_INTERNAL__H_ */
