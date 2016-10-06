document.write(); - Выводим, что угодно.
onclinck="" - пишеться в тэгэ, в HTML документе, там можно написать простой Java-script, который будет работать при нажатие на этот объект.
alert() - выводит сообщение.
console.log() - вывод чего-то в консоль
confirm("Ready to move on?"); - Диаологовое окно
setTimeout(function, 3000); - запуск функции через 3000 милисекунд...
confirm("text"); - выводит поле с вопросом и двумя кнопками, ответом являеться true или false
window.location = "http://google.com/"; или "main_page.html" - можно перейти на другой сайт или страницу...
"любое значение".style."любое правило CSS" = "чему угодно";, можно даже вессти, что поменять...
document.getElementById("hell").className = 'wop'; - присваиваем какому-то элементу с ID какой-то класс...
window.onload = function(){} - выполняеться после загрузки страцницы.
document.getElementById("line"+i).addEventListener("click", hide, false); - добовляет event к тэгу.

//ОБЪЕКТЫ стр. 25
		var book{
			topic = "Text",
			fat: true
		};
		book.topic => "Text"
		book["fat"] = > true
		book.New = "MyText" - Создать новое свойство присваиваньем
		book.otherNew = {} - Создает пустой объект без свойств.


//МАССИВЫ стр. 25-26
		var primes =  [2,3,4,5]; - Массив из 4 значений
		primes[0] - выводит первый элемент массива
		primes.length - длинна массива
		primes[primes.length - 1] - выводит последний элемент массива
		primes[4] = 9 - Добавить новый элемент присваиваньем
		primes[4] = 11 - Изменить значние элемента
		primes.push(1,2,3); - Добовляет в массив элементы.
		primes.reverse(); - переставляет элементы в обратном порядке
		var empty = []; - Пустой массив
		empty.length => 0 //Просто логика XD

//ОБЪЕКТЫ С МАСИВОМ xD
		var book={
			topic: [[2,3],[4,5]],
			fat:[true,false]
		};		


//МАССИВ С ОБЪЕКТАМИ xD
		var array = 
		[{x: 8,y:9}, {x:2,y:1}]

//Эта штука вычесляет корень, но почему-то так сложно
		function Point(x,y){
			this.x = x;
			this.y = y;
		}

		var p = new Point(1,1);

		Point.prototype.r = function()
		{
			return Math.sqrt(this.x * this.x + this.y * this.y);
		}


//Очень крутая штука
		function debug(msg)//Создает функцию с переменной msg
		{
			var log = document.getElementById("debuglog"); 		// проверяет по id, есть ли элемент с id="debug log"
			if(!log)//если нету = false
			{
				log = document.createElement("div");			//создает тэг <div>
				log.id = "debuglog";							//присваивает себе id
				log.innerHTML = "<h1>Debug Log</h1>";			//Начальное содержимое
				document.body.appendChild(log);					//Добавить в конец документа
			}
		
			var pre = document.createElement("pre");			//создать тэг <pre>
			var text = document.createTextNode(msg);			//обернуть msg в текстовый узел
			pre.appendChild(text);								//добавить текст в тэг <pre>
			log.appendChild(pre);								//добавить тэг <pre> в элемент log
		}

//Если нажать, то пропадет(нужно 20 div-ов с line1 - line20)
window.onload = function(){
			for(var i=1;i<21;i++)
			{
				document.getElementById("line"+i).addEventListener("click", hide, false);
			}
		}


//КОНЕЦ 30 страницы