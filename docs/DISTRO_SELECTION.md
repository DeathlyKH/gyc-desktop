# Initial Linux Distribution Selection

## Purpose

选择 GYC Linux Lab 的第一代基础 Linux 发行版。

GYC Desktop 的目标不是寻找一个日常使用的 Linux 桌面系统，而是：

从 minimal Linux 环境出发，
逐层理解并实现自定义 Linux 图形桌面系统。

主要学习和实验方向：

- Linux boot process
- systemd
- Linux graphics stack
- DRM / KMS
- Mesa
- Wayland
- compositor
- desktop shell

## Evaluation Criteria

发行版选择主要考虑：

### 1. System transparency

需要能够观察和理解：

- kernel
- initramfs
- bootloader
- systemd
- services
- session startup

避免过多隐藏底层细节。

### 2. Graphics stack suitability

需要适合研究：

- DRM/KMS
- Mesa
- Wayland
- compositor
- input stack

### 3. Minimal installation control

第一代 GYC Linux Lab 应：

- 不安装完整桌面环境
- 从基础系统开始
- 手动构建需要的软件栈

### 4. Long-term maintainability

需要能够支持长期实验和迭代。

# Candidates

## Arch Linux

Status:
- Accepted
- Selected as the initial GYC Linux Lab distribution

Advantages:

- 极高系统透明度
- minimal installation experience
- 用户自主决定系统组成
- Arch Wiki 对 Linux 图形栈具有较高参考价值
- 软件版本较新，适合 Wayland / Mesa 等快速发展的组件

Potential issues:

- 滚动更新带来的维护成本
- 初期配置工作量较大
- 可能花费较多时间处理系统维护问题

Decision notes:

- 符合当前“从基础系统逐步搭建 graphics stack / Wayland / compositor”的目标
- 适合作为第一代实验系统

## Ubuntu Server 26.04 LTS

Status:
- Candidate
- Backup option

Advantages:

- 生态成熟
- 文档丰富
- NVIDIA 相关支持通常较方便
- 长期支持周期明确

Potential issues:

- 默认配置较多
- 部分底层细节被发行版封装

Decision notes:

- 作为备用方案保留
- 若 Arch 路线出现不可接受问题，可切换至 Ubuntu Server 26.04 LTS

## Debian 13

Status:
- Considered
- Not selected for the initial phase

Advantages:

- 接近传统 Linux 基础系统
- 稳定
- 系统结构清晰

Potential issues:

- 软件版本相对保守
- 最新图形栈组件可能需要额外处理

Decision notes:

- 具备学习价值
- 但当前阶段未作为初始目标系统

# Final Decision

Selected initial distribution:
- Arch Linux

Backup option:
- Ubuntu Server 26.04 LTS

Reason summary:

GYC Desktop 第一阶段重点是学习 Linux 图形系统内部结构，
而不是快速获得一个完整桌面环境。

Arch Linux 的 minimal installation 模式更符合：

Linux
→ systemd
→ graphics stack
→ Wayland
→ compositor
→ desktop shell

的学习路线。
