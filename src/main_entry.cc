#include <subdir1/bar.h>
#include <subdir2/foo.h>

#include "main_entry.h"

int main_entry(int arg) {
    bar(0);
    foo(0);

    return arg;
}
