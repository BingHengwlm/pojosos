@set SDL_VIDEODRIVER=windib
@set QEMU_AUDIO_DRV=none
@set QEMU_AUDIO_LOG_TO_MONITOR=0
qemu-system-i386.exe -L . -m 32 -fda fdimage0.bin