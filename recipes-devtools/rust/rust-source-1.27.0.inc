# Specifics for Rust 1.27.0

SRC_URI += "https://static.rust-lang.org/dist/rustc-${PV}-src.tar.gz;name=rust"

SRC_URI[md5sum] = "30daa06325614c4ac12ed2bc44aca163"
SRC_URI[sha256sum] = "2cb9803f690349c9fd429564d909ddd4676c68dc48b670b8ddf797c2613e2d21"
SRC_URI[rust.md5sum] = "30daa06325614c4ac12ed2bc44aca163"
SRC_URI[rust.sha256sum] = "2cb9803f690349c9fd429564d909ddd4676c68dc48b670b8ddf797c2613e2d21"

# later versions of rust change the directory that they unextract to
RUSTSRC = "${WORKDIR}/rustc-${PV}-src"
# set this as our default
S = "${RUSTSRC}"

LIC_FILES_CHKSUM = "file://COPYRIGHT;md5=99c369ad81a36cd5b27f6c6968d01055"
