SUMMARY = "tio - a simple serial device I/O tool"
DESCRIPTION = "tio is a simple serial device tool which features a \
    straightforward command-line and configuration file interface to easily \
    connect to serial TTY devices for basic I/O operations."

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://LICENSE;md5=0e1a95b7892d3015ecd6d0016f601f2c"

S = "${WORKDIR}/git"

inherit meson pkgconfig

DEPENDS += " libinih"
RDEPENDS_${PN} += " libinih"

FILES_${PN} += " /usr/share/bash-completion/completions/tio "
