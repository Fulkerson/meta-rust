SRC_URI += "https://static.rust-lang.org/dist/rustc-${PV}-src.tar.xz;name=rust"

SRC_URI[rust.md5sum] = "03a6111956f8d3bfdfc21aedce7f06bc"
SRC_URI[rust.sha256sum] = "aa5b4c0f2bac33cc26a11523fce9b0f120d2eff510ed148ae7c586501481ed04"

# later versions of rust change the directory that they unextract to
RUSTSRC = "${WORKDIR}/rustc-${PV}-src"
# set this as our default
S = "${RUSTSRC}"

LIC_FILES_CHKSUM = "file://COPYRIGHT;md5=93a95682d51b4cb0a633a97046940ef0"
