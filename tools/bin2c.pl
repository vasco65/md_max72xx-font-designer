#!/bin/perl

# converts a zx spectrum char set to md_max72xx format
# v1.0, 2018.04.29, Antonio Vasconcelos

# You'll need a Perl Interpreter to run this script, it's available on
# most linux or unix computer, Windows versions are available too, the
# easy way to run it Windows is from within the shells provided by Cygwin.
#
# it was developed with this version of perl,
#
#    This is perl 5, version 22, subversion 3 (v5.22.3) built for cygwin-thread-multi-64int
#    Copyright 1987-2017, Larry Wall
#
# but I'm sure any version from the last 10 years will work.

# this script contains code from Anonymous Monk (AKA vroom, I think) posted
# on http://www.perlmonks.org so, licencing is not clear. My part is Public Domain,
# if in doubt write your own function to convert from binary to hexadecimal.
#
# to grab a charset from a zx spectrum program you'll need an emulator that
# let you read byte values from any memory address and save blocks of memory (Fuse, Spectaculator, etc).
#
# a) Load the program in the emulator
# b) Read the values at address 23606 (LSB) and 23607 (MSB)
# c) Charset starts at START=([23606]+256*[23607])+256 // [nnnnn] is the value stored at that address
# d) Save a block of memory starting at START 768 bytes long with a usefull name.

# Note that the values at 23606 and 23607 will only be usefull if the program is using the print routines
# from the Spectrum ROM, if the program uses it's own print routine chances are that it does not locate
# the char set by this method. So, if the values at 23606 and 23607 are 0 and 60 (default values) you are
# out of luck.
# Even so, not all hope is lost, google for "find graphics in rom images", you might find software that
# help you with this, after all, char sets in the spectrum are just 96 8x8 tiles.

use warnings; use strict;

# read de file into an array

open X,"<",$ARGV[0] or die "cant open $ARGV[0]: $!";
binmode X;
my $n=0;
my @all;
while(!eof(X))
{
	read(X,$all[$n++],1)
}
close(X);


if($n != 768 )
{
	print "red $n chars, should be 768.\n";
	exit(1);
}

# print array definition and the 1st 32 chars

print "const MD_MAX72XX::fontType_t zxFont[] PROGMEM = {\n";
for(my $f=0;$f<32;$f++)
{
	print "    0, // char $f\n";
}

my $nn=0;
my $g;
my @charset;
my @z;
my @y;
my $zi=0;
my $f1;
my $cnt=32;
for(my $f=0;$f<$n;$f+=8)
{
	# transform each value to bit patterns
	# and store it in a 8x8 array
	$zi=0;
	for($f1=$f;$f1<($f+8);$f1++)
	{
		my $v=ord($all[$f1]);
		my $b=sprintf("%08b",$v);
		for($g=0;$g<8;$g++)
		{
			my $c=substr($b,$g,1);
			$z[$zi][$g]=$c;
		}
		$zi++;
	}
	# max72xx font format each value is a column, not a line, so, rotate the array
	@y=rotate(@z);

	print "    8, "; # char width is allways 8
	# build the binary value and convert it to hexa
	for(my $gg=7;$gg>=0;$gg--)
	{
		my $bin="";
		for(my $ff=0;$ff<8;$ff++)
		{
			$bin.=$y[$gg][$ff];
		}
		my $hex=b2h($bin);
		print "0x$hex, ";
	}
	print "\t// char $cnt";
	print sprintf(" '%s'", chr($cnt)) if($cnt<127);
	print "\n";
	$cnt++;
	@z=();
}

# this chars are never defined
for(my $f=128;$f<256;$f++)
{
	print "    0, // char $f\n";
}

print "};\n";

exit(0);

# =================================================================
# =================================================================
# =================================================================

sub rotate {
	my @src = @_;
	my @dst;
	my $x;
	my $y;
	my $v;

	for($y=0;$y<8;$y++)
	{
		for($x=0;$x<8;$x++)
		{
			$v=$src[$y][$x];
			$dst[7-$x][7-$y]=$v;
		}
	}
	return @dst;
}

# http://www.perlmonks.org/?node_id=997236
# converts a binary number in a string to a hexadecimal number
sub b2h
{
	my $num   = shift;
	my $WIDTH = 8;
	my $index = length($num) - $WIDTH;
	my $hex = '';
	do
	{
		my $width = $WIDTH;
		if ($index < 0)
		{
			$width += $index;
			$index = 0;
		}
		my $cut_string = substr($num, $index, $width);
		$hex = sprintf('%x', oct("0b$cut_string")) . $hex;
		$index -= $WIDTH;
	} while ($index > (-1 * $WIDTH));
	return $hex;
}

