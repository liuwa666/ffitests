#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>


typedef struct HashMap_String__u32 HashMap_String__u32;

typedef struct Tuple {
  uint32_t x;
  uint32_t y;
} Tuple;

typedef struct ZipCodeDatabase {
  struct HashMap_String__u32 population;
} ZipCodeDatabase;

uint32_t addition(uint32_t a, uint32_t b);

struct Tuple flip_things_around(struct Tuple tup);

uint32_t how_many_characters(const char *s);

uint32_t sum_of_even(const uint32_t *n, size_t len);

void theme_song_free(char *s);

char *theme_song_generate(uint8_t length);

void zip_code_database_free(struct ZipCodeDatabase *ptr);

struct ZipCodeDatabase *zip_code_database_new(void);

void zip_code_database_populate(struct ZipCodeDatabase *ptr);

uint32_t zip_code_database_population_of(const struct ZipCodeDatabase *ptr, const char *zip);
