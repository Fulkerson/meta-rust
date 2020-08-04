## This is information on the rust-snapshot (binary) used to build our current release.
## snapshot info is taken from rust/src/stage0.txt
## TODO: find a way to add additional SRC_URIs based on the contents of an
##       earlier SRC_URI.
RS_VERSION = "1.44.0"

RUSTC_SNAPSHOT = "rustc-${RS_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"
RUST_STD_SNAPSHOT = "rust-std-${RS_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"
CARGO_VERSION = "0.45.0"
CARGO_SNAPSHOT = "cargo-${CARGO_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"

SRC_URI += " \
	https://static.rust-lang.org/dist/${RUSTC_SNAPSHOT}.tar.xz;name=rustc-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	https://static.rust-lang.org/dist/${RUST_STD_SNAPSHOT}.tar.xz;name=rust-std-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	https://static.rust-lang.org/dist/${CARGO_SNAPSHOT}.tar.xz;name=cargo-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	"

# TODO: Add hashes for other architecture toolchains as well. Make a script?
SRC_URI[rustc-snapshot-x86_64.md5sum] = "17bef634228f4bf423c30af913dbd6be"
SRC_URI[rustc-snapshot-x86_64.sha256sum] = "fe1d8d81950eea1f67219abc49bc1ae88b2b27fd02d1bffa38b43bc5bff05124"
SRC_URI[rust-std-snapshot-x86_64.md5sum] = "51bee9e6f1ebd2c25953c42aef2a89f3"
SRC_URI[rust-std-snapshot-x86_64.sha256sum] = "122b2a909fc185c6ae5a0110af6f60699f4332b4fb3c43698b14a873fbe65b6e"
SRC_URI[cargo-snapshot-x86_64.md5sum] = "c4f122506c4dc9783630fe79e882120a"
SRC_URI[cargo-snapshot-x86_64.sha256sum] = "4ee5811bfb5fd0eb26fcf7f9b57f4e8fced458219ba52bff6d2474321ff39c18"

