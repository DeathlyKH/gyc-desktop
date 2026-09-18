# Architecture Decision Records

记录已经正式做出的技术决策。

讨论过但未正式采用的方案不能写成最终决定。

---

## ADR-001 — Windows + WSL2 + VM

Status: Accepted

Decision:

使用三层开发结构：

Windows
→ 日常宿主系统

WSL2 Ubuntu
→ Linux 开发环境

Minimal Linux VM
→ GYC Desktop 目标运行与实验环境

Reason:

WSL 提供方便的 Linux 开发工具链；
VM 提供完整、隔离、可快照恢复的 Linux 系统环境，
适合进行 compositor、session、图形栈等实验。

---

## ADR-002 — VMware Workstation Pro as VM platform

Status: Accepted

Decision:

使用 VMware Workstation Pro for Windows
作为 GYC Linux Lab 的虚拟化平台。

当前已验证版本：
- VMware Workstation Pro 26H1u1
- Version 26.0.1.25688693
- Build 25688693

Reason:

当前 Windows 11 Home 开发主机已经使用 WSL2 与 Windows hypervisor。
VM 平台需要在不破坏现有 WSL2 开发环境的前提下，
提供完整、隔离、可恢复的 Linux 虚拟机环境。

VMware Workstation Pro 可提供：
- 独立完整 Linux boot / session 环境
- VM snapshot 与破坏性实验后的恢复能力
- 适合 Linux graphics / Wayland / compositor 实验的虚拟机环境
- 与当前 Windows 11 + WSL2 + Windows hypervisor 配置共存

Validation:

已在当前开发主机完成实际验证：
- Windows 重启后 VMware 核心服务正常
- VMnet1 / VMnet8 正常
- Windows hypervisor 保持启用
- WSL2 Ubuntu 26.04 正常运行
- WSL systemd 正常运行
- 临时 Linux smoke-test VM 成功执行虚拟固件并进入 Intel E1000E network boot / DHCP

因此 VMware Workstation Pro 已从候选方案升级为正式采用的 VM 平台。

Scope:

此决策仅确定虚拟化平台。

以下内容仍未决定：
- GYC Linux Lab 最终基础发行版
- compositor 技术路线
- 是否自行实现 compositor
- UI toolkit
- 主实现语言
