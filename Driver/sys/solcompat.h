#ifndef __SYS_SOLCOMPAT_H__

#include <stdarg.h>
#define __va_list ...

// -D XXX: STUBS!
typedef void cpu_t;
typedef void cpupart_t;
typedef void cred_t;
typedef void kthread_t;
typedef void proc_t;
typedef void vmem_t;
typedef void dev_info_t;
typedef void taskq_t;
typedef void kmem_cache_t;
typedef int greg_t;
typedef int model_t;
typedef int processorid_t;
typedef unsigned int pc_t;

#endif
