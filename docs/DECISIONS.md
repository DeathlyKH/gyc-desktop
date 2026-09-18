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
