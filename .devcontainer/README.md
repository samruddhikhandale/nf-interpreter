# This folder contains all the elements used for .NET nanoFramework dev container

You'll find Docker files for .NET nanoFramework. They are used to facilitate building images.

The available pre build images are:

* ghcr.io/nanoframework/dev-container-all: contains all elements to build a firmware image for any of the targets. **Important**: the size of this container is very large, if you are interested only in building targets on a single platform, you're better using one of the following images specific to that platform.
* ghcr.io/nanoframework/dev-container-chibios: contains all elements to build a firmware image for any of the ChibiOS targets
* ghcr.io/nanoframework/dev-container-ti: contains all elements to build a firmware image for any of the TI SimpleLink targets
* ghcr.io/nanoframework/dev-container-esp32: contains all elements to build a firmware image for any of the ESP32 targets
* ghcr.io/nanoframework/dev-container-azure-rtos: contains all elements to build a firmware image for any of the Azure RTOS targets

## Getting started with GitHub Codespaces

To get started, create a codespace for this repository by clicking this 👇 

[![Open in GitHub Codespaces](https://github.com/codespaces/badge.svg)](https://github.com/codespaces/new?hide_repo_select=true&ref=main&repo=74834622)

To choose the dev container, you can simply pick one from the `Dev container configuration ` list:

* (Default) `.devcontainer/devcontainer.json` to use the pre build container with all the elements to build a firmware image for any of the targets
* `.devcontainer/AzureRTOS/devcontainer.json` to use the pre build container with all the elements to build Azure RTOS targets
* `.devcontainer/ChibiOS/devcontainer.json` to use the pre build container with all the elements to build ChibiOS targets
* `.devcontainer/ESP32/devcontainer.json` to use the pre build container with all the elements to build ESP32 targets
* `.devcontainer/TI/devcontainer.json` to use the pre build container with all the elements to build TI SimpleLink targets
* `.devcontainer/sources/devcontainer.json` to build the container image from the source with all the elements to build all the images
* `.devcontainer/sources/AzureRTOS/devcontainer.json` to build the container image from the source with all the elements to build Azure RTOS based devices
* `.devcontainer/sources/ChibiOS/devcontainer.json` to build the container image from the source with all the elements to build ChibiOS based devices
* `.devcontainer/sources/ESP32/devcontainer.json` to build the container image from the source with all the elements to build ESP32 based devices
* `.devcontainer/sources/TI/devcontainer.json` to build the container image from the source with all the elements to build TI SimpleLink based devices

A codespace will open in a web-based version of Visual Studio Code. The [dev container](.devcontainer/devcontainer.json) is fully configured with software needed for this project. Feel free to take a look at [GitHub Codespaces Support](https://support.github.com/features/codespaces) page for help.

**Note**: Dev containers is an open spec which is supported by [GitHub Codespaces](https://github.com/codespaces) and [other tools](https://containers.dev/supporting).
