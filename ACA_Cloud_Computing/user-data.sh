#!/bin/sh
# ACA Cloud Computing Asssignment
# Tasks:
# - Setup Ubuntu OS
# - Installing Apache
# - Install MySQL
# - Install phpMyAdmin

# Installing Apache

# update package indexes & install apache.
apt-get update && apt-get install -y apache2

# allow external access to apache (ie access from Internet connections).
ufw allow 'Apache'

# allow HTTP & HTTPS connections.
ufw allow 80/tcp
ufw allow 443/tcp

# start apache.
systemctl start apache2

# enable apache so it starts on boot.
systemctl enable apache2

# # [Debug] get internal IP address.
# hostname -I

# Install MySQL

# install mysql.
apt-get install -y mysql-server

# start & enable mysql so it starts on boot.
systemctl start mysql && systemctl enable mysql

# Install phpMyAdmin

# install php & dependencies.
apt-get install -y php libapache2-mod-php php-mysql

# install phpMyAdmin.
apt-get install -y phpmyadmin

# change authentication plugin from auth_socket to caching_sha2_password. sets password to 123. this is mandatory.
mysql -u root -se "ALTER USER 'root'@'localhost' IDENTIFIED WITH caching_sha2_password BY '123';"
mysql -u root "-p123" -se "FLUSH PRIVILEGES;"

# # [Debug] get authentication plugin.
# mysql -u root "-p123" -se "SELECT user,plugin FROM mysql.user;"

# restart apache2 to load phpMyAdmin.
systemctl restart apache2

# NOTE: phpMyAdmin default user: root, password: 123.
