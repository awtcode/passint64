 #include <stdio.h>
#include "emscripten.h"
struct GVStruct {
    const wchar_t *regkey;     // Registry key that categorizes preference items
    const wchar_t *regvalname; // Registry value name for preference item
    void (*getDefault)(GVStruct *pGV);   // Routine to set default value
    void (*getData)(GVStruct *pGV); // Routine to get object data
};