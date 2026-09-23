# Roadmap

## Phase 0 — Project Foundation

- [x] Remove old dual-boot Ubuntu environment
- [x] Configure WSL2
- [x] Install Ubuntu 26.04 LTS in WSL2
- [x] Verify systemd
- [x] Verify Git / GCC / Python
- [x] Create GYC Desktop repository
- [x] Establish project documentation / source of truth
- [x] Create GitHub remote repository
- [x] Audit Windows / WSL development environment
- [x] Record development environment baseline

## Phase 1 — Minimal Linux Target

- [x] Choose virtualization platform
- [x] Choose initial minimal Linux distribution
- [x] Create GYC Linux Lab VM
- [x] Install minimal Linux without desktop environment
- [x] Verify networking
- [x] Configure SSH
- [x] Establish deployment path from WSL → VM
- [x] Create first VM snapshot

## Phase 2: Graphics Foundation

Status:
IN PROGRESS

Completed:
[x] DRM device initialization
[x] VMware GPU driver validation
[x] Mesa installation
[x] Wayland environment preparation
[x] Weston first graphical output

Next:
[ ] Understand Wayland client/compositor architecture
[ ] Create minimal Wayland client
[ ] Experiment with custom compositor framework
[ ] Evaluate wlroots architecture

## Phase 3 — First Desktop Shell

- [ ] Decide initial UI toolkit
- [ ] Create first custom graphical surface
- [ ] Implement initial panel
- [ ] Implement initial application launcher
- [ ] Implement basic window/session integration

## Later

To be defined after architectural decisions.
