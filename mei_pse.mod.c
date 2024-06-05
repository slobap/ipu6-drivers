#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x67543840, "filp_open" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0x763998b1, "mei_cldev_disable" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xb940ca68, "_dev_info" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x5981fc21, "_dev_err" },
	{ 0x8b503c2a, "simple_open" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x740faf13, "debugfs_remove" },
	{ 0xec366b9, "mei_cldev_recv" },
	{ 0x8590903e, "mei_cldev_driver_unregister" },
	{ 0xfc14a79, "__mei_cldev_driver_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6cbabeb1, "_dev_warn" },
	{ 0xf9ca2eb4, "kstrtoint_from_user" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8bba07fc, "mei_cldev_send" },
	{ 0x7bd75316, "debugfs_create_file" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x726bc3c7, "wait_for_completion_killable_timeout" },
	{ 0xdcd54990, "mei_cldev_enable" },
	{ 0x3ef70737, "filp_close" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8a0032d6, "mei_cldev_get_drvdata" },
	{ 0x4454730e, "kmalloc_trace" },
	{ 0x5b2ef628, "mei_cldev_register_rx_cb" },
	{ 0x1b858c95, "mei_cldev_set_drvdata" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xc296738a, "debugfs_create_dir" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xb88db70c, "kmalloc_caches" },
	{ 0x2a968edb, "kernel_write" },
	{ 0x2fa5cadd, "module_layout" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("mei:vsc_pse:d035e00c-6dae-4b6d-b47a-f88e302a404e:*:*");

MODULE_INFO(srcversion, "36DFD2EA270480F48922166");
