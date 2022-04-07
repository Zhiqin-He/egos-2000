/*
 * (C) 2022, Cornell University
 * All rights reserved.
 */

/* Author: Yunhao Zhang
 * Description: a program causing a memory exception;
 * Students are asked to modify the grass kernel so that this 
 * program crashes gracefully without crashing the grass kernel
 */

#include "app.h"
#include <stdlib.h>

int main() {
    char* too_large = malloc(4096 * 4);
}
