modprobe openvswitch

ovsdb-tool convert /usr/local/etc/openvswitch/conf.db vswitchd/vswitch.ovsschema

ovsdb-server --remote=punix:/usr/local/var/run/openvswitch/db.sock --remote=db:Open_vSwitch,Open_vSwitch,manager_options --private-key=db:Open_vSwitch,SSL,private_key --certificate=db:Open_vSwitch,SSL,certificate --bootstrap-ca-cert=db:Open_vSwitch,SSL,ca_cert --pidfile --detach

ovs-vsctl --no-wait init

ovs-vswitchd --pidfile --detach

ovs-vsctl add-br br0

ovs-vsctl add-port br0 ens8

ifconfig br0 up

ifconfig br0 172.16.10.201/24

#dhclient br0

ovs-vsctl set-controller br0 tcp:172.16.10.102:6653
