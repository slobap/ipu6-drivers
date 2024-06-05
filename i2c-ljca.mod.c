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
	{ 0x1eadd647, "acpi_device_hid" },
	{ 0x6230921e, "is_acpi_device_node" },
	{ 0xe69fcd55, "devm_kmalloc" },
	{ 0x9bad3f4d, "platform_driver_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x49b066dc, "ljca_transfer" },
	{ 0x5b5bb31b, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb940ca68, "_dev_info" },
	{ 0xf9ea5e00, "i2c_del_adapter" },
	{ 0x5981fc21, "_dev_err" },
	{ 0xd30a1721, "acpi_dev_clear_dependencies" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x81e89255, "i2c_add_adapter" },
	{ 0xc286a0ca, "acpi_dev_hid_uid_match" },
	{ 0x633f674a, "__platform_driver_register" },
	{ 0x34cada65, "acpi_dev_for_each_child" },
	{ 0x4ff707f1, "set_primary_fwnode" },
	{ 0x2fa5cadd, "module_layout" },
};

MODULE_INFO(depends, "ljca");


MODULE_INFO(srcversion, "15BD9A2F4F62DEEB56AC5D5");
