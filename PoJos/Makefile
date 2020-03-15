TOOLPATH = ../z_tools/
INCPATH  = ../z_tools/haribote/

MAKE     = $(TOOLPATH)make.exe -r
EDIMG    = $(TOOLPATH)edimg.exe
IMGTOL   = $(TOOLPATH)imgtol.com
COPY     = copy
DEL      = del

# デフォルト動作

default :
	$(MAKE) haribote.img

# ファイル生成規則

haribote.img : haribote/ipl50.bin haribote/haribote.sys Makefile \
		a/a.hrb \
		winhelo3/winhelo3.hrb date/date.hrb\
		walk/walk.hrb noodle/noodle.hrb \
		type/type.hrb iroha/iroha.hrb chklang/chklang.hrb \
		invader/invader.hrb ver/ver.hrb\
		calc/calc.hrb tview/tview.hrb mmlplay/mmlplay.hrb gview/gview.hrb
	$(EDIMG)   imgin:../z_tools/fdimg0at.tek \
		wbinimg src:haribote/ipl50.bin len:512 from:0 to:0 \
		copy from:haribote/haribote.sys to:@: \
		copy from:ipl50.nas to:@: \
		copy from:make.bat to:@: \
		copy from:a/a.hrb to:@: \
		copy from:winhelo3/winhelo3.hrb to:@: \
		copy from:walk/walk.hrb to:@: \
		copy from:noodle/noodle.hrb to:@: \
		copy from:type/type.hrb to:@: \
		copy from:iroha/iroha.hrb to:@: \
		copy from:chklang/chklang.hrb to:@: \
		copy from:euc.txt to:@: \
		copy from:invader/invader.hrb to:@: \
		copy from:calc/calc.hrb to:@: \
		copy from:tview/tview.hrb to:@: \
		copy from:mmlplay/mmlplay.hrb to:@: \
		copy from:mmldata/kirakira.mml to:@: \
		copy from:mmldata/fujisan.mml to:@: \
		copy from:mmldata/daigo.mml to:@: \
		copy from:mmldata/daiku.mml to:@: \
		copy from:gview/gview.hrb to:@: \
		copy from:pictdata/fujisan.jpg to:@: \
		copy from:pictdata/night.bmp to:@: \
		copy from:pictdata/back.jpg to:@: \
		copy from:nihongo/HZK16.fnt to:@: \
		copy from:ver/ver.hrb to:@: \
		copy from:date/date.hrb to:@: \
		imgout:haribote.img

# コマンド

run :
	$(MAKE) haribote.img
	$(COPY) haribote.img ..\z_tools\qemu\fdimage0.bin
	$(MAKE) -C ../z_tools/qemu

install :
	$(MAKE) haribote.img
	$(IMGTOL) w a: haribote.img

full :
	$(MAKE) -C haribote
	$(MAKE) -C apilib
	$(MAKE) -C a
	$(MAKE) -C winhelo3
	$(MAKE) -C walk
	$(MAKE) -C noodle
	$(MAKE) -C type
	$(MAKE) -C iroha
	$(MAKE) -C chklang
	$(MAKE) -C invader
	$(MAKE) -C calc
	$(MAKE) -C tview
	$(MAKE) -C mmlplay
	$(MAKE) -C gview
	$(MAKE) -C ver
	$(MAKE) -C date
	$(MAKE) haribote.img

run_full :
	$(MAKE) full
	$(COPY) haribote.img ..\z_tools\qemu\fdimage0.bin
	$(MAKE) -C ../z_tools/qemu

install_full :
	$(MAKE) full
	$(IMGTOL) w a: haribote.img

run_os :
	$(MAKE) -C haribote
	$(MAKE) run

clean :
# 何もしない

src_only :
	$(MAKE) clean
	-$(DEL) haribote.img

clean_full :
	$(MAKE) -C haribote		clean
	$(MAKE) -C apilib		clean
	$(MAKE) -C a			clean
	$(MAKE) -C winhelo3		clean
	$(MAKE) -C walk			clean
	$(MAKE) -C noodle		clean
	$(MAKE) -C type			clean
	$(MAKE) -C iroha		clean
	$(MAKE) -C chklang		clean
	$(MAKE) -C invader		clean
	$(MAKE) -C calc			clean
	$(MAKE) -C tview		clean
	$(MAKE) -C mmlplay		clean
	$(MAKE) -C gview		clean
	$(MAKE) -C ver  		clean
	$(MAKE) -C date  		clean

src_only_full :
	$(MAKE) -C haribote		src_only
	$(MAKE) -C apilib		src_only
	$(MAKE) -C a			src_only
	$(MAKE) -C winhelo3		src_only
	$(MAKE) -C walk			src_only
	$(MAKE) -C noodle		src_only
	$(MAKE) -C type			src_only
	$(MAKE) -C iroha		src_only
	$(MAKE) -C chklang		src_only
	$(MAKE) -C invader		src_only
	$(MAKE) -C calc			src_only
	$(MAKE) -C tview		src_only
	$(MAKE) -C mmlplay		src_only
	$(MAKE) -C gview		src_only
	$(MAKE) -C ver  		src_only
	$(MAKE) -C date  		src_only
	-$(DEL) haribote.img

refresh :
	$(MAKE) full
	$(MAKE) clean_full
	-$(DEL) haribote.img
	
again :
	$(MAKE) refresh
	$(MAKE) full
	
run_again :
	$(MAKE) again
	$(COPY) haribote.img ..\z_tools\qemu\fdimage0.bin
	$(MAKE) -C ../z_tools/qemu
	
ra :
	$(MAKE) run_again 
	
rf :
	$(MAKE) run_full
