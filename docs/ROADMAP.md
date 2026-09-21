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
- [ ] Create GYC Linux Lab VM
- [ ] Install minimal Linux without desktop environment
- [ ] Verify networking
- [ ] Configure SSH
- [ ] Establish deployment path from WSL → VM
- [ ] Create first VM snapshot

## Phase 2 — Linux Graphics Foundations

- [ ] Study Linux graphics stack
- [ ] Identify kernel / DRM / KMS / Mesa responsibilities
- [ ] Identify Wayland protocol / compositor / client responsibilities
- [ ] Establish required graphics development toolchain
- [ ] Bring up minimum graphical output
- [ ] Decide compositor strategy

## Phase 3 — First Desktop Shell

- [ ] Decide initial UI toolkit
- [ ] Create first custom graphical surface
- [ ] Implement initial panel
- [ ] Implement initial application launcher
- [ ] Implement basic window/session integration

## Later

To be defined after architectural decisions.
