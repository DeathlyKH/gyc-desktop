# AI Context

此文件是 AI 开始工作前应优先读取的精简项目上下文。

## Project

Name:
GYC Desktop

Goal:
从 minimal Linux 环境出发，逐层学习并实现一套自定义 Linux 图形桌面系统。

不是：
- Ubuntu 主题包
- GNOME 美化项目
- 简单桌面皮肤

## Current Architecture

Windows 11
├─ WSL2 Ubuntu 26.04
│  └─ 开发 / Git / 编译
└─ VMware Workstation Pro 26H1u1
   └─ 独立 minimal Linux VM
      └─ 目标运行环境 / 图形系统实验环境

## Current State

WSL 已完成并可正常使用。
VM 平台已确定并验证为 VMware Workstation Pro 26H1u1。

当前正在进行：

Phase 1 — 选择 initial minimal Linux distribution，并创建 GYC Linux Lab VM。

## Important Rules

1. 不得把“讨论方案”当成“已采用方案”。
2. `ARCHITECTURE.md` 描述当前系统事实。
3. `DECISIONS.md` 记录正式技术决策。
4. `DEVLOG.md` 只记录历史发生事项。
5. `ROADMAP.md` 记录任务状态。
6. 如聊天内容与 docs 冲突，以最新明确确认的 docs 为准。
7. 未决定的技术选型必须明确标记为 TBD。

## Major TBDs

- VM 基础 Linux 发行版最终选择
- compositor 架构
- 是否自行实现 compositor
- UI toolkit
- 主实现语言
