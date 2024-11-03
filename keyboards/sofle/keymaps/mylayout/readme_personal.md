To compile:
> qmk compile -kb sofle/rev1 -km mylayout -j=32

Edit files here for wanted changes:
> C:\Users\maxid\qmk_firmware\keyboards\sofle\keymaps\mylayout

keymap.c for code changes
and 
sofle.json for other ones if wanted.

Can convert from and to .c and .json using:
1) qmk json2c sofle_rev1_mylayout.json
2)  qmk c2json -kb sofle/rev1 -km mylayout keymap.c --no-cpp -o keymap.json
However no formating. Maybe make my own formatted for this..

