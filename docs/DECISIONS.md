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

---

## ADR-003 — Arch Linux as initial GYC Linux Lab distribution

Status: Accepted

Decision:

GYC Linux Lab 的初始基础发行版采用 Arch Linux。

Ubuntu Server 26.04 LTS 保留为备用方案，
仅在 Arch 路线遇到不可接受的阻碍时再重新评估和切换。

Reason:

GYC Desktop 项目的目标不是快速获得一个现成桌面环境，
而是从 minimal Linux 环境出发，
逐层理解并构建自定义 Linux 图形桌面系统。

Arch Linux 更符合这一目标，因为它具备：

- 较高的系统透明度
- 对系统组成和安装过程的更高控制度
- 更适合从基础系统逐步搭建 graphics stack / Wayland / compositor
- 较新的软件包生态，便于跟进 Linux graphics stack 的现代组件
- 丰富的 Arch Wiki 技术资料，可作为重要参考

Alternatives considered:

- Ubuntu Server 26.04 LTS
  - 优点：成熟、稳定、资料多、作为备用方案适合快速回退
  - 未作为首选原因：默认封装相对更多，较不符合当前“从底层搭建”的主要学习目标

- Debian 13
  - 优点：系统结构清晰、稳定
  - 未作为首选原因：初始阶段希望获得更直接的 modern graphics stack 路线与更新的软件版本

Scope:

此决策仅确定 GYC Linux Lab 第一代基础发行版。

以下内容仍未决定：
- compositor 技术路线
- 是否自行实现 compositor
- UI toolkit
- 主实现语言
- 桌面 shell 的最终设计与技术实现方式
