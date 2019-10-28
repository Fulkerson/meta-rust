SRC_URI += "https://static.rust-lang.org/dist/2019-10-27/rustc-beta-src.tar.xz;name=rust"

SRC_URI[rust.md5sum] = "e54c32ffe1ec9f6ea2ff9b50a002ec28"
SRC_URI[rust.sha256sum] = "9d14dcbdaa151259428c8a2e7a5f8d713ddcff44e5d78169fed0ba5b5ef5f1e0"

# later versions of rust change the directory that they unextract to
RUSTSRC = "${WORKDIR}/rustc-beta-src"
# set this as our default
S = "${RUSTSRC}"

LIC_FILES_CHKSUM = "file://COPYRIGHT;md5=93a95682d51b4cb0a633a97046940ef0"

# This is just a beta release for now
RUST_CHANNEL = "beta"

