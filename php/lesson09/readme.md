<h3>Vagrant</h3>

<b>Установка виртуальной машины</b>

```bash
$ sudo apt-get install virtualbox
```

<b>Установка менеджера</b>
	
```bash
$ sudo apt-get install vagrant # лучше через сайт 
```

<a href="https://www.vagrantup.com/downloads.html">Официальный сайт vagrant</a>

<b>Скачать образ виртуальной машины, сгенерированный puphpet</b>

<a href="/nginx.zip">На основе Nginx (php7) </a>

```text
* PHP7 + Nginx + MySQL5.6 + composer
* В браузере перейдите по адресу: http://192.168.56.101
* Пользователь mysql dbuser, пароль: 12345
* Файлы для редактирования сайта: путь_до_директории/html/
* $ vagrant ssh # если хотите войти в систему как root
* $ logout # выйти из системы
* $ vagrant halt # выключить виртуальную машину
```

<a href="/nginx.zip">На основе Apache (php5.6) </a>

```text
* PHP5.6 + Apache + MySQL5.6 + composer
* В браузере перейдите по адресу: http://192.168.56.102
* Пользователь mysql dbuser, пароль: 12345
* Файлы для редактирования сайта: путь_до_директории/html/
* $ vagrant ssh # если хотите войти в систему как root
* $ logout # выйти из системы
* $ vagrant halt # выключить виртуальную машину
```
