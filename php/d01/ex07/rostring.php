#!/usr/bin/php
<?PHP

include("epur_str.php");

function rostring($string)
{
	$string = epur_str($string);
	$array = explode(" ", $string);
	$first = $array[0];
	unset($array[0]);
	$result = implode(" ", $array) . " " . $first;
	return ($result);
}

if ($argc > 1)
{
	$result = rostring($argv[1]);
	echo $result;
}
