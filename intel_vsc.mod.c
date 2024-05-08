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

KSYMTAB_FUNC(vsc_register_ace, "_gpl", "");
KSYMTAB_FUNC(vsc_unregister_ace, "_gpl", "");
KSYMTAB_FUNC(vsc_register_csi, "_gpl", "");
KSYMTAB_FUNC(vsc_unregister_csi, "_gpl", "");
KSYMTAB_FUNC(vsc_acquire_camera_sensor, "_gpl", "");
KSYMTAB_FUNC(vsc_release_camera_sensor, "_gpl", "");

SYMBOL_CRC(vsc_register_ace, 0xfaaaa50d, "_gpl");
SYMBOL_CRC(vsc_unregister_ace, 0x77b2fb7c, "_gpl");
SYMBOL_CRC(vsc_register_csi, 0x45138f90, "_gpl");
SYMBOL_CRC(vsc_unregister_csi, 0x11ec310c, "_gpl");
SYMBOL_CRC(vsc_acquire_camera_sensor, 0x5763033e, "_gpl");
SYMBOL_CRC(vsc_release_camera_sensor, 0x6b97696c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2fa5cadd, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "28FF0462A3125ECB6E73378");
