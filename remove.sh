ovs-vsctl del-br br0

killall ovs-vswitchd

killall ovsdb-server

rmmod openvswitch

#killall dhclient

rm -f ../test.txt
