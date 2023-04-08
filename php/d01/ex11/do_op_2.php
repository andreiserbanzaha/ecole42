#!/usr/bin/php
<?PHP

if ($argc == 2)
{
	$array = [];
	$argument = $argv[1];
	$argument = trim($argument);
	$pattern = "/^([\+\-]?[0-9]*)[ \t]*([\+\-\*\/\%])[ \t]*([\+\-]?[0-9]*)$/";
	if (!preg_match($pattern, $argument, $array))
		echo "Syntax Error" . PHP_EOL;
	else
	{
		print_r($array);
		if ($array[2] == "+")
			echo $array[1] + $array[3] . PHP_EOL;
		if ($array[2] == "-")
			echo $array[1] - $array[3] . PHP_EOL;
		if ($array[2] == "*")
			echo $array[1] * $array[3] . PHP_EOL;
		if ($array[2] == "/")
			echo $array[1] / $array[3] . PHP_EOL;
		if ($array[2] == "%")
			echo $array[1] % $array[3] . PHP_EOL;
	}
}
else
	echo "Incorrect Parameters" . PHP_EOL;
