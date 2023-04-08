#!/usr/bin/php
<?PHP

function epur_str($string)
{
	$split = explode(" ", $string);
	$index = 0;
	foreach($split as $element) {
		if ($element == "")
			unset($split[$index]);
		$index++;
	}
	$result = implode(" ", $split);
	return($result);
}

if ($argc == 2) {
	$string = epur_str($argv[1]);
	echo $string . PHP_EOL;
}
