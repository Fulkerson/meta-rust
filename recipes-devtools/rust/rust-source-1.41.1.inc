SRC_URI += "https://static.rust-lang.org/dist/rustc-${PV}-src.tar.xz;name=rust"

SRC_URI[rust.md5sum] = "6902e6f2fe74e8a654b867c8b5a016cf"
SRC_URI[rust.sha256sum] = "ebac9861b43c7207af36e24402dfdc5463a4df4bdb015ccb2b165251c0fdcf7c"

# later versions of rust change the directory that they unextract to
RUSTSRC = "${WORKDIR}/rustc-${PV}-src"
# set this as our default
S = "${RUSTSRC}"

LIC_FILES_CHKSUM = "file://COPYRIGHT;md5=93a95682d51b4cb0a633a97046940ef0"
