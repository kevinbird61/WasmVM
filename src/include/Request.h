#ifndef WASMVM_REQUEST_DEF
#define WASMVM_REQUEST_DEF

#include <dataTypes/queue.h>

typedef struct Request_ {
    queue stages;
    void (*free)(struct Request_* request);
} Request;
#endif