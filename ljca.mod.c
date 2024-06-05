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

KSYMTAB_FUNC(ljca_transfer, "_gpl", "");
KSYMTAB_FUNC(ljca_transfer_noack, "_gpl", "");
KSYMTAB_FUNC(ljca_register_event_cb, "_gpl", "");
KSYMTAB_FUNC(ljca_unregister_event_cb, "_gpl", "");

SYMBOL_CRC(ljca_transfer, 0x49b066dc, "_gpl");
SYMBOL_CRC(ljca_transfer_noack, 0x8332f93c, "_gpl");
SYMBOL_CRC(ljca_register_event_cb, 0x3fc1f40e, "_gpl");
SYMBOL_CRC(ljca_unregister_event_cb, 0xb16aafb8, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x980532af, "usb_put_intf" },
	{ 0x2ec9681e, "usb_alloc_urb" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x48476967, "usb_autopm_put_interface" },
	{ 0x6230921e, "is_acpi_device_node" },
	{ 0x9fe19262, "usb_free_urb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf8d07858, "bitmap_from_arr32" },
	{ 0x4523577f, "usb_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5b5bb31b, "__dynamic_dev_dbg" },
	{ 0x19af8caa, "usb_get_intf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xc6aeb0a7, "usb_put_dev" },
	{ 0x3dad4972, "usb_bulk_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0xa37e37e4, "usb_get_dev" },
	{ 0x84cd9e22, "usb_submit_urb" },
	{ 0xb940ca68, "_dev_info" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5981fc21, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8086cf7b, "mfd_add_devices" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x74bc459a, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6cbabeb1, "_dev_warn" },
	{ 0xd30a1721, "acpi_dev_clear_dependencies" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4f89c102, "acpi_match_device_ids" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfe4fc7fc, "usb_autopm_get_interface" },
	{ 0x58a3832d, "usb_kill_urb" },
	{ 0xf1ba3b88, "mfd_remove_devices" },
	{ 0x34cada65, "acpi_dev_for_each_child" },
	{ 0x4454730e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb88db70c, "kmalloc_caches" },
	{ 0x2fa5cadd, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v8086p0B63d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9D4D0C5C753194D09DA7C3A");
