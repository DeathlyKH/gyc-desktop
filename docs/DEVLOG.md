# Development Log

## 2026-09-18

### Environment migration

- 删除原有 Ubuntu 双系统
- 删除 Ubuntu EFI / GRUB 启动项
- 原 Ubuntu 50 GB 分区并入 D:
- Windows Boot Manager 恢复为唯一主要系统启动项

### WSL2

安装：
- WSL 2.7.14
- Ubuntu 26.04 LTS

位置：
- E:\WSL\Ubuntu-26.04

验证：
- WSL2 kernel 正常
- systemd running
- Git 2.53.0
- GCC 15.2.0
- Python 3.14.4

### Project

建立 GYC Desktop 项目。

目标：
从 minimal Linux 开始构建自定义 Linux 图形桌面系统。
