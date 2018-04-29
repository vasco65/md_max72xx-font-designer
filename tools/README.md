# Tools



Name: zxchar2c.pl

Type: Perl script

Platform: Any, but it needs a Perl interpreter.

Usage: perl zxchar2c.pl file.bin >file.h

Function: 
A lot of games for the ZX Spectrum used costumized char sets, tipically this fonts are just a sequence of 96 8x8 bitmaps (768 bytes) stored somewhere on the Spectrum RAM. It is quite surprising the quality of some of the fonts and some work quite well on led matrices.
This script takes a file with one font and produces a C array ready to load into your Arduino sketch.
The character sequence is the same except for char \` (char 96), in the spectrum this is the £ (british pound) character. 
A spectrum font only have from char 32 to 127, so, empty chars are created for 0-32 and 128-255. The scripts handle this, but can be tweeked to process other formats.
