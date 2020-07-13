## This is information on the rust-snapshot (binary) used to build our current release.
## snapshot info is taken from rust/src/stage0.txt
## TODO: find a way to add additional SRC_URIs based on the contents of an
##       earlier SRC_URI.
RS_VERSION = "1.43.1"

RUSTC_SNAPSHOT = "rustc-${RS_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"
RUST_STD_SNAPSHOT = "rust-std-${RS_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"
CARGO_VERSION = "0.44.0"
CARGO_SNAPSHOT = "cargo-${CARGO_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"

SRC_URI += " \
	https://static.rust-lang.org/dist/${RUSTC_SNAPSHOT}.tar.xz;name=rustc-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	https://static.rust-lang.org/dist/${RUST_STD_SNAPSHOT}.tar.xz;name=rust-std-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	https://static.rust-lang.org/dist/${CARGO_SNAPSHOT}.tar.xz;name=cargo-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	"

# TODO: Add hashes for other architecture toolchains as well. Make a script?
SRC_URI[rustc-snapshot-x86_64.md5sum] = "055a2c4edae08edf3bf309e3085fee45"
SRC_URI[rustc-snapshot-x86_64.sha256sum] = "a18b89572ff2e55eb9e0428efcdb60eacd82fe28c4d825d169b0ffc9e3c55ceb"
SRC_URI[rust-std-snapshot-x86_64.md5sum] = "af93170034843a8ebf3518907ecebb6d"
SRC_URI[rust-std-snapshot-x86_64.sha256sum] = "dabc62db53c2e7ffeba2824d4c52a938486b04c01a93ecba00c5d529868f6cfc"
SRC_URI[cargo-snapshot-x86_64.md5sum] = "e39bad61f9d3e364e2635cf8eb6ca644"
SRC_URI[cargo-snapshot-x86_64.sha256sum] = "84ba23058542691dae8157beec6a7679a420643eb6a708134bb1dfb01cbdebea"
