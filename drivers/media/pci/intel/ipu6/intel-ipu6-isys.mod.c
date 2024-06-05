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
	{ 0x6cc39fcf, "ipu_trace_uninit" },
	{ 0x7ba113fa, "vb2_queue_init" },
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
	{ 0xfabe40d2, "simple_attr_write" },
	{ 0x361bafda, "ipu_configure_spc" },
	{ 0x4187dbb, "video_ioctl2" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x7b184de0, "ipu_bus_unregister_driver" },
	{ 0x2eee448d, "media_device_unregister" },
	{ 0x506605a6, "simple_attr_open" },
	{ 0x5d5d2189, "ipu_recv_put_token" },
	{ 0x711794bd, "vb2_queue_release" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xe69fcd55, "devm_kmalloc" },
	{ 0x840ea8ac, "v4l2_get_link_freq" },
	{ 0xab81e44c, "vb2_ioctl_streamoff" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe77d3052, "vb2_ioctl_expbuf" },
	{ 0xb2a3ab41, "media_device_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x1d0c128c, "v4l2_async_nf_register" },
	{ 0xc76903d5, "ipu_fw_com_close" },
	{ 0x530b041b, "v4l2_g_ctrl" },
	{ 0xb2ceafa4, "ipu_trace_stop" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcd02cff2, "ipu_mmu_hw_cleanup" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x738849f8, "v4l2_ctrl_handler_init_class" },
	{ 0x24795b14, "media_entity_enum_init" },
	{ 0xf7dd0b, "param_array_ops" },
	{ 0x69acdf38, "memcpy" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
	{ 0x37a0cba, "kfree" },
	{ 0xf8f45735, "vb2_dma_contig_memops" },
	{ 0x65a74ea2, "__media_device_register" },
	{ 0xb0e17020, "vb2_ioctl_querybuf" },
	{ 0x1aeb1848, "v4l2_async_nf_parse_fwnode_endpoints" },
	{ 0x83e98994, "v4l2_subdev_init" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x94fbddd3, "v4l2_fh_open" },
	{ 0x58745343, "ipu_send_get_token" },
	{ 0x7e2c599d, "v4l2_event_subdev_unsubscribe" },
	{ 0x19fd10a9, "ipu_trace_restore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x476adf79, "ipu_buttress_map_fw_image" },
	{ 0x5b5bb31b, "__dynamic_dev_dbg" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b29c0f7, "media_create_pad_link" },
	{ 0x9e2c35e5, "v4l2_device_register_subdev" },
	{ 0xdbe954eb, "v4l2_subdev_link_validate_default" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe5ceecd6, "media_entity_enum_cleanup" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x65d77dae, "video_devdata" },
	{ 0x6771fe4e, "vb2_fop_release" },
	{ 0xcd0c6ac2, "ipu_buttress_tsc_read" },
	{ 0xf0d514be, "ipu_buttress_unmap_fw_image" },
	{ 0x64fb8712, "ipu_buttress_tsc_ticks_to_ns" },
	{ 0xa916b694, "strnlen" },
	{ 0x7301aeea, "v4l2_ctrl_find" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x3e0dd11b, "ipu_buttress_start_tsc_sync" },
	{ 0xb940ca68, "_dev_info" },
	{ 0x8313c8ce, "ipu_fw_com_prepare" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xcfd9124b, "v4l2_async_nf_init" },
	{ 0x9d76550a, "vb2_plane_cookie" },
	{ 0x259b250, "media_device_cleanup" },
	{ 0x42931658, "ipu_bus_register_driver" },
	{ 0x1e13f1ac, "v4l2_device_unregister_subdev" },
	{ 0x79dee111, "ipu_cpd_create_pkg_dir" },
	{ 0xf5ef9cbc, "v4l2_subdev_link_validate" },
	{ 0xaf8bf347, "vb2_ioctl_dqbuf" },
	{ 0x5981fc21, "_dev_err" },
	{ 0x40f75114, "debugfs_create_bool" },
	{ 0x199f46f5, "vb2_ioctl_create_bufs" },
	{ 0xcfff394e, "ipu_fw_com_open" },
	{ 0x79dc793f, "v4l2_ctrl_new_custom" },
	{ 0xa426366, "simple_attr_release" },
	{ 0xaed67d88, "ipu_ver" },
	{ 0x5553c533, "media_graph_walk_cleanup" },
	{ 0x167d1152, "vb2_ioctl_prepare_buf" },
	{ 0x584b9a3f, "v4l2_fh_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x37169f79, "cpu_latency_qos_update_request" },
	{ 0x2bd1e17f, "dma_alloc_attrs" },
	{ 0x740faf13, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x2c03c522, "media_pad_remote_pad_first" },
	{ 0xcb30b1b8, "vb2_buffer_done" },
	{ 0xc8725bc6, "v4l2_ctrl_subscribe_event" },
	{ 0xf6883d4c, "media_entity_pads_init" },
	{ 0xf07f2f11, "media_graph_walk_next" },
	{ 0x748d1558, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1d268f79, "v4l2_event_subscribe" },
	{ 0x7ad87f7c, "vb2_ioctl_qbuf" },
	{ 0x2d08811b, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x36931963, "media_pipeline_start" },
	{ 0xebf7d6bc, "v4l2_pipeline_pm_put" },
	{ 0x82147b00, "dma_sync_single_for_cpu" },
	{ 0x1e9125ed, "media_pipeline_stop" },
	{ 0xc4f556b1, "media_entity_pipeline" },
	{ 0x6cbabeb1, "_dev_warn" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x721c5f61, "debugfs_create_u32" },
	{ 0x740946e0, "ipu_trace_init" },
	{ 0xf2117c1b, "v4l2_ctrl_g_ctrl_int64" },
	{ 0xc805f93, "clflush_cache_range" },
	{ 0xa996e10f, "ipu_fw_com_release" },
	{ 0xb8de2960, "v4l2_device_register" },
	{ 0xd6d60152, "simple_attr_read" },
	{ 0x70b04c5c, "ipu_cpd_free_pkg_dir" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4c2020fe, "ipu_buttress_isys_freq_set" },
	{ 0xdea2b58a, "v4l2_pipeline_link_notify" },
	{ 0xf19708cf, "ipu_send_put_token" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x1cc77be6, "v4l2_async_nf_cleanup" },
	{ 0x7bd75316, "debugfs_create_file" },
	{ 0x1a194a4f, "dma_free_attrs" },
	{ 0x1d3fac83, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf4be7a05, "ipu_recv_get_token" },
	{ 0x1959c9a1, "param_ops_bool" },
	{ 0x618f18f0, "__video_register_device" },
	{ 0xd94694ca, "v4l2_async_nf_unregister" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf5184ef6, "vb2_ioctl_streamon" },
	{ 0xa2533b31, "__v4l2_device_register_subdev_nodes" },
	{ 0x422007a3, "vb2_fop_poll" },
	{ 0xe10e6751, "ipu_fw_com_ready" },
	{ 0xae285ee9, "v4l2_pipeline_pm_get" },
	{ 0x6cc3426e, "v4l2_ctrl_g_ctrl" },
	{ 0x5c16314a, "v4l2_ctrl_handler_free" },
	{ 0xdffb1ade, "v4l2_device_unregister" },
	{ 0x7aee1479, "ipu_mmu_hw_init" },
	{ 0xda081940, "media_graph_walk_start" },
	{ 0x69aabde0, "media_graph_walk_init" },
	{ 0x25cc75bb, "v4l2_subdev_call_wrappers" },
	{ 0x4454730e, "kmalloc_trace" },
	{ 0x3f20276, "__pm_runtime_suspend" },
	{ 0x5a8a5821, "v4l2_event_queue" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x3a0a8b87, "param_ops_int" },
	{ 0xc296738a, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8b3e871a, "generic_file_llseek" },
	{ 0x169f16f5, "video_device_release_empty" },
	{ 0x44915ea8, "__pm_runtime_idle" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb88db70c, "kmalloc_caches" },
	{ 0x7ed3341d, "vb2_ioctl_reqbufs" },
	{ 0x2fa5cadd, "module_layout" },
};

MODULE_INFO(depends, "intel-ipu6,videobuf2-v4l2,videodev,mc,v4l2-async,videobuf2-dma-contig,v4l2-fwnode,videobuf2-common");

MODULE_ALIAS("pci:v00008086d00009A19sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004E19sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000465Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000462Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A75Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007D19sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "90DC10D3D8806BDB6D3F835");
