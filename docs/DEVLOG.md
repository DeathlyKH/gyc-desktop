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
- `E:\WSL\Ubuntu-26.04`

验证：
- WSL2 kernel 正常
- systemd running
- Git 2.53.0
- GCC/G++ 15.2.0
- GNU Make 4.4.1
- Python 3.14.4

### Project

建立 GYC Desktop 项目。

目标：
从 minimal Linux 开始构建自定义 Linux 图形桌面系统。

建立项目事实源：
- `ARCHITECTURE.md`
- `ROADMAP.md`
- `ENVIRONMENT.md`
- `DECISIONS.md`
- `DEVLOG.md`
- `AI_CONTEXT.md`

建立 GitHub 远程仓库：
- `DeathlyKH/gyc-desktop`

### Development environment audit

完成 Windows 与 WSL 开发环境盘点。

Windows Qt：
- Qt 6.11.0
- MinGW 64-bit kit
- MSVC 2022 64-bit kit
- Qt Creator
- Qt-provided MinGW 13.1.0
- Qt-provided CMake 3.30.5
- Qt-provided Ninja 1.12.1

Windows standalone tools：
- MinGW GCC/G++ 13.2.0
- CMake 4.2.3
- Git 2.51.0.windows.2
- Python 3.12.10

Visual Studio：
- Visual Studio Community 2026 / 18.7.1
- MSVC toolsets 14.44.35207 and 14.51.36231
- Verified x64 compiler version 19.51.36248

WSL development environment：
- Git / GCC / G++ / Make / Python available
- CMake / Ninja / pkg-config / Clang / Rust / Qt development tools not currently installed
- Optional development stacks intentionally remain uninstalled pending architecture decisions

WSL graphics runtime：
- Existing Mesa / DRM / Vulkan / Wayland / xkbcommon runtime components confirmed
- These runtime components are not treated as a complete graphics development environment

Decision discipline：
- Existing Qt installation is recorded as an available development asset
- Qt is NOT considered selected for GYC Desktop
- Main language, UI toolkit, compositor architecture and VM platform remain TBD

### VMware Workstation platform selection and validation

安装：
- VMware Workstation Pro 26H1u1 for Windows
- Version 26.0.1.25688693
- Build 25688693
- 安装包来自 Broadcom 官方下载站

Host reboot：
- VMware 安装完成后已重新启动 Windows

验证：
- VMware Authorization Service running
- VMware DHCP Service running
- VMware NAT Service running
- VMware USB Arbitration Service running
- VMware Network Adapter VMnet1 up
- VMware Network Adapter VMnet8 up
- Windows hypervisor remained present
- WSL2 Ubuntu 26.04 remained operational
- WSL systemd returned `running`

Smoke test：
- 创建临时 `VMware Smoke Test` Linux VM
- VM 位于 E: 盘
- 未安装 guest operating system
- 虚拟机成功启动
- 虚拟固件正常执行
- Intel E1000E virtual NIC 成功进入 network boot / DHCP

Decision：
- VMware Workstation Pro 已验证可用于当前 Windows 11 + WSL2 开发架构
- VM platform 正式确定为 VMware Workstation Pro
- 下一步进入 initial minimal Linux distribution 选型
