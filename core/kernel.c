
#include "kernel.h"
void __stack_chk_fail(){} void kernel_entry()
{
        init_vga (15,0);char _vfs_kvariable_a_ ;print_string ("Enter your name",15,0); _vfs_kvariable_a_ = read_char(15,0);print_char(_vfs_kvariable_a_,15,0);print_new_line(15,0);}