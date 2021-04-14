
# Building our own 64-bit Operating System Kernel

This repository contains all the source code for creating your own 64-bit os from scratch.

### Built With

* <a href="https://code.visualstudio.com/">VSCode </a> (text editor)
* <a href="https://www.docker.com/">Docker </a> (for creating our build-environment)
* <a href="https://www.qemu.org/">Qemu </a> (for OS emulation)

### Languages Used

* *Assembly Language*
* *C Language*
* *Make* (for reading Makefile)

### Build Environment

* For building image (using docker):
      ```
      docker build buildenv -t myos-buildenv
      ```
* For entering build-environment (using Windows cmd):
      ```
      docker run --rm -it -v "%cd%":/root/env myos-buildenv
      ```
* For building x86 Architecture:
      ```
      make build-x86_64
      ```
* For exiting build-environment:
      ```
      exit
      ```

### Emulation

* Emulating OS using Qemu:

      ```
      "path\to\qemu\qemu-system-x86_64" -cdrom dist/x86_64/kernel.iso
      ```
      
###  OUTPUT
<img src="D:\Nust Lectures\4th Semister\CAO\OS Assign\nust-logo.jpeg"/>
