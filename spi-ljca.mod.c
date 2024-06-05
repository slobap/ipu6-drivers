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
	{ 0x6230921e, "is_acpi_device_node" },
	{ 0xa41a32ad, "spi_controller_resume" },
	{ 0x9bad3f4d, "platform_driver_unregister" },
	{ 0x45d80846, "spi_controller_suspend" },
	{ 0x49b066dc, "ljca_transfer" },
	{ 0x7163fd02, "get_device" },
	{ 0x5b5bb31b, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x167de226, "put_device" },
	{ 0x5981fc21, "_dev_err" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x633f674a, "__platform_driver_register" },
	{ 0xb468126, "__spi_alloc_controller" },
	{ 0x73215dcd, "devm_spi_register_controller" },
	{ 0x4ff707f1, "set_primary_fwnode" },
	{ 0x2fa5cadd, "module_layout" },
};

MODULE_INFO(depends, "ljca");


MODULE_INFO(srcversion, "985BCCB71B8446AC2015654");
