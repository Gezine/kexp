#include "api.h"

#define API(ret, name, args) ret(*name) args = 0;
#include "libc-imports.h"
#include "libkernel-imports.h"
#undef API

static inline void *resolve_symbol(SceKernelModule handle, const char *name) {
  void *addrp;
  if (dlsym(handle, name, &addrp))
    __builtin_trap();
  return addrp;
}

void init_libkernel_api() {
#define API(ret, name, args)                                                   \
  name = (ret(*) args)resolve_symbol(LIBKERNEL_HANDLE, #name);

#include "libkernel-imports.h"

#undef API
}

void init_libc_api() {
#define API(ret, name, args)                                                   \
  name = (ret(*) args)resolve_symbol(LIBC_HANDLE, #name);

#include "libc-imports.h"

#undef API
}