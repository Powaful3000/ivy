package commands

import (
	"fmt"
	config "ivy/util/config"
)


/*
    *    util/commands/execute.go
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


func RemoteExecuteCommands() {
	var command string	
	fmt.Printf("\n[Enter Command]#> ")
	fmt.Scanln(&command)
	for i := 0; i < len(config.Bots); i++ {
		config.Bots[i].Write([]byte(command))
	}
}