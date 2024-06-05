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
	{ 0xddf6ad7a, "completion_done" },
	{ 0x763998b1, "mei_cldev_disable" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x77b2fb7c, "vsc_unregister_ace" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb940ca68, "_dev_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfaaaa50d, "vsc_register_ace" },
	{ 0x5981fc21, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xec366b9, "mei_cldev_recv" },
	{ 0x8590903e, "mei_cldev_driver_unregister" },
	{ 0xfc14a79, "__mei_cldev_driver_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6cbabeb1, "_dev_warn" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8bba07fc, "mei_cldev_send" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x726bc3c7, "wait_for_completion_killable_timeout" },
	{ 0xdcd54990, "mei_cldev_enable" },
	{ 0x8a0032d6, "mei_cldev_get_drvdata" },
	{ 0x4454730e, "kmalloc_trace" },
	{ 0x5b2ef628, "mei_cldev_register_rx_cb" },
	{ 0x1b858c95, "mei_cldev_set_drvdata" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb88db70c, "kmalloc_caches" },
	{ 0x2fa5cadd, "module_layout" },
};

MODULE_INFO(depends, "mei,intel_vsc");

MODULE_ALIAS("mei:*:5db76cf6-0a68-4ed6-9b78-0361635e2447:*:*");

MODULE_INFO(srcversion, "AF43C0530E420AE4E8DB37F");
