	char alfabet[26] = "abcdefghijklmnopqrstuvwxyz";
	char login[10]="";
	int i;
	
	char * generateString5(){		
		strcpy(login, ""); //������� ������(���������)
		
		for (i=0; i<5; i++) {
			
			login[i]=alfabet[rand()%26];
		}
	
		return login;
	}
