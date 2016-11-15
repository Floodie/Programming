<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<link rel="stylesheet" href="css/style.css">
	<title>Themming</title>
</head>
<body>
<div class="page-wrapper">
	<div class="page">
		<input id="indd" type="text">
		<div class="buttons" onclick="trn(indd.value, indd.value)"><div class="button">Найти</div></div>
		<div id="found">
			<div class="words">
				<div class="russian">Яблоко</div>
				<div class="japanese">Ринго</div>
			</div>
		</div>
	</div>
</div>
<script src="js/script.js"></script>
<?php
require "db.php";
?>
</body>
</html>