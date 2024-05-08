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
	{ 0xe69fcd55, "devm_kmalloc" },
	{ 0x9bad3f4d, "platform_driver_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3fc1f40e, "ljca_register_event_cb" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xbc7c2671, "devm_gpiochip_add_data_with_key" },
	{ 0x49b066dc, "ljca_transfer" },
	{ 0x5b5bb31b, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x959dae7a, "handle_simple_irq" },
	{ 0x937c6b4f, "gpiochip_get_data" },
	{ 0x5981fc21, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5e1ba577, "gpiochip_lock_as_irq" },
	{ 0x32b2be5f, "__irq_resolve_mapping" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x633f674a, "__platform_driver_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5d4d4c7a, "gpiochip_unlock_as_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2fa5cadd, "module_layout" },
};

MODULE_INFO(depends, "ljca");


MODULE_INFO(srcversion, "0EC0DCB44005CDB07E49B6C");
