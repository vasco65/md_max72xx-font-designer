# md_max72xx-font-designer
Simple font designer for md_max72xx / md_parola libs

The font designer that comes with md_max72xx and md_parola libs works only on Microsoft Office.
I need to draw a font for a project I'm doing using this libs and I don't own office, so this is what I came up with.

It's a standalone html page with javascript functions, it have zero dependencies, it doesn't need a server, nor a framework, nor tons of javascript libs.

It's not beautiful, it just do the job.

So far (2018.03.31) it only have been tested with Firefox 52.7.2 (linux 64bits), it still needs to be tested on IE, I don't have access to a Mac so, it will not be tested (at least by me) on that platform.

The only function that may have compatibility problems is the one that exports the font as a .h file to download, I got that function from StackOverflow (details on the html file) and I really don't know how it works. The comments suggest that it will work on IE 10+.

The font is saved as a file named myFont.h, it's a simple text file with the array definition.

To use, download the file fd1.html to your disk and use "Open File" from Firefox file menu.

Good luck.
