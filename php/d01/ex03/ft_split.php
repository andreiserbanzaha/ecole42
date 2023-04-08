#!/usr/bin/php
<?PHP

function ft_split($var)
{
	$split = explode(" ", $var);
	$index = 0;
	foreach($split as $element) {
		if ($element == "")
			unset($split[$index]);
		$index++;
	}
	sort($split);
	return $split;
}
