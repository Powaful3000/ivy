package commands

import (
	"fmt"
)


/*
    *    util/commands/clear.go
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


func ClearScreenCommands() {
	fmt.Println("\033[H\033[2J")
}