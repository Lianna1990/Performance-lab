#ifndef VUSER_WEBSOCKET_BUFFER_HEADER
#define VUSER_WEBSOCKET_BUFFER_HEADER

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive0[] = "";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	// (record-time: 0 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive1[] = "0xc58c4092c0 |0| |";
long WebSocketReceiveLen1   = sizeof(WebSocketReceive1) - 1;	// (record-time: 18 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive2[] = "{\"eventName\":\"ACK\",\"eventData\":null,\"eventGuid\":1571645387,\"nx.Topics\""
                        ":null,\"nx.Destination\":null,\"ACK\":{\"sendTime\":1571645384490,\"endpoint\":\""
                        "https://nexus-websocket-a.intercom.io/pubsub/5-LGnUuWlE3aPNmUNXjJz6kTeaichZTy9mQ"
                        "WrHlzkIeSef5VgkDyD-BtdEup4XBeesZ2QfJA-6xbQMZmwEuI3_4t67eFMOLqYx0OBE\"}}";
long WebSocketReceiveLen2   = sizeof(WebSocketReceive2) - 1;	// (record-time: 292 bytes)

#endif
