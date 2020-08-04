require rust-source-${PV}.inc
require libstd-rs.inc

LIC_FILES_CHKSUM = "file://../../COPYRIGHT;md5=93a95682d51b4cb0a633a97046940ef0"

# Needed to fix the following error on LTO builds:
# failed to get bitcode from object file for LTO (Bitcode section not found in object file)
RUSTFLAGS += "-C embed-bitcode=yes"

CARGO_FEATURES ?= "panic-unwind backtrace"

CARGO_VENDORING_DIRECTORY = "${RUSTSRC}/vendor"
