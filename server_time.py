# Lets say there are 5 servers and sendTime array is [1,3,1,3,4], then the following are the best way to pass messages from each server to master server
# The first server can pass message to server 2, and then message is passed to server 5 from server 2, so it needed 2 seconds to reach master server 5.
# The second server can pass messages to server 5 directly, which means it needed only 1 second to reach master server.
# The third server can pass messages to server 2, and then server 2 can pass message to server 5 from server 2, So, message needed 2 seconds to reach master server.
# The fourth server can pass message to server 1, and then message is passed to server 2, and then to server 5, So, message needed 3 seconds to reach master server.
# The fifth server is the master server, it doesnt need any time to pass message to itself.



