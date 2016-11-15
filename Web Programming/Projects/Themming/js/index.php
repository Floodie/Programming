<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8"/>
	<title>Document</title>
</head>
<body>
<?php
    $link = mysqli_connect('localhost','floodie42','1234','floodie42_tableforphp');//Подключение
    if(mysqli_connect_errno())echo 'Mistake in connecting to DataBase';//Проверка ошибок
    mysqli_set_charset($link, "utf8");//Установка кодировки
    
    $sql = "SELECT * FROM `words`";//Выбираем таблицу
    $result = mysqli_query($link, $sql);//Вставляем таблицу в $result
    $data = mysqli_fetch_all($result, MYSQLI_ASSOC);//Делаем приличный вид
    $length_array = count($data);
    
    $user_word='Яблоко';
    for($i=0;$i<$length_array;$i++)
    {
        if(($user_word==$data[$i][russian_word])||($user_word==$data[$i][japanese_word]))
        	{
        		echo "<pre>";
		        echo $data[$i][russian_word].' - '.$data[$i][japanese_word];
		        echo "</pre>";
        	}
    }
    
    /*
    echo "<pre>";
    var_dump($data);
    echo "</pre>";
    */
?>
</body>
</html>