# GYC Desktop

一个从 minimal Linux 环境开始，逐层构建自定义图形化桌面系统的长期学习与开发项目。

## 当前目标

从无桌面环境的 Linux 系统开始，逐步理解并构建：

Linux kernel / systemd
→ 图形栈
→ Wayland
→ compositor
→ desktop shell
→ panel / launcher / notifications / settings
→ 完整自定义桌面环境

本项目不以“给 Ubuntu 换主题”为目标，而是以理解并实现 Linux 图形桌面系统为目标。

## 开发方式

- Host：Windows 11
- Development：WSL2 Ubuntu 26.04 LTS
- Target：minimal Linux VM
- Source of truth：`docs/`
