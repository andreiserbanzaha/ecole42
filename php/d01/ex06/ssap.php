#!/usr/bin/php
<?PHP

include ("epur_str.php");

unset($argv[0]);
$res = [];
$index = 0;
foreach($argv as $elem)
{
	$inner_argv = explode(" ", epur_str($elem));
	$inner_index = $index;
	foreach ($inner_argv as $inner_elem)
	{
		$res[$inner_index] = epur_str($inner_elem);
		$inner_index++;
	}
	$index += $inner_index;
}
sort($res);
print_r ($res);
