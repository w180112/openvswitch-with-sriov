cmd_/root/openvswitch-2.7.2/datapath/linux/udp_tunnel.o := gcc -Wp,-MD,/root/openvswitch-2.7.2/datapath/linux/.udp_tunnel.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-redhat-linux/4.8.5/include -I/root/openvswitch-2.7.2/include -I/root/openvswitch-2.7.2/datapath/linux/compat -I/root/openvswitch-2.7.2/datapath/linux/compat/include -I./arch/x86/include -Iarch/x86/include/generated  -Iinclude -I./arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -std=gnu89 -O2 -m64 -mno-mmx -mno-sse -mpreferred-stack-boundary=3 -mtune=generic -mno-red-zone -mcmodel=kernel -funit-at-a-time -maccumulate-outgoing-args -Wframe-larger-than=2048 -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -DCONFIG_AS_SHA1_NI=1 -DCONFIG_AS_SHA256_NI=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -Wframe-larger-than=2048 -fstack-protector-strong -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -g -pg -mfentry -DCC_USING_FENTRY -fno-inline-functions-called-once -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO -DVERSION=\"2.7.2\" -I/root/openvswitch-2.7.2/datapath/linux/.. -I/root/openvswitch-2.7.2/datapath/linux/.. -g -include /root/openvswitch-2.7.2/datapath/linux/kcompat.h  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(udp_tunnel)"  -D"KBUILD_MODNAME=KBUILD_STR(openvswitch)" -c -o /root/openvswitch-2.7.2/datapath/linux/.tmp_udp_tunnel.o /root/openvswitch-2.7.2/datapath/linux/udp_tunnel.c

source_/root/openvswitch-2.7.2/datapath/linux/udp_tunnel.o := /root/openvswitch-2.7.2/datapath/linux/udp_tunnel.c

deps_/root/openvswitch-2.7.2/datapath/linux/udp_tunnel.o := \
    $(wildcard include/config/ipv6.h) \
  /root/openvswitch-2.7.2/datapath/linux/kcompat.h \
  include/generated/uapi/linux/version.h \

/root/openvswitch-2.7.2/datapath/linux/udp_tunnel.o: $(deps_/root/openvswitch-2.7.2/datapath/linux/udp_tunnel.o)

$(deps_/root/openvswitch-2.7.2/datapath/linux/udp_tunnel.o):
