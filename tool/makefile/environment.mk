PLATFORM := $(shell arch)
ifeq ($(PLATFORM),x86_64)
else ifeq ($(PLATFORM),arm64)
else
endif

ifeq ($(OS),Windows_NT)
	OS := win
	include tool/makefile/platform/win.mk
else
    _detected_OS := $(shell uname -s)
    ifeq ($(_detected_OS),Linux)
		OS := nix
		include tool/makefile/platform/nix.mk
    else ifeq ($(_detected_OS),Darwin)
		OS := mac
		include tool/makefile/platform/mac.mk
    endif
endif