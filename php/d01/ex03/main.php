#!/usr/bin/php
<?PHP

include ("ft_split.php");

if ($argc == 1)
	print_r(ft_split("Hello   World AAA"));
else
	print_r(ft_split($argv[1]));
