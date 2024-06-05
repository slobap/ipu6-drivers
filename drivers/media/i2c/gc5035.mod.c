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
	{ 0x44915ea8, "__pm_runtime_idle" },
	{ 0x1f38c353, "i2c_del_driver" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x7380363d, "v4l2_async_unregister_subdev" },
	{ 0x5c16314a, "v4l2_ctrl_handler_free" },
	{ 0x4856bc6d, "__pm_runtime_disable" },
	{ 0x2ad8717, "__pm_runtime_set_status" },
	{ 0x6230921e, "is_acpi_device_node" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x3ad7a5d5, "acpi_evaluate_reference" },
	{ 0xd3fb5c4c, "acpi_fetch_acpi_dev" },
	{ 0x1eadd647, "acpi_device_hid" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x37a0cba, "kfree" },
	{ 0xff10db9e, "devm_gpiod_get" },
	{ 0x39b12223, "__acpi_handle_debug" },
	{ 0xd8df08ac, "acpi_handle_printk" },
	{ 0x6cbabeb1, "_dev_warn" },
	{ 0x5b5bb31b, "__dynamic_dev_dbg" },
	{ 0x7fa8a49e, "__v4l2_ctrl_handler_setup" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe69fcd55, "devm_kmalloc" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe9ef5bb7, "devm_regulator_get" },
	{ 0xfad7d891, "devm_regulator_bulk_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x94f46b6a, "v4l2_i2c_subdev_init" },
	{ 0x738849f8, "v4l2_ctrl_handler_init_class" },
	{ 0xacc2f864, "dev_err_probe" },
	{ 0x996bcf26, "v4l2_ctrl_new_int_menu" },
	{ 0xee1077d, "v4l2_ctrl_new_std" },
	{ 0x6a2a0db1, "v4l2_ctrl_new_std_menu_items" },
	{ 0xf6883d4c, "media_entity_pads_init" },
	{ 0x6f4b8cd9, "v4l2_async_register_subdev_sensor" },
	{ 0x77ba73f1, "pm_runtime_enable" },
	{ 0x1d3fac83, "__pm_runtime_resume" },
	{ 0xf5ef9cbc, "v4l2_subdev_link_validate" },
	{ 0x98eb1221, "pm_runtime_force_suspend" },
	{ 0xc42e33bb, "pm_runtime_force_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x41230573, "i2c_register_driver" },
	{ 0x47fac74c, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x615829dd, "i2c_smbus_write_byte_data" },
	{ 0x5b5f3841, "i2c_smbus_read_byte_data" },
	{ 0x5981fc21, "_dev_err" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd28340e5, "__v4l2_ctrl_modify_range" },
	{ 0x2b0f169f, "pm_runtime_get_if_active" },
	{ 0x2fa5cadd, "module_layout" },
};

MODULE_INFO(depends, "v4l2-async,videodev,mc,v4l2-fwnode");

MODULE_ALIAS("of:N*T*Cgalaxycore,gc5035");
MODULE_ALIAS("of:N*T*Cgalaxycore,gc5035C*");
MODULE_ALIAS("acpi*:GCTI5035:*");

MODULE_INFO(srcversion, "C2BDF3BFAF65998113FBBF1");
