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
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb940ca68, "_dev_info" },
	{ 0x5981fc21, "_dev_err" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xec366b9, "mei_cldev_recv" },
	{ 0x8590903e, "mei_cldev_driver_unregister" },
	{ 0xfc14a79, "__mei_cldev_driver_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x11ec310c, "vsc_unregister_csi" },
	{ 0x8bba07fc, "mei_cldev_send" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x726bc3c7, "wait_for_completion_killable_timeout" },
	{ 0xdcd54990, "mei_cldev_enable" },
	{ 0x8a0032d6, "mei_cldev_get_drvdata" },
	{ 0x4454730e, "kmalloc_trace" },
	{ 0x5b2ef628, "mei_cldev_register_rx_cb" },
	{ 0x1b858c95, "mei_cldev_set_drvdata" },
	{ 0x45138f90, "vsc_register_csi" },
	{ 0xb88db70c, "kmalloc_caches" },
	{ 0x2fa5cadd, "module_layout" },
};

MODULE_INFO(depends, "mei,intel_vsc");

MODULE_ALIAS("mei:*:92335fcf-3203-4472-af93-7b4453ac29da:*:*");

MODULE_INFO(srcversion, "2071224CC4C510957195EA4");
