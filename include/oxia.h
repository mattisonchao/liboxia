#ifndef OXIA_H
#define OXIA_H

typedef struct oxia {
} oxia_t;

typedef struct put_option {
} put_option_t;

typedef struct put_result {
} put_result_t;


typedef void (*put_cb_t)(put_result_t result);

void client_create();

void put_async(char* key, unsigned char* value, put_option_t* option, put_cb_t cb);

#endif
