package server

import (
	"fmt"
)


/*
    *    util/server/interface.go
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


func Interface() {
	var command string
	for {
		fmt.Print("\nuser@ivy~# ")
		fmt.Scanln(&command)
		if CommandHandler(command) == false {
			fmt.Printf("Error: Command '%s' was not found!\n", command)
		}
	}
}