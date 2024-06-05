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
	{ 0x3213f038, "mutex_unlock" },
	{ 0xad25d1e8, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0xd28340e5, "__v4l2_ctrl_modify_range" },
	{ 0x2b0f169f, "pm_runtime_get_if_active" },
	{ 0x44915ea8, "__pm_runtime_idle" },
	{ 0x5b5bb31b, "__dynamic_dev_dbg" },
	{ 0x1f38c353, "i2c_del_driver" },
	{ 0xe69fcd55, "devm_kmalloc" },
	{ 0x94f46b6a, "v4l2_i2c_subdev_init" },
	{ 0xc47d425c, "i2c_transfer" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x738849f8, "v4l2_ctrl_handler_init_class" },
	{ 0x996bcf26, "v4l2_ctrl_new_int_menu" },
	{ 0xee1077d, "v4l2_ctrl_new_std" },
	{ 0x6a2a0db1, "v4l2_ctrl_new_std_menu_items" },
	{ 0xf6883d4c, "media_entity_pads_init" },
	{ 0x6f4b8cd9, "v4l2_async_register_subdev_sensor" },
	{ 0x2ad8717, "__pm_runtime_set_status" },
	{ 0x77ba73f1, "pm_runtime_enable" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7fa8a49e, "__v4l2_ctrl_handler_setup" },
	{ 0x1d3fac83, "__pm_runtime_resume" },
	{ 0xf5ef9cbc, "v4l2_subdev_link_validate" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x41230573, "i2c_register_driver" },
	{ 0x5763033e, "vsc_acquire_camera_sensor" },
	{ 0x5981fc21, "_dev_err" },
	{ 0xaa96a7f1, "__v4l2_ctrl_s_ctrl" },
	{ 0x6b97696c, "vsc_release_camera_sensor" },
	{ 0xf76129cb, "i2c_transfer_buffer_flags" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7380363d, "v4l2_async_unregister_subdev" },
	{ 0x5c16314a, "v4l2_ctrl_handler_free" },
	{ 0x4856bc6d, "__pm_runtime_disable" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2fa5cadd, "module_layout" },
};

MODULE_INFO(depends, "videodev,mc,v4l2-fwnode,intel_vsc,v4l2-async");

MODULE_ALIAS("acpi*:HIMX2170:*");

MODULE_INFO(srcversion, "7AB8B319D28CC57617D6A09");
