package commands

import (
	"fmt"
	config "ivy/util/config"
)


/*
    *    util/commands/bots.go
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


func ListBotsCommands() {
	fmt.Printf("Bots -> %d\n", config.BotCount)
}