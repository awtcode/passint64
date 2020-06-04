#include <stdio.h>
#include <emscripten.h>

extern int64_t fnLongLong(int arg, int arg1);

EMSCRIPTEN_KEEPALIVE
int main(int argc, char *argv[]) {
    printf("main+\n");
    int64_t ret = 0;
    try {
      ret = fnLongLong(argc, 0);
    } catch (...) {
      printf("exception caught!!");
    }

    return ret;
}