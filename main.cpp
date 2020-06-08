#include <stdio.h>
#include <emscripten.h>

extern int64_t fnLongLong(int arg, int arg1);

int64_t (*longFnType)(int arg, int arg1);

EMSCRIPTEN_KEEPALIVE
int main(int argc, char *argv[]) {
    printf("main+\n");
    int64_t ret = 0;
    try {
      ret = fnLongLong(argc, 0);
      printf("invoke:%lld\n", ret);
    } catch (...) {
      printf("exception caught!!");
    }

    ret = fnLongLong(argc, 0);
    printf("call_direct:%lld\n", ret);

    longFnType = nullptr;
    if (argc == 0) {
      longFnType = &fnLongLong;
      ret = longFnType(argc, 0);
      printf("fnptr:%lld\n", ret);
    }
    return ret;
}