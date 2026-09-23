# Environment

## Windows Host

OS:
- Windows 11 Home
- Build 26200.9457

Hardware:
- CPU: Intel Core i7-14650HX
- GPU: NVIDIA GeForce RTX 5070 Laptop GPU
- RAM: 16 GB
- Storage: 1 TB + 1 TB SSD

## Windows Development Environment

### Qt

Installation:
- Qt 6.11.0
- Location: `D:\Qt`

Installed Qt kits:
- `D:\Qt\6.11.0\mingw_64`
- `D:\Qt\6.11.0\msvc2022_64`

Qt-provided tools:
- Qt Creator
- MinGW GCC/G++ 13.1.0
- CMake 3.30.5
- Ninja 1.12.1

Tool locations:
- Qt Creator: `D:\Qt\Tools\QtCreator`
- Qt MinGW: `D:\Qt\Tools\mingw1310_64`
- Qt CMake: `D:\Qt\Tools\CMake_64`
- Qt Ninja: `D:\Qt\Tools\Ninja`

Important:
- The Qt MinGW kit is paired with the Qt-provided MinGW 13.1.0 toolchain.
- The standalone Windows MinGW toolchain should not be implicitly mixed with the Qt MinGW kit.
- Qt is an installed development asset only.
- Qt has NOT been selected as the GYC Desktop UI toolkit.

### Standalone Windows Tools

Confirmed:
- CMake 4.2.3
- Git 2.51.0.windows.2
- Python 3.12.10
- MinGW GCC/G++ 13.2.0

Standalone MinGW location:
- `C:\Tools\mingw64`

### Visual Studio / MSVC

Installation:
- Visual Studio Community 2026
- Visual Studio 18.7.1
- Location: `D:\Microsoft Visual Studio\18\Community`

Installed MSVC toolsets:
- 14.44.35207
- 14.51.36231

Verified compiler:
- Microsoft C/C++ Optimizing Compiler 19.51.36248
- Target: x64

Note:
- `cl.exe` is not expected to be available in a normal PowerShell session.
- The MSVC environment is activated through Visual Studio developer environment scripts such as `VsDevCmd.bat`.

## Windows Virtualization Environment

### VMware Workstation Pro

Installation:
- VMware Workstation Pro 26H1u1 for Windows
- Version: 26.0.1.25688693
- Build: 25688693

Validation:
- VMware starts normally after a Windows host reboot
- VMware Authorization Service is running
- VMware DHCP Service is running
- VMware NAT Service is running
- VMware USB Arbitration Service is running
- VMware Network Adapter VMnet1 is up
- VMware Network Adapter VMnet8 is up
- Windows hypervisor remains present (`HypervisorPresent: True`)
- WSL2 Ubuntu 26.04 remains operational
- WSL systemd remains `running`
- A temporary Linux smoke-test VM successfully reached virtual firmware and Intel E1000E network boot / DHCP

Important:
- VMware Workstation Pro is the accepted virtualization platform for GYC Linux Lab.
- This decision does not determine the UI toolkit, compositor architecture, or implementation language.

## WSL Development Environment

Distribution:
- Ubuntu 26.04 LTS

WSL:
- WSL2
- Kernel: 6.18.33.2-microsoft-standard-WSL2
- systemd: running

Location:
- Windows side: `E:\WSL\Ubuntu-26.04`
- Linux project root: `~/projects`

Confirmed development tools:
- Git 2.53.0
- GCC 15.2.0
- G++ 15.2.0
- GNU Make 4.4.1
- Python 3.14.4

Currently not installed:
- CMake
- Ninja
- pkg-config
- Clang / Clang++
- Rust / Cargo
- Qt development tools

These are intentionally left uninstalled until the corresponding GYC Desktop architecture decisions are made.

### Existing Linux Graphics Runtime Components

Confirmed runtime packages include:
- libdrm 2.4.131
- Mesa 26.0.8
- Vulkan loader 1.4.341
- Wayland client libraries 1.24.0
- libxkbcommon 1.13.1

Important:
- These are primarily runtime components provided by the current WSL/WSLg environment.
- Their presence does not mean that a complete Linux graphics development stack is installed.
- Their presence does not mean that WSL is the final GYC Desktop target environment.

## Target VM

Status:
- Not created yet

Current plan:
- Independent minimal Linux virtual machine hosted by VMware Workstation Pro 26H1u1
- Initial target distribution: Arch Linux
- No desktop environment initially
- Intended storage location: E: drive
- Used as the GYC Desktop target runtime and graphics-system laboratory

Planned responsibilities:
- Full Linux boot/session environment
- TTY and system-level experiments
- Graphics stack experiments
- Wayland experiments
- Compositor experiments
- Desktop shell experiments
- Snapshot-based recovery from destructive system changes

## Architecture Status

Installed software must not be treated as an architecture decision.

Still TBD:
- Main implementation language
- UI toolkit
- Compositor architecture
- Whether the compositor will eventually be implemented in-house

## Graphics Environment:

- GPU:
VMware SVGA II Adapter

- Kernel Module:
vmwgfx

- Graphics Devices:
 /dev/dri/card0
 /dev/dri/renderD128

- Compositor:
Weston 15.0.1

- Display Protocol:
Wayland