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
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xfabe40d2, "simple_attr_write" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x361bafda, "ipu_configure_spc" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x7b184de0, "ipu_bus_unregister_driver" },
	{ 0x506605a6, "simple_attr_open" },
	{ 0x432bea29, "dma_buf_vunmap_unlocked" },
	{ 0x5d5d2189, "ipu_recv_put_token" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe69fcd55, "devm_kmalloc" },
	{ 0x289be993, "dev_set_name" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xd82eb3df, "ipu_cpd_pkg_dir_get_size" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0xc76903d5, "ipu_fw_com_close" },
	{ 0x2b42c6f7, "ipu_cpd_pkg_dir_get_num_entries" },
	{ 0x97c00e98, "device_unregister" },
	{ 0xd98e0003, "pm_runtime_set_autosuspend_delay" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xcd02cff2, "ipu_mmu_hw_cleanup" },
	{ 0x87dd665, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x2b0f169f, "pm_runtime_get_if_active" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6a5193f, "pcpu_hot" },
	{ 0xa59df2d7, "__put_devmap_managed_page_refs" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe54a6a35, "dma_buf_unmap_attachment_unlocked" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa379a1bb, "ipu_buttress_auth_done" },
	{ 0x2ec8fc7d, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0xe2964344, "__wake_up" },
	{ 0x58745343, "ipu_send_get_token" },
	{ 0xfea01a62, "dma_buf_attach" },
	{ 0x19fd10a9, "ipu_trace_restore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x476adf79, "ipu_buttress_map_fw_image" },
	{ 0x25b7060e, "__tracepoint_mmap_lock_released" },
	{ 0x5b5bb31b, "__dynamic_dev_dbg" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbca77c8c, "wake_up_process" },
	{ 0xe70c122, "dma_buf_map_attachment_unlocked" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x64aaeec2, "ipu_cpd_pkg_dir_get_address" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x1000e51, "schedule" },
	{ 0x5bcd643b, "get_user_pages" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x40916695, "dma_buf_export" },
	{ 0xf0d514be, "ipu_buttress_unmap_fw_image" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb940ca68, "_dev_info" },
	{ 0xfed962d0, "find_vma" },
	{ 0x8313c8ce, "ipu_fw_com_prepare" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x42931658, "ipu_bus_register_driver" },
	{ 0xf4407d6b, "cdev_add" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x79dee111, "ipu_cpd_create_pkg_dir" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8a01779a, "bus_unregister" },
	{ 0x5981fc21, "_dev_err" },
	{ 0x40f75114, "debugfs_create_bool" },
	{ 0xcfff394e, "ipu_fw_com_open" },
	{ 0xa426366, "simple_attr_release" },
	{ 0xaed67d88, "ipu_ver" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x38323b84, "vm_map_ram" },
	{ 0x2bd1e17f, "dma_alloc_attrs" },
	{ 0x6045b6e8, "dma_buf_get" },
	{ 0x740faf13, "debugfs_remove" },
	{ 0x2651e13a, "ipu_buttress_add_psys_constraint" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xf2d613c5, "dma_buf_put" },
	{ 0x999b51a2, "dma_buf_fd" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x908dcd2e, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5634c950, "device_register" },
	{ 0x76fe6cd2, "sg_alloc_table_from_pages_segment" },
	{ 0x953723fe, "dma_sync_sg_for_device" },
	{ 0x6cbabeb1, "_dev_warn" },
	{ 0x22de698b, "follow_pfn" },
	{ 0x7842c730, "ipu_cpd_pkg_dir_get_type" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x721c5f61, "debugfs_create_u32" },
	{ 0x740946e0, "ipu_trace_init" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa996e10f, "ipu_fw_com_release" },
	{ 0xd6d60152, "simple_attr_read" },
	{ 0x668b19a1, "down_read" },
	{ 0x5d626f20, "kthread_create_on_node" },
	{ 0x70b04c5c, "ipu_cpd_free_pkg_dir" },
	{ 0xea3e0f49, "__mmap_lock_do_trace_start_locking" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf19708cf, "ipu_send_put_token" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7bd75316, "debugfs_create_file" },
	{ 0x1a194a4f, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x1d3fac83, "__pm_runtime_resume" },
	{ 0x39fc3829, "dma_map_sgtable" },
	{ 0xbfee4c03, "request_cpd_fw" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf4be7a05, "ipu_recv_get_token" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1959c9a1, "param_ops_bool" },
	{ 0x53f6a902, "__tracepoint_mmap_lock_start_locking" },
	{ 0x181f0a62, "__folio_put" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcab40e52, "__mmap_lock_do_trace_released" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe10e6751, "ipu_fw_com_ready" },
	{ 0x563708d1, "set_page_dirty_lock" },
	{ 0x8f4887d9, "dma_buf_vmap_unlocked" },
	{ 0x5a656862, "dma_buf_detach" },
	{ 0x7aee1479, "ipu_mmu_hw_init" },
	{ 0xed5f63e2, "dma_unmap_sg_attrs" },
	{ 0x4454730e, "kmalloc_trace" },
	{ 0x3f20276, "__pm_runtime_suspend" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb29a4441, "__pm_runtime_use_autosuspend" },
	{ 0x3fd2571, "vm_unmap_ram" },
	{ 0xd92505a1, "ipu_cpd_validate_cpd_file" },
	{ 0xb98077fa, "ipu_buttress_remove_psys_constraint" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc296738a, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8b3e871a, "generic_file_llseek" },
	{ 0x53b954a2, "up_read" },
	{ 0x44915ea8, "__pm_runtime_idle" },
	{ 0xa6f7a612, "cdev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfe08bb1, "ipu_fw_authenticate" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb88db70c, "kmalloc_caches" },
	{ 0x8f44466e, "cdev_del" },
	{ 0xc978a487, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2fa5cadd, "module_layout" },
};

MODULE_INFO(depends, "intel-ipu6");

MODULE_ALIAS("pci:v00008086d00009A19sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004E19sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000465Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000462Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A75Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007D19sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D8A4F9837A80B6931D81BDA");
