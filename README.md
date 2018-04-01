# md_max72xx-font-designer
Simple font designer for md_max72xx / md_parola libs
It supports single (8) and double (16) height chars. Maximum width is 16. Each character can have it's own width.

The font designer that comes with md_max72xx and md_parola libs works only on Microsoft Office.
I need to draw a font for a project I'm doing using this libs and I don't own office, so this is what I came up with.

It's a standalone html page with javascript functions, it have zero dependencies, it doesn't need a server, nor a framework, nor any javascript lib.

It's not beautiful, it just do the job. It doesn't use any 'advanced' HTML/CSS/Javascript technics so, I hope that it's compatibility is close to Universal with any modern Browser.

So far (2018.04.01) it have been tested with Firefox 52.7.2 (linux 64bits), Chrome 65.0.3325.181 (Win10 64bits) and Microsoft Edge, both Chrome and Edge show some messed up display but there are no major problems.

I don't have access to a Mac so, it will not be tested (at least by me) on that platform.

The only function that may have compatibility problems is the one that exports the font as a .h file to download, I got that function from StackOverflow (details on the html file) and I really don't know how it works. It works ok on Firefox, Chrome and Edge.

The font is saved as a text file named myFont.h, wich only contains the C language array definition.
Config option are available for UNIX or Windows end-of-line.

To use, download the file fd1.html to your disk and use "Open File" from Firefox file menu. Or, if you have a web server just drop the file there and load it when you need it.

Good luck.
