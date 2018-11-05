#ifndef STAGE
#define STAGE

typedef struct _stage {
    void*   input;
    void*   output;
    void    (*setInput)(struct _stage *stage, void* input);
    void*   (*getOutput)(struct _stage *stage);
    int     (*run)(struct _stage *stage);
} Stage;

#endif