package commands

import (
	"fmt"
)


/*
    *    util/commands/help.go
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


func HelpMenuCommands() {
	fmt.Println(`
    ┌─────────┬────────────────────────────────────────┬───────────────┐
    │ Command │              Description               │ Usage Example │
    ├─────────┼────────────────────────────────────────┼───────────────┤
    │ help    │ Displays the available commands        │ help          │
    │ bots    │ Displays the amount of bots            │ bots          │
    │ exec    │ Sends a system command to all the bots │ exec          │
    │ clear   │ Clears the screen                      │ clear         │
    │ exit    │ Exits the botnet                       │ exit          │
    └─────────┴────────────────────────────────────────┴───────────────┘
    ~ Written by 0x80000000`)
}