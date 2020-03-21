## This is information on the rust-snapshot (binary) used to build our current release.
## snapshot info is taken from rust/src/stage0.txt
## TODO: find a way to add additional SRC_URIs based on the contents of an
##       earlier SRC_URI.
RS_VERSION = "1.41.1"

RUSTC_SNAPSHOT = "rustc-${RS_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"
RUST_STD_SNAPSHOT = "rust-std-${RS_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"
CARGO_VERSION = "0.42.0"
CARGO_SNAPSHOT = "cargo-${CARGO_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"

SRC_URI += " \
	https://static.rust-lang.org/dist/${RUSTC_SNAPSHOT}.tar.xz;name=rustc-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	https://static.rust-lang.org/dist/${RUST_STD_SNAPSHOT}.tar.xz;name=rust-std-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	https://static.rust-lang.org/dist/${CARGO_SNAPSHOT}.tar.xz;name=cargo-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	"

# TODO: Add hashes for other architecture toolchains as well. Make a script?
SRC_URI[rustc-snapshot-x86_64.md5sum] = "cd69ed8e075eda80624634b026a70b67"
SRC_URI[rustc-snapshot-x86_64.sha256sum] = "cf5051c312ae70b00dedf269ea71499c392087428677f961c3b4ac9da64a92b9"
SRC_URI[rust-std-snapshot-x86_64.md5sum] = "d542568f076d8ffd97a1f48ecc7f44cd"
SRC_URI[rust-std-snapshot-x86_64.sha256sum] = "8e0d2ccfaaeec2e2007b3a605e2bf1dac2e2c82a8d4168bf4e81c9dd5374214e"
SRC_URI[cargo-snapshot-x86_64.md5sum] = "80aa7a8d94f570a7088984fb4d359a9a"
SRC_URI[cargo-snapshot-x86_64.sha256sum] = "390156ca95741ea62e18952e2a703437ab4ad400064a22a23a2bffe9a337e8a8"
