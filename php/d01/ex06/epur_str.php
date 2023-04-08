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
