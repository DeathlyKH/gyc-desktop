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
