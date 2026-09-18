# Architecture

## 当前已确定架构

Host
- Windows 11

Development Environment
- WSL2
- Ubuntu 26.04 LTS
- systemd enabled
- 项目源码优先存放于 Linux 文件系统中

Target Environment
- 独立 minimal Linux 虚拟机
- 初步倾向 Ubuntu Server 26.04 LTS
- 默认不安装桌面环境
- 用作 GYC Desktop 的实际运行与破坏性实验环境

## 开发 / 运行分离

WSL2：
- 编写代码
- Git
- 编译
- 调试辅助
- 构建产物

VM：
- 完整 Linux session
- 图形栈实验
- Wayland 实验
- compositor
- desktop shell
- display/session 相关实验

## 尚未决定

以下内容目前禁止视为已确定方案：

- compositor 技术路线
- Qt / QML / GTK / 其他 UI 框架
- C++ / Rust / 其他主要实现语言
- display manager
- shell 架构
- 是否自行实现 compositor
- 最终基础发行版

所有这些需要后续单独做技术选型。
