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
	{ 0x3de9a106, "gpiod_get_value_cansleep" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x6230921e, "is_acpi_device_node" },
	{ 0xe69fcd55, "devm_kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x47fac74c, "gpiod_set_value_cansleep" },
	{ 0x6b68ed18, "request_firmware" },
	{ 0x78e37e42, "mei_start" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x5b5bb31b, "__dynamic_dev_dbg" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x77ba73f1, "pm_runtime_enable" },
	{ 0xee8ae674, "mei_deregister" },
	{ 0xb940ca68, "_dev_info" },
	{ 0xc85d0b8e, "mei_cancel_work" },
	{ 0x126f018c, "mei_irq_read_handler" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7e58d334, "mei_stop" },
	{ 0x9ef3916a, "mei_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6cb70dc, "devm_acpi_dev_add_driver_gpios" },
	{ 0x5981fc21, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa9fccd16, "driver_unregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd30a1721, "acpi_dev_clear_dependencies" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4f89c102, "acpi_match_device_ids" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3d4110d6, "spi_sync_locked" },
	{ 0x2e1dcc6e, "__spi_register_driver" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xff10db9e, "devm_gpiod_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xadd75bd, "mei_irq_compl_handler" },
	{ 0x94c11eff, "mei_restart" },
	{ 0xebf61737, "acpi_dev_gpio_irq_wake_get_by" },
	{ 0x34cada65, "acpi_dev_for_each_child" },
	{ 0x4454730e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x8905f30b, "mei_device_init" },
	{ 0x4856bc6d, "__pm_runtime_disable" },
	{ 0xf3883e45, "mei_irq_write_handler" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb88db70c, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2fa5cadd, "module_layout" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("acpi*:INTC1058:*");
MODULE_ALIAS("acpi*:INTC1094:*");
MODULE_ALIAS("acpi*:INTC1009:*");
MODULE_ALIAS("acpi*:INTC10D0:*");

MODULE_INFO(srcversion, "7B38DA75D7B74BA865FAA64");
