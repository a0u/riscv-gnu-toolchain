#ifndef __ASM_RISCV_BITS_PER_LONG
#define __ASM_RISCV_BITS_PER_LONG

/*
 * There seems to be no way of detecting this automatically from user
 * space, so 64 bit architectures should override this in their
 * bitsperlong.h. In particular, an architecture that supports
 * both 32 and 64 bit user space must not rely on CONFIG_64BIT
 * to decide it, but rather check a compiler provided macro.
 */
#ifndef __BITS_PER_LONG
#if _RISCV_SIM == _ABI64
#define __BITS_PER_LONG 64
#elif _RISCV_SIM == _ABI32
#define __BITS_PER_LONG 32
#else
#error Unknown word length
#endif
#endif /* __BITS_PER_LONG */

#endif /* __ASM_RISCV_BITS_PER_LONG */
