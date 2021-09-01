ARCH = x86_64
TARGET = build/bootx64.efi
SRCS = $(wildcard *.c)
CFLAGS = -pedantic -Wall -Wextra -Werror --std=c11 
include uefi/Makefile

