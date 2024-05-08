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

KSYMTAB_DATA(ipu_ver, "", "");
KSYMTAB_FUNC(ipu_fw_authenticate, "", "");
KSYMTAB_FUNC(request_cpd_fw, "", "");
KSYMTAB_FUNC(ipu_bus_register_driver, "", "");
KSYMTAB_FUNC(ipu_bus_unregister_driver, "", "");
KSYMTAB_FUNC(ipu_mmu_hw_init, "", "");
KSYMTAB_FUNC(ipu_mmu_hw_cleanup, "", "");
KSYMTAB_FUNC(ipu_buttress_auth_done, "", "");
KSYMTAB_FUNC(ipu_buttress_add_psys_constraint, "_gpl", "");
KSYMTAB_FUNC(ipu_buttress_remove_psys_constraint, "_gpl", "");
KSYMTAB_FUNC(ipu_buttress_map_fw_image, "_gpl", "");
KSYMTAB_FUNC(ipu_buttress_unmap_fw_image, "_gpl", "");
KSYMTAB_FUNC(ipu_buttress_start_tsc_sync, "", "");
KSYMTAB_FUNC(ipu_buttress_tsc_read, "_gpl", "");
KSYMTAB_FUNC(ipu_buttress_isys_freq_set, "_gpl", "");
KSYMTAB_FUNC(ipu_buttress_tsc_ticks_to_ns, "_gpl", "");
KSYMTAB_FUNC(ipu_trace_restore, "_gpl", "");
KSYMTAB_FUNC(ipu_trace_stop, "_gpl", "");
KSYMTAB_FUNC(ipu_trace_init, "_gpl", "");
KSYMTAB_FUNC(ipu_trace_uninit, "_gpl", "");
KSYMTAB_FUNC(ipu_trace_buffer_dma_handle, "_gpl", "");
KSYMTAB_FUNC(ipu_cpd_create_pkg_dir, "_gpl", "");
KSYMTAB_FUNC(ipu_cpd_free_pkg_dir, "_gpl", "");
KSYMTAB_FUNC(ipu_cpd_validate_cpd_file, "_gpl", "");
KSYMTAB_FUNC(ipu_cpd_pkg_dir_get_address, "_gpl", "");
KSYMTAB_FUNC(ipu_cpd_pkg_dir_get_num_entries, "_gpl", "");
KSYMTAB_FUNC(ipu_cpd_pkg_dir_get_size, "_gpl", "");
KSYMTAB_FUNC(ipu_cpd_pkg_dir_get_type, "_gpl", "");
KSYMTAB_FUNC(ipu_configure_spc, "", "");
KSYMTAB_FUNC(ipu_fw_com_prepare, "_gpl", "");
KSYMTAB_FUNC(ipu_fw_com_open, "_gpl", "");
KSYMTAB_FUNC(ipu_fw_com_close, "_gpl", "");
KSYMTAB_FUNC(ipu_fw_com_release, "_gpl", "");
KSYMTAB_FUNC(ipu_fw_com_ready, "_gpl", "");
KSYMTAB_FUNC(ipu_send_get_token, "_gpl", "");
KSYMTAB_FUNC(ipu_send_put_token, "_gpl", "");
KSYMTAB_FUNC(ipu_recv_get_token, "_gpl", "");
KSYMTAB_FUNC(ipu_recv_put_token, "_gpl", "");

SYMBOL_CRC(ipu_ver, 0xaed67d88, "");
SYMBOL_CRC(ipu_fw_authenticate, 0x0fe08bb1, "");
SYMBOL_CRC(request_cpd_fw, 0xbfee4c03, "");
SYMBOL_CRC(ipu_bus_register_driver, 0x42931658, "");
SYMBOL_CRC(ipu_bus_unregister_driver, 0x7b184de0, "");
SYMBOL_CRC(ipu_mmu_hw_init, 0x7aee1479, "");
SYMBOL_CRC(ipu_mmu_hw_cleanup, 0xcd02cff2, "");
SYMBOL_CRC(ipu_buttress_auth_done, 0xa379a1bb, "");
SYMBOL_CRC(ipu_buttress_add_psys_constraint, 0x2651e13a, "_gpl");
SYMBOL_CRC(ipu_buttress_remove_psys_constraint, 0xb98077fa, "_gpl");
SYMBOL_CRC(ipu_buttress_map_fw_image, 0x476adf79, "_gpl");
SYMBOL_CRC(ipu_buttress_unmap_fw_image, 0xf0d514be, "_gpl");
SYMBOL_CRC(ipu_buttress_start_tsc_sync, 0x3e0dd11b, "");
SYMBOL_CRC(ipu_buttress_tsc_read, 0xcd0c6ac2, "_gpl");
SYMBOL_CRC(ipu_buttress_isys_freq_set, 0x4c2020fe, "_gpl");
SYMBOL_CRC(ipu_buttress_tsc_ticks_to_ns, 0x64fb8712, "_gpl");
SYMBOL_CRC(ipu_trace_restore, 0x19fd10a9, "_gpl");
SYMBOL_CRC(ipu_trace_stop, 0xb2ceafa4, "_gpl");
SYMBOL_CRC(ipu_trace_init, 0x740946e0, "_gpl");
SYMBOL_CRC(ipu_trace_uninit, 0x6cc39fcf, "_gpl");
SYMBOL_CRC(ipu_trace_buffer_dma_handle, 0x0210ad3d, "_gpl");
SYMBOL_CRC(ipu_cpd_create_pkg_dir, 0x79dee111, "_gpl");
SYMBOL_CRC(ipu_cpd_free_pkg_dir, 0x70b04c5c, "_gpl");
SYMBOL_CRC(ipu_cpd_validate_cpd_file, 0xd92505a1, "_gpl");
SYMBOL_CRC(ipu_cpd_pkg_dir_get_address, 0x64aaeec2, "_gpl");
SYMBOL_CRC(ipu_cpd_pkg_dir_get_num_entries, 0x2b42c6f7, "_gpl");
SYMBOL_CRC(ipu_cpd_pkg_dir_get_size, 0xd82eb3df, "_gpl");
SYMBOL_CRC(ipu_cpd_pkg_dir_get_type, 0x7842c730, "_gpl");
SYMBOL_CRC(ipu_configure_spc, 0x361bafda, "");
SYMBOL_CRC(ipu_fw_com_prepare, 0x8313c8ce, "_gpl");
SYMBOL_CRC(ipu_fw_com_open, 0xcfff394e, "_gpl");
SYMBOL_CRC(ipu_fw_com_close, 0xc76903d5, "_gpl");
SYMBOL_CRC(ipu_fw_com_release, 0xa996e10f, "_gpl");
SYMBOL_CRC(ipu_fw_com_ready, 0xe10e6751, "_gpl");
SYMBOL_CRC(ipu_send_get_token, 0x58745343, "_gpl");
SYMBOL_CRC(ipu_send_put_token, 0xf19708cf, "_gpl");
SYMBOL_CRC(ipu_recv_get_token, 0xf4be7a05, "_gpl");
SYMBOL_CRC(ipu_recv_put_token, 0x5d5d2189, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8a35b432, "sme_me_mask" },
	{ 0xf330903d, "acpi_dev_get_first_match_dev" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xfabe40d2, "simple_attr_write" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x991bc6a9, "i2c_acpi_new_device_by_fwnode" },
	{ 0x506605a6, "simple_attr_open" },
	{ 0xc3b82ff8, "software_node_fwnode" },
	{ 0x438d8df2, "iova_cache_get" },
	{ 0x746e58f1, "devm_request_threaded_irq" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xe69fcd55, "devm_kmalloc" },
	{ 0x3de4e10d, "pci_disable_ats" },
	{ 0xe39474d2, "set_secondary_fwnode" },
	{ 0x289be993, "dev_set_name" },
	{ 0x8db648c7, "vmalloc_to_page" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0x97c00e98, "device_unregister" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x19cdebd9, "pci_ats_supported" },
	{ 0x6520ba0c, "dma_unmap_page_attrs" },
	{ 0x6b68ed18, "request_firmware" },
	{ 0x96848186, "scnprintf" },
	{ 0xcee81a5f, "__pci_register_driver" },
	{ 0xc7061ef3, "iova_cache_put" },
	{ 0x656769c3, "dma_sync_single_for_device" },
	{ 0x1ad70543, "device_initialize" },
	{ 0xd5758b87, "fwnode_graph_get_next_endpoint" },
	{ 0xfc3aa0d7, "pci_disable_msi" },
	{ 0x69acdf38, "memcpy" },
	{ 0x94961283, "vunmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2f53f4c9, "pci_set_power_state" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x7163fd02, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5b5bb31b, "__dynamic_dev_dbg" },
	{ 0xb55ef4e9, "pci_unregister_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdf1be5e1, "__free_iova" },
	{ 0xbefcb75b, "dev_driver_string" },
	{ 0x1406832d, "pm_generic_runtime_resume" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2ad8717, "__pm_runtime_set_status" },
	{ 0xd2f54de4, "dma_map_page_attrs" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x167de226, "put_device" },
	{ 0x27a9a850, "acpi_dev_ready_for_enumeration" },
	{ 0x77ba73f1, "pm_runtime_enable" },
	{ 0xd27eeb4b, "alloc_iova" },
	{ 0xa916b694, "strnlen" },
	{ 0x613cd53c, "__free_pages" },
	{ 0x4e10d747, "bus_for_each_dev" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x692e9cf8, "fwnode_property_read_u32_array" },
	{ 0xb940ca68, "_dev_info" },
	{ 0x47cfd825, "kstrtouint_from_user" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x36dc34e9, "split_page" },
	{ 0xc79fb385, "pm_generic_runtime_suspend" },
	{ 0xa9df55d9, "device_create_file" },
	{ 0xfb22c982, "pcim_iomap_regions" },
	{ 0x3efee0f9, "vm_insert_page" },
	{ 0xcbe3ee2, "software_node_unregister" },
	{ 0x7d488bff, "pci_enable_msi" },
	{ 0x311c6da4, "put_iova_domain" },
	{ 0x8a01779a, "bus_unregister" },
	{ 0x5981fc21, "_dev_err" },
	{ 0xfddf1064, "i2c_unregister_device" },
	{ 0xb0cfa647, "device_add" },
	{ 0xa426366, "simple_attr_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2bd1e17f, "dma_alloc_attrs" },
	{ 0x8fc12788, "software_node_unregister_node_group" },
	{ 0x740faf13, "debugfs_remove" },
	{ 0x496ef3fe, "pci_read_config_word" },
	{ 0x5a921311, "strncmp" },
	{ 0xa9fccd16, "driver_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xef2d6b4b, "vmap" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb48f0638, "software_node_register" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1d1abdf0, "acpi_get_physical_device_location" },
	{ 0x76fe6cd2, "sg_alloc_table_from_pages_segment" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x82147b00, "dma_sync_single_for_cpu" },
	{ 0x953723fe, "dma_sync_sg_for_device" },
	{ 0xfb578fc5, "memset" },
	{ 0x6cbabeb1, "_dev_warn" },
	{ 0x18bb35f9, "pci_set_master" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc805f93, "clflush_cache_range" },
	{ 0xd6d60152, "simple_attr_read" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xaf858197, "dma_set_coherent_mask" },
	{ 0xf70ff23b, "pv_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb237537a, "pm_runtime_forbid" },
	{ 0x7bd75316, "debugfs_create_file" },
	{ 0x1a194a4f, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0x28899e62, "pm_runtime_allow" },
	{ 0x1d3fac83, "__pm_runtime_resume" },
	{ 0x39fc3829, "dma_map_sgtable" },
	{ 0x4043757f, "init_iova_domain" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1959c9a1, "param_ops_bool" },
	{ 0xea6f0800, "pci_release_regions" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x17058407, "alloc_pages" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0x50383052, "acpi_dev_get_next_match_dev" },
	{ 0x50e6d0f5, "pci_disable_device" },
	{ 0xd1d6e0b7, "boot_cpu_data" },
	{ 0x46838b37, "dma_set_mask" },
	{ 0xacc2f864, "dev_err_probe" },
	{ 0xed5f63e2, "dma_unmap_sg_attrs" },
	{ 0xb9704aff, "pcim_iomap_table" },
	{ 0x4454730e, "kmalloc_trace" },
	{ 0x10182b84, "fwnode_handle_put" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x5a58cbec, "pcim_enable_device" },
	{ 0x4856bc6d, "__pm_runtime_disable" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xc296738a, "debugfs_create_dir" },
	{ 0x52140890, "pci_write_config_word" },
	{ 0x8b3e871a, "generic_file_llseek" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x55e4ce1, "driver_register" },
	{ 0x7a9e4c23, "software_node_register_node_group" },
	{ 0x79f1aa44, "find_iova" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x44915ea8, "__pm_runtime_idle" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xadbdfe98, "__dev_fwnode" },
	{ 0xb88db70c, "kmalloc_caches" },
	{ 0xefc0278d, "device_remove_file" },
	{ 0xc978a487, "bus_register" },
	{ 0xa8b39343, "dma_map_sg_attrs" },
	{ 0x2fa5cadd, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00009A19sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004E19sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000465Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000462Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A75Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007D19sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CA6D330634B869FE2266603");
