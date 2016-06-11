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

<b>Разархивируем в нужную папку и устанавливаем</b>
<img src="https://habrastorage.org/files/561/ee0/9c4/561ee09c4e724ff6af51d5abd5af7ad2.png"/>

<b>Материалы</b>
<a href="https://www.vagrantup.com/downloads.html">Vagrant</a>
<a href="https://www.virtualbox.org/wiki/Linux_Downloads">Virtualbox</a>
<a href="https://puphpet.com">puphpet</a>
<a href="http://stackoverflow.com/questions/22752512/vagrant-how-to-access-sync-phpmyadmin-on-host-machine">Vagrant, how to access/sync phpmyadmin on host machine</a>