
#include "kernel.h"
void __stack_chk_fail(){} void kernel_entry()
{
        init_vga (15,0);char _vfs_kvariable_a_ = 'A';print_int(_vfs_kvariable_a_,15,0);print_new_line(15,0);}