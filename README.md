# he-sample-kernel-module

Hardware Enablement Sample Kernel Module is the simplest kernel module taken from [tldp.org](https://tldp.org/LDP/lkmpg/2.6/html/x121.html).

### Building the Kernel Module

Make sure you have the following packages:

```shell
# Fedora
sudo dnf install make gcc kernel-devel
```

Build the kernel module for the current kernel:

```shell
make all
```

### Loading the Kernel Module

```shell
sudo insmod he-sample-kernel-module.ko
```
