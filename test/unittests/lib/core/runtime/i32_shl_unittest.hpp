#include <skypat/skypat.h>

#define _Bool bool
extern "C" {
#include <dataTypes/Value.h>
#include <core/Runtime.h>
}
#undef _Bool

SKYPAT_F(Runtime_i32_shl, regular)
{
    // Prepare
    Stack stack = new_Stack();
    Value *value1 = new_i32Value(22), *value2 = new_i32Value(3);
    push_Value(stack, value1);
    push_Value(stack, value2);

    // Run
    runtime_i32_shl(stack);

    // Check
    Value *check = NULL;
    pop_Value(stack,&check);
    EXPECT_EQ(check->value.i32, 176);

    // Clean
    free_Value(check);
    free_Stack(stack);
}
