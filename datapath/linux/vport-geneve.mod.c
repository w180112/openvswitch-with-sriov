#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x28950ef1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xce9a8c7e, __VMLINUX_SYMBOL_STR(rpl_dev_queue_xmit) },
	{ 0xf3ec7b2a, __VMLINUX_SYMBOL_STR(ovs_netdev_tunnel_destroy) },
	{ 0xc0a51104, __VMLINUX_SYMBOL_STR(ovs_vport_ops_unregister) },
	{ 0x9b0469d, __VMLINUX_SYMBOL_STR(__ovs_vport_ops_register) },
	{ 0xdf4a021, __VMLINUX_SYMBOL_STR(ovs_vport_free) },
	{ 0x6490430d, __VMLINUX_SYMBOL_STR(rpl_rtnl_delete_link) },
	{ 0x90fd9072, __VMLINUX_SYMBOL_STR(ovs_netdev_link) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x5e164ef3, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0x92d572be, __VMLINUX_SYMBOL_STR(geneve_dev_create_fb) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xd46dbeb5, __VMLINUX_SYMBOL_STR(ovs_vport_alloc) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xdc9c9463, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch,geneve";


MODULE_INFO(srcversion, "BB5A35E84A0C47768C27622");
MODULE_INFO(rhelversion, "7.3");
