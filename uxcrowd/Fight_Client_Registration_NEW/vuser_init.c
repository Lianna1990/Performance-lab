char * generate(){	
	char alfabet[26] = "abcdefghijklmnopqrstuvwxyz";
	char login[10]="";
	int i;
	strcpy(login, "");
	for (i=0; i<5; i++) {		
		login[i]=alfabet[rand()%26];
	}
	return login;
}

long trans;
double trans_time;

long int status, s_time;
    
int http_info_download, info_return_code;
long duration_time;
    
char buffer[1024];
char file;
char filename;
long FileVarriable;  
char FileLocation[1024] = "C:\\Users\\student\\Desktop\\script1\\reg_client\\logins_clients.txt";
int randNumber; 

vuser_init()
{
	return 0;
}
