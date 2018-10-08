#include <foo.h>

#include "bar.h"

int bar(int arg) {
    foo(0);
    return arg;
}
