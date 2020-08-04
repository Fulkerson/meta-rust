SRC_URI += "https://static.rust-lang.org/dist/rustc-${PV}-src.tar.xz;name=rust"

SRC_URI[rust.md5sum] = "895217f0317e85b51992c386870c644f"
SRC_URI[rust.sha256sum] = "f8412adac2f5d974b2f06c5bd4be7361084d18a678d098bf05de5ccfa57b74a9"

# later versions of rust change the directory that they unextract to
RUSTSRC = "${WORKDIR}/rustc-${PV}-src"
# set this as our default
S = "${RUSTSRC}"

LIC_FILES_CHKSUM = "file://COPYRIGHT;md5=93a95682d51b4cb0a633a97046940ef0"
