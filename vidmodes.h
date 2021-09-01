#ifndef VIDMODES_H
#define VIDMODES_H
#include <uefi.h>

efi_gop_t *get_gop(void);
int print_info(efi_gop_t*);

#endif
