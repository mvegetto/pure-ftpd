#define MSG_TLS_CIPHER_FAILED "SSL/TLS: Invalid TLSCipherSuite specified '%s'"
#define MSG_TIMEOUT "Timeout"
#define MSG_CAPABILITIES "Unable to switch capabilities"
#define MSG_CLIENT_CLOSED_CNX "Client closed the connection"
#define MSG_CLIENT_READ_ERR "Read error from the client"
#define MSG_CANT_OPEN_CNX "Can't open connection"
#define MSG_CANT_CREATE_DATA_SOCKET "Can't create the data socket"
#define MSG_DEBUG_CLIENT_IS "The client address is"
#define MSG_SYNTAX_ERROR_IP "Syntax error in IP address"
#define MSG_PORT_SUCCESSFUL "PORT command successful"
#define MSG_ONLY_IPV4V6 "Only IPv4 and IPv6 are supported (1,2)"
#define MSG_ONLY_IPV4 "Only IPv4 is supported (1)"
#define MSG_TIMEOUT_PARSER "Timeout - try typing a little faster next time"
#define MSG_LINE_TOO_LONG "Line too long"
#define MSG_LOG_OVERFLOW "The client tried to overflow the command line buffer"
#define MSG_GOODBYE "Goodbye. You uploaded %llu and downloaded %llu kbytes."
#define MSG_DEBUG_COMMAND "Command"
#define MSG_IS_YOUR_CURRENT_LOCATION "is your current location"
#define MSG_NOT_LOGGED_IN "You aren't logged in"
#define MSG_AUTH_UNIMPLEMENTED "This security scheme is not implemented"
#define MSG_NO_FILE_NAME "No file name"
#define MSG_NO_DIRECTORY_NAME "No directory name"
#define MSG_NO_RESTART_POINT "No restart point"
#define MSG_ABOR_SUCCESS "Since you see this ABOR must've succeeded"
#define MSG_MISSING_ARG "Missing argument"
#define MSG_GARBAGE_FOUND "Garbage found after value"
#define MSG_VALUE_TOO_LARGE "Value too large"
#define MSG_IDLE_TIME "Idle time set to %lu seconds"
#define MSG_SITE_HELP "The following SITE commands are recognized"
#define MSG_BAD_CHMOD "Invalid permissions"
#define MSG_UNKNOWN_EXTENSION "is an unknown extension"
#define MSG_XDBG_OK "XDBG command succeeded, debug level is now %d"
#define MSG_UNKNOWN_COMMAND "Unknown command"
#define MSG_TIMEOUT_NOOP "Timeout (no operation for %lu seconds)"
#define MSG_TIMEOUT_DATA "Timeout (no new data for %lu seconds)"
#define MSG_SLEEPING "Zzz..."
#define MSG_ALREADY_LOGGED "You're already logged in"
#define MSG_ANY_PASSWORD "Any password will work"
#define MSG_ANONYMOUS_LOGGED "Anonymous user logged in"
#define MSG_ANONYMOUS_LOGGED_VIRTUAL "Anonymous user logged in the virtual FTP"
#define MSG_USER_OK "User %s OK. Password required"
#define MSG_CANT_DO_TWICE "We can't do that in the current session"
#define MSG_UNABLE_SECURE_ANON "Unable to set up secure anonymous FTP"
#define MSG_BANDWIDTH_RESTRICTED "Your bandwidth usage is restricted"
#define MSG_NO_PASSWORD_NEEDED "Any password will work"
#define MSG_NOTRUST "Sorry, but I can't trust you"
#define MSG_WHOAREYOU "Please tell me who you are"
#define MSG_AUTH_FAILED "Login authentication failed"
#define MSG_AUTH_TOOMANY "Too many authentication failures"
#define MSG_NO_HOMEDIR "Home directory not available - aborting"
#define MSG_NO_HOMEDIR2 "%s does not exist or is unreachable"
#define MSG_START_SLASH "Starting in /"
#define MSG_USER_GROUP_ACCESS "User %s has group access to"
#define MSG_FXP_SUPPORT "This server supports FXP transfers"
#define MSG_RATIO "You must respect a %u:%u (UL/DL) ratio"
#define MSG_CHROOT_FAILED "Unable to set up a secure chroot() jail"
#define MSG_CURRENT_DIR_IS "OK. Current directory is %s"
#define MSG_CURRENT_RESTRICTED_DIR_IS "OK. Current restricted directory is %s"
#define MSG_IS_NOW_LOGGED_IN "%s is now logged in"
#define MSG_CANT_CHANGE_DIR "Can't change directory to %s"
#define MSG_PATH_TOO_LONG "Path too long"
#define MSG_CANT_PASV "You cannot use PASV on IPv6 connections. Use EPSV instead."
#define MSG_CANT_PASSIVE "Unable to open a passive connection"
#define MSG_PORTS_BUSY "All reserved TCP ports are busy"
#define MSG_GETSOCKNAME_DATA "Unable to identify the local data socket"
#define MSG_GETPEERNAME "Unable to identify the local socket"
#define MSG_INVALID_IP "Sorry, invalid address given"
#define MSG_NO_EPSV "Please use an IPv6-conformant client with EPSV support"
#define MSG_BAD_PORT "Sorry, but I won't connect to ports < 1024"
#define MSG_NO_FXP "I won't open a connection to %s (only to %s)"
#define MSG_FXP "FXP transfer: from %s to %s"
#define MSG_NO_DATA_CONN "No data connection"
#define MSG_ACCEPT_FAILED "The connection couldn't be accepted"
#define MSG_ACCEPT_SUCCESS "Accepted data connection"
#define MSG_CNX_PORT_FAILED "Could not open data connection to port %d"
#define MSG_CNX_PORT "Connecting to port %d"
#define MSG_ANON_CANT_MKD "Sorry, anonymous users are not allowed to create directories"
#define MSG_ANON_CANT_RMD "Sorry, anonymous users are not allowed to remove directories"
#define MSG_ANON_CANT_RENAME "Anonymous users are not allowed to move/rename files"
#define MSG_ANON_CANT_CHANGE_PERMS "Anonymous users can not change perms"
#define MSG_GLOB_NO_MEMORY "Out of memory during globbing of %s"
#define MSG_PROBABLY_DENIED "(This probably means \"Permission denied\")"
#define MSG_GLOB_READ_ERROR "Read error during globbing of %s"
#define MSG_GLOB_NO_MATCH "No match for %s in %s"
#define MSG_CHMOD_FAILED "Could not change perms on %s"
#define MSG_CHMOD_SUCCESS "Permissions changed on %s"
#define MSG_CHMOD_TOTAL_FAILURE "Sorry, but I couldn't change any permission"
#define MSG_ANON_CANT_DELETE "Anonymous users can not delete files"
#define MSG_ANON_CANT_OVERWRITE "Anonymous users may not overwrite existing files"
#define MSG_DELE_FAILED "Could not delete %s"
#define MSG_DELE_SUCCESS "Deleted %s%s%s%s"
#define MSG_DELE_TOTAL_FAILURE "No file deleted"
#define MSG_LOAD_TOO_HIGH \
    "The load was %3.2f when you connected. We do not allow downloads\n" \
    "by anonymous users when the load is that high. Uploads are always\n" \
    "allowed."
#define MSG_OPEN_FAILURE "Can't open %s"
#define MSG_OPEN_FAILURE2 "Can't open that file"
#define MSG_STAT_FAILURE "Can't find file size"
#define MSG_STAT_FAILURE2 "Can't check for file existence"
#define MSG_REST_TOO_LARGE_FOR_FILE "Restart offset %lld is too large for file size %lld."
#define MSG_REST_RESET "Restart offset reset to 0"
#define MSG_NOT_REGULAR_FILE "I can only retrieve regular files"
#define MSG_NOT_MODERATED \
    "This file has been uploaded by an anonymous user. It has not\n" \
    "yet been approved for downloading by the site administrators."
#define MSG_RATIO_DENIAL \
    "Sorry, but the upload/download ratio is %u:%u .\n" \
    "You currently uploaded %llu Kb and downloaded %llu Kb.\n" \
    "Please upload some goodies and try leeching later."
#define MSG_NO_MORE_TO_DOWNLOAD "Nothing left to download"
#define MSG_WINNER "The computer is your friend. Trust the computer"
#define MSG_KBYTES_LEFT "%.1f kbytes to download"
#define MSG_ABORTED "Transfer aborted"
#define MSG_DATA_WRITE_FAILED "Error during write to data connection"
#define MSG_DATA_READ_FAILED "Error during read from data connection"
#define MSG_MMAP_FAILED "Unable to map the file into memory"
#define MSG_WRITE_FAILED "Error during write to file"
#define MSG_TRANSFER_RATE_M "%.3f seconds (measured here), %.2f Mbytes per second"
#define MSG_TRANSFER_RATE_K "%.3f seconds (measured here), %.2f Kbytes per second"
#define MSG_TRANSFER_RATE_B "%.3f seconds (measured here), %.2f bytes per second"
#define MSG_SPACE_FREE_M "%.1f Mbytes free disk space"
#define MSG_SPACE_FREE_K "%f Kbytes free disk space"
#define MSG_DOWNLOADED "downloaded"
#define MSG_REST_NOT_NUMERIC "REST needs a numeric parameter"
#define MSG_REST_ASCII_STRICT "Reply marker must be 0 in ASCII mode"
#define MSG_REST_ASCII_WORKAROUND "Restarting at %lld. But we're in ASCII mode"
#define MSG_REST_SUCCESS "Restarting at %lld"
#define MSG_SANITY_DIRECTORY_FAILURE "Prohibited directory name"
#define MSG_SANITY_FILE_FAILURE "Prohibited file name: %s"
#define MSG_MKD_FAILURE "Can't create directory"
#define MSG_MKD_SUCCESS "The directory was successfully created"
#define MSG_RMD_FAILURE "Can't remove directory"
#define MSG_RMD_SUCCESS "The directory was successfully removed"
#define MSG_TIMESTAMP_FAILURE "Can't get a time stamp"
#define MSG_MODE_ERROR "Only ASCII and binary modes are supported"
#define MSG_CREATE_FAILURE "Unable to create file"
#define MSG_ABRT_ONLY "ABRT is the only legal command while uploading"
#define MSG_UPLOAD_PARTIAL "partially uploaded"
#define MSG_REMOVED "removed"
#define MSG_UPLOADED "uploaded"
#define MSG_GMTIME_FAILURE "Couldn't get the local time"
#define MSG_TYPE_8BIT_FAILURE "Only 8-bit bytes are supported, we're not 10 years ago"
#define MSG_TYPE_UNKNOWN "Unknown TYPE"
#define MSG_TYPE_SUCCESS "TYPE is now"
#define MSG_STRU_FAILURE "Only F(ile) is supported"
#define MSG_MODE_FAILURE "Please use S(tream) mode"
#define MSG_RENAME_ABORT "Aborting previous rename operation"
#define MSG_RENAME_RNFR_SUCCESS "RNFR accepted - file exists, ready for destination"
#define MSG_FILE_DOESNT_EXIST "Sorry, but that file doesn't exist"
#define MSG_RENAME_ALREADY_THERE "RENAME Failed - destination file already exists"
#define MSG_RENAME_NORNFR "Need RNFR before RNTO"
#define MSG_RENAME_FAILURE "Rename/move failure"
#define MSG_RENAME_SUCCESS "File successfully renamed or moved"
#define MSG_NO_SUPERSERVER "Please run pure-ftpd within a super-server (like tcpserver)"
#define MSG_NO_FTP_ACCOUNT "Unable to find the 'ftp' account"
#define MSG_CONF_ERR "Configuration error"
#define MSG_NO_VIRTUAL_FILE "Missing virtual users file name"
#define MSG_ILLEGAL_THROTTLING "Illegal value for throttling"
#define MSG_ILLEGAL_TRUSTED_GID "Illegal trusted gid for chroot"
#define MSG_ILLEGAL_USER_LIMIT "Illegal user limit"
#define MSG_ILLEGAL_FACILITY "Unknown facility name"
#define MSG_ILLEGAL_CONFIG_FILE_LDAP "Invalid LDAP configuration file"
#define MSG_ILLEGAL_LOAD_LIMIT "Illegal load limit"
#define MSG_ILLEGAL_PORTS_RANGE "Illegal ports range"
#define MSG_ILLEGAL_LS_LIMITS "Illegal 'ls' limits"
#define MSG_ILLEGAL_FORCE_PASSIVE "Illegal forced IP for passive connections"
#define MSG_ILLEGAL_RATIO "Illegal upload/download ratio"
#define MSG_ILLEGAL_UID_LIMIT "Illegal uid limit"
#define MSG_ILLEGAL_OPTION "Unknown run-time option"
#define MSG_LDAP_MISSING_BASE "Missing LDAPBaseDN in the LDAP configuration file"
#define MSG_LDAP_WRONG_PARMS "Wrong LDAP parameters"
#define MSG_NEW_CONNECTION "New connection from %s"
#define MSG_WELCOME_TO "Welcome to"
#define MSG_MAX_USERS "%lu users (the maximum) are already logged in, sorry"
#define MSG_NB_USERS "You are user number %u of %u allowed."
#define MSG_WELCOME_TIME "Local time is now %02d:%02d. Server port: %u."
#define MSG_ANONYMOUS_FTP_ONLY "Only anonymous FTP is allowed here"
#define MSG_RATIOS_EVERYONE "RATIOS ARE ENABLED FOR EVERYONE:"
#define MSG_RATIOS_ANONYMOUS "ANONYMOUS USERS ARE SUBJECT TO AN UL/DL RATIO:"
#define MSG_RATIOS_RULE "to download %u Mb, uploading %u Mb of goodies is mandatory."
#define MSG_INFO_IDLE_M "You will be disconnected after %lu minutes of inactivity."
#define MSG_INFO_IDLE_S "You will be disconnected after %lu seconds of inactivity."
#define MSG_CANT_READ_FILE "Sorry, we were unable to read [%s]"
#define MSG_LS_TRUNCATED "Output truncated to %u matches"
#define MSG_LS_SUCCESS "%u matches total"
#define MSG_LOGOUT "Logout."
#define MSG_AUTH_FAILED_LOG "Authentication failed for user [%s]"
#define MSG_ILLEGAL_UMASK "Invalid umask"
#define MSG_STANDALONE_FAILED "Unable to start a standalone server"
#define MSG_NO_ANONYMOUS_LOGIN "This is a private system - No anonymous login"
#define MSG_ANONYMOUS_ANY_PASSWORD "Any password will work"
#define MSG_MAX_USERS_IP "Too many connections (%lu) from this IP"
#define MSG_ACTIVE_DISABLED "Active mode is disabled"
#define MSG_TRANSFER_SUCCESSFUL "File successfully transferred"
#define MSG_NO_DISK_SPACE "Disk full - please upload later"
#define MSG_OUT_OF_MEMORY "Out of memory"
#define MSG_ILLEGAL_TRUSTED_IP "Illegal trusted IP address"
#define MSG_NO_ASCII_RESUME "ASCII resume is unsafe, please delete the file first"
#define MSG_UNKNOWN_ALTLOG "Unknown logging format"
#define MSG_ACCOUNT_DISABLED "Can't login as [%s]: account disabled"
#define MSG_SQL_WRONG_PARMS "Wrong SQL parameters"
#define MSG_ILLEGAL_CONFIG_FILE_SQL "Invalid SQL configuration file"
#define MSG_SQL_MISSING_SERVER "Missing server in the SQL configuration file"
#define MSG_SQL_DOWN "The SQL server seems to be down"
#define MSG_ILLEGAL_QUOTA "Invalid quota"
#define MSG_QUOTA_FILES "%llu files used (%d%%) - authorized: %llu files"
#define MSG_QUOTA_SIZE "%llu Kbytes used (%d%%) - authorized: %llu Kb"
#define MSG_QUOTA_EXCEEDED "Quota exceeded: [%s] won't be saved"
#define MSG_AUTH_UNKNOWN "Unknown authentication method"
#define MSG_PDB_BROKEN "Unable to read the indexed puredb file (or old format detected) - Try pure-pw mkdb"
#define MSG_ALIASES_ALIAS "%s is an alias for %s."
#define MSG_ALIASES_UNKNOWN "Unknown alias %s."
#define MSG_ALIASES_BROKEN_FILE "Damaged aliases file"
#define MSG_ALIASES_LIST "The following aliases are available :"
#define MSG_PERUSER_MAX "I can't accept more than %lu connections as the same user"
#define MSG_IPV6_OK "IPv6 connections are also welcome on this server."
#define MSG_TLS_INFO "SSL/TLS: Enabled %s with %s, %d secret bits cipher"
#define MSG_TLS_WEAK "SSL/TLS: Cipher too weak"
#define MSG_TLS_NEEDED "Sorry, cleartext sessions and weak ciphers are not accepted on this server.\n" \
    "Please reconnect using SSL/TLS security mechanisms."
#define MSG_ILLEGAL_CHARSET "Illegal charset"
#define MSG_TLS_NO_CTX "SSL/TLS: Context not found. Exiting."
#define MSG_PROT_OK "Data protection level set to \"%s\""
#define MSG_PROT_PRIVATE_NEEDED "Data connection cannot be opened with this PROT setting."
#define MSG_PROT_UNKNOWN_LEVEL "Protection level %s not understood. Fallback to \"%s\""
#define MSG_PROT_BEFORE_PBSZ "PROT must be preceded by a successful PBSZ command"
#define MSG_WARN_LDAP_USERPASS_EMPTY "LDAP returned no userPassword attribute, check LDAP access rights."
#define MSG_LDAP_INVALID_AUTH_METHOD "Invalid LDAPAuthMethod in the configuration file. Should be 'bind' or 'password'."
