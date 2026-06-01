API(0x3, ssize_t, read, (int fd, void *buf, size_t nbytes))
API(0x4, ssize_t, write, (int fd, const void *buf, size_t nbytes))
API(0x5, int, open, (const char *path, int flags, ...))
API(0x6, int, close, (int fd))
API(0x14, pid_t, getpid, (void))
API(0x49, int, munmap, (void *addr, size_t len))
API(0x4a, int, mprotect, (void *addr, size_t len, int prot))
API(0x5a, int, dup2, (int oldd, int newd))
API(0x61, int, socket, (int domain, int type, int protocol))
API(0x69, int, setsockopt,
    (int s, int level, int optname, const void *optval, socklen_t optlen))
API(0x1dd, void *, mmap,
    (void *addr, size_t len, int prot, int flags, int fd, off_t offset))
API(0x24f, int, dlsym,
    (SceKernelModule handle, const char *symbol, void **addrp))
API(0x2af, int, pipe2, (int fildes[2], int flags))
