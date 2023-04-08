#!/usr/bin/php
<?PHP

function do_add($a, $b)
{
	echo ($a + $b) . PHP_EOL;
}

function do_substraction($a, $b)
{
	echo ($a - $b) . PHP_EOL;
}

function do_multiplication($a, $b)
{
	echo ($a * $b) . PHP_EOL;
}

function do_division($a, $b)
{
	echo ($a / $b) . PHP_EOL;
}

function do_mod($a, $b)
{
	echo ($a % $b) . PHP_EOL;
}

if ($argc == 4)
{
	if (trim($argv[2]) == "+")
		do_add($argv[1], $argv[3]);
	if (trim($argv[2]) == "-")
		do_substract($argv[1], $argv[3]);
	if (trim($argv[2]) == "*")
		do_multiplication($argv[1], $argv[3]);
	if (trim($argv[2]) == "/")
		do_division($argv[1], $argv[3]);
	if (trim($argv[2]) == "%")
		do_mod($argv[1], $argv[3]);
}
else
	echo "Incorrect Parameters" . PHP_EOL;
