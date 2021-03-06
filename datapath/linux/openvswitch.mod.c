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
	{ 0x954c2f42, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x5d2989b9, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_alloc) },
	{ 0xacfa5975, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xc4e9416b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x85bbe192, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0xe75d4b23, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x6d1440f8, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0x3c358778, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x18b3d404, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x8048be78, __VMLINUX_SYMBOL_STR(netlink_has_listeners) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xc0cf5b6, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_free) },
	{ 0x6f4c812f, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x80f548a2, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xfde78628, __VMLINUX_SYMBOL_STR(ip6_expire_frag_queue) },
	{ 0x49c387d5, __VMLINUX_SYMBOL_STR(dev_disable_lro) },
	{ 0xa9a4f805, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0xf543ffe8, __VMLINUX_SYMBOL_STR(nf_ct_nat_ext_add) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xfd99623a, __VMLINUX_SYMBOL_STR(ip_frag_ecn_table) },
	{ 0xe7bbbf12, __VMLINUX_SYMBOL_STR(ip_do_fragment) },
	{ 0x31e9790f, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xfe26fc7c, __VMLINUX_SYMBOL_STR(nr_node_ids) },
	{ 0x8022c78d, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xc435ce0a, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc9b1de17, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0xd81e3d3f, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x548ddad5, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x875e3f91, __VMLINUX_SYMBOL_STR(udp_tunnel_xmit_skb) },
	{ 0x5935e0e1, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x99b2100a, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_try_module_get) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xf100a91b, __VMLINUX_SYMBOL_STR(skb_zerocopy) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xe1d1af76, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x6bf692b5, __VMLINUX_SYMBOL_STR(udp_tun_rx_dst) },
	{ 0x219d32bc, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0xc6804e1b, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1c96dfd0, __VMLINUX_SYMBOL_STR(__skb_checksum) },
	{ 0xcc1d296d, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0xb5ad25db, __VMLINUX_SYMBOL_STR(nf_register_hook) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x578f1466, __VMLINUX_SYMBOL_STR(skb_tx_error) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0x10a5e45a, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0xf4efc94c, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0x3f6ff79d, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0xfb2c587e, __VMLINUX_SYMBOL_STR(kfree_skb_list) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x2f592a90, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd62df70e, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace16) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xcd9c22be, __VMLINUX_SYMBOL_STR(setup_udp_tunnel_sock) },
	{ 0x5d958cad, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_link) },
	{ 0x3f4e55be, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0x2475ff29, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0x9332231b, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xd3310272, __VMLINUX_SYMBOL_STR(skb_vlan_push) },
	{ 0xe0dbd0e4, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xb6421b35, __VMLINUX_SYMBOL_STR(__iptunnel_pull_header) },
	{ 0x193478ef, __VMLINUX_SYMBOL_STR(nf_nat_icmpv6_reply_translation) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xf4413f92, __VMLINUX_SYMBOL_STR(udp_tunnel_sock_release) },
	{ 0x12d3987f, __VMLINUX_SYMBOL_STR(kfree_skb_partial) },
	{ 0x2c52e91d, __VMLINUX_SYMBOL_STR(ip_defrag) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x367a5740, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x6d2fc5a6, __VMLINUX_SYMBOL_STR(net_namespace_list) },
	{ 0x9098b723, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x859d46cc, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x1432493, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x3b76cc76, __VMLINUX_SYMBOL_STR(nf_nat_icmp_reply_translation) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd58bf9d8, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x679e5df4, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x4d3f162d, __VMLINUX_SYMBOL_STR(dst_discard_sk) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0xd580d9a, __VMLINUX_SYMBOL_STR(__skb_warn_lro_forwarding) },
	{ 0x708b5f0c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xf47f884f, __VMLINUX_SYMBOL_STR(skb_ensure_writable) },
	{ 0xdc9c9463, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xb651653c, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0xb341f035, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x5a678cea, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x19ee3d71, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa6862bef, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd8ef337, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x94715d25, __VMLINUX_SYMBOL_STR(ip6_local_out_sk) },
	{ 0x8b75d2b5, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x2988aac3, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0xf50069a6, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xa07a37f0, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0xb0b1f0f2, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xb0dc2829, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xcd42fa54, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xa37e78b6, __VMLINUX_SYMBOL_STR(flex_array_get) },
	{ 0x4ea5d10, __VMLINUX_SYMBOL_STR(ksize) },
	{ 0xfd6293c2, __VMLINUX_SYMBOL_STR(boot_tvec_bases) },
	{ 0xc3bf75bc, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x837a7ba6, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0x3aa39d0d, __VMLINUX_SYMBOL_STR(skb_vlan_pop) },
	{ 0x3bdd349a, __VMLINUX_SYMBOL_STR(skb_try_coalesce) },
	{ 0xd11b7a3e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe9474bde, __VMLINUX_SYMBOL_STR(dst_cache_init) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0x329d73d4, __VMLINUX_SYMBOL_STR(__nla_reserve) },
	{ 0xa582e6e0, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0x65ff9843, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0x677c22d4, __VMLINUX_SYMBOL_STR(nf_ipv6_ops) },
	{ 0xaf3f0d3e, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xd4843ccc, __VMLINUX_SYMBOL_STR(sk_release_kernel) },
	{ 0x2ee086e1, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xbd9316ae, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xa94c0875, __VMLINUX_SYMBOL_STR(inet_frag_evictor) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xc311ec22, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xb0d91372, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x5adedd06, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x737005e3, __VMLINUX_SYMBOL_STR(nf_connlabels_get) },
	{ 0x82835401, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0xaa0073b7, __VMLINUX_SYMBOL_STR(__net_get_random_once) },
	{ 0x195c9f2c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3fc3f9db, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0xf485ed49, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0xf6122d1b, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xad480ea0, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xb4eb692c, __VMLINUX_SYMBOL_STR(nf_connlabels_replace) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0x105ba1f4, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x826789e8, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5eab1a2f, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf99d347e, __VMLINUX_SYMBOL_STR(node_states) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x8aeb6979, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xd94cc09, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xaf5517a9, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x4771f166, __VMLINUX_SYMBOL_STR(ip6_frag_init) },
	{ 0xd633fe2b, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x46c0e7c, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xf5a9f60b, __VMLINUX_SYMBOL_STR(rtnl_create_link) },
	{ 0xad88fbb5, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x10eccdc1, __VMLINUX_SYMBOL_STR(netlink_set_err) },
	{ 0x7a4b576, __VMLINUX_SYMBOL_STR(flex_array_free) },
	{ 0x7939a2f8, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0x75928e73, __VMLINUX_SYMBOL_STR(nf_unregister_hook) },
	{ 0xdec0caf5, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xa5a99b49, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x10999bf8, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x93956063, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xdbce6f67, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x7344a35a, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x6cd8c86b, __VMLINUX_SYMBOL_STR(__crc32c_le_combine) },
	{ 0x2569818f, __VMLINUX_SYMBOL_STR(nf_connlabels_put) },
	{ 0xd1e6dcee, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x13315729, __VMLINUX_SYMBOL_STR(flex_array_alloc) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xe75823fa, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x48f7cd54, __VMLINUX_SYMBOL_STR(nf_ct_get_tuple) },
	{ 0x98339b54, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0x9a95231f, __VMLINUX_SYMBOL_STR(udp_sock_create4) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x96120cdd, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x432b8f03, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x95baac39, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xd56b5f64, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x34c11ce1, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x36aa026d, __VMLINUX_SYMBOL_STR(genl_notify) },
	{ 0x2ac95217, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x5ab429de, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x8ef01d8b, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x79463c14, __VMLINUX_SYMBOL_STR(skb_morph) },
	{ 0x51ccdf0a, __VMLINUX_SYMBOL_STR(dev_fill_metadata_dst) },
	{ 0x638d80fb, __VMLINUX_SYMBOL_STR(nf_nat_alloc_null_binding) },
	{ 0x4a942ab8, __VMLINUX_SYMBOL_STR(inet_get_local_port_range) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x84c274f9, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x2de653a5, __VMLINUX_SYMBOL_STR(__nla_put) },
	{ 0xe18ef6e0, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0xc181f655, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x9fd7cda1, __VMLINUX_SYMBOL_STR(flex_array_prealloc) },
	{ 0xd3b86558, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
	{ 0xe4e264dd, __VMLINUX_SYMBOL_STR(ip6_frag_match) },
	{ 0x3b1fc2a8, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_nat,nf_defrag_ipv6,udp_tunnel,libcrc32c,nf_nat_ipv6,nf_nat_ipv4";


MODULE_INFO(srcversion, "84120243173174FE9F31C96");
MODULE_INFO(rhelversion, "7.3");
