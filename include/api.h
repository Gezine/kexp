#ifndef API_H
#define API_H

#include "types.h"

#define API(id, ret, name, args) ret name args;
#include "syscalls-imports.h"
#undef API

#define API(ret, name, args) ret(*name) args;
#include "libc-imports.h"
#include "libkernel-imports.h"
#undef API

void init_libkernel_api();
void init_libc_api();

#endif