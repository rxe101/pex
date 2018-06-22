/*
 * this file is part of cap checker
 * 2018 Tong Zhang<t.zhang2@partner.samsung.com>
 */
#ifndef _CAPCHK_INTERNAL_H_
#define _CAPCHK_INTERNAL_H_

/*
 * builtin list of skip variables
 */
static const char* _skip_var [] = 
{
    "jiffies",
    "nr_cpu_ids",
    "nr_irqs",
    "nr_threads",
    "vmemmap_base",
    "page_offset_base",
};

/*
 * builtin list of skip functions
 */
static const char* _skip_functions [] = 
{
    //may operate on wrong source?
    "add_taint",
    "__mutex_init",
    "mutex_lock",
    "mutex_unlock",
    "schedule",
    "_cond_resched",
    "printk",
    "__kmalloc",
    "_copy_to_user",
    "_do_fork",
    "__memcpy",
    "strncmp",
    "strlen",
    "strim",
    "strchr",
    "strcmp",
    "strcpy",
    "strncat",
    "strlcpy",
    "strscpy",
    "strsep",
    "strndup_user",
    "strnlen_user",
    "sscanf",
    "snprintf",
    "scnprintf",
    "sort",
    "prandom_u32",
    "memchr",
    "memcmp",
    "memset",
    "memmove",
    "skip_spaces",
    "kfree",
    "kmalloc",
    "kstrdup",
    "kstrtoull",
    "kstrtouint",
    "kstrtoint",
    "kstrtobool",
    "strncpy_from_user",
    "kstrtoul_from_user",
    "__msecs_to_jiffies",
    "drm_printk",
    "cpumask_next_and",
    "cpumask_next",
    "dump_stack",//break KASLR here?
    "___ratelimit",
    "simple_strtoull",
    "simple_strtoul",
    "dec_ucount",
    "inc_ucount",
    "jiffies_to_msecs",
    "__warn_printk",//break KASLR here?
    "arch_release_task_struct",
    "do_syscall_64",//syscall entry point
    "do_fast_syscall_32",
    "do_int80_syscall_32",
    "complete",
    "__wake_up",
    "mutex_trylock",
    "finish_wait",
    "__init_waitqueue_head",
    "complete",
    "mutex_lock_interruptible",
    "up_write",
    "up_read",
    "down_write_trylock",
    "down_write",
    "down_read",
    "find_vma",
    "vzalloc",
    "vmalloc",
    "vfree",
    "vmalloc_to_page",
    "__vmalloc",
    "kfree_call_rcu",
    "kvfree",
    "krealloc",
    "_copy_from_user",
    "__free_pages",
    "__put_page",
    "kvmalloc_node",
    "free_percpu",
    "__alloc_percpu",
    "get_user_pages",
    "__mm_populate",
    "dput",
    "d_path",
    "iput",
    "inode_dio_wait",
    "current_time",
    "is_bad_inode",
    "__fdget",
    "mntput",
    "mntget",
    "seq_puts",
    "seq_putc",
    "seq_printf",
    "blkdev_put",
    "blkdev_get",
    "bdget",
    "bdput",
    "bdgrab",
    "thaw_bdev",
    "__brelse",
    "nla_parse",
    "dev_warn",
    "dev_printk",
    "dev_notice",
    "dev_alert",
    "__put_task_struct",
    "__set_current_blocked",
    "copy_siginfo_to_user",
    "fpu__clear",
    "fpu__alloc_mathframe",
    "copy_fpstate_to_sigframe",
    "ia32_setup_frame",
    "ia32_setup_rt_frame",
    "mmput",
    "setup_sigcontext",
    "queue_work_on",
    "__request_module",
    "__module_put_and_exit",
    "__get_free_pages",
    "__put_page",
    "__wake_up",
    "__init_waitqueue_head",
    "_raw_write_unlock_bh",
    "_raw_write_lock_irqsave",
    "_raw_write_lock_irq",
    "_raw_write_lock_bh",
    "_raw_write_lock",
    "_raw_spin_unlock_irqrestore",
    "_raw_spin_unlock_bh",
    "_raw_spin_lock_irqsave",
    "_raw_spin_lock_irq",
    "_raw_spin_lock_bh",
    "_raw_spin_lock",
    "_raw_read_unlock_irqrestore",
    "_raw_read_lock_irqsave",
    "__put_task_struct"
};

/*
 * builtin list of interesting keywords
 */
static const char* interesting_keyword [] = 
{
    "SyS",
    "sys",
    "open",
    "release",
    "lseek",
    "read",
    "write",
    "sync",
    "ioctl",
};


#endif//_CAPCHK_INTERNAL_H_
