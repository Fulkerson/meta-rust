SRC_URI += "https://static.rust-lang.org/dist/rustc-${PV}-src.tar.xz;name=rust"

SRC_URI[rust.md5sum] = "0cc3b079ddb1eb9a17f9e7e52efcebc5"
SRC_URI[rust.sha256sum] = "e0386295dd5f2c7842835a509e4c57989eec6c29f989a1c85478b0e06f9d38ea"

# later versions of rust change the directory that they unextract to
RUSTSRC = "${WORKDIR}/rustc-${PV}-src"
# set this as our default
S = "${RUSTSRC}"

LIC_FILES_CHKSUM = "file://COPYRIGHT;md5=93a95682d51b4cb0a633a97046940ef0"
