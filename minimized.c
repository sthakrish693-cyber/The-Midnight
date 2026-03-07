#include<stdio.h>
#include<conio.h>
#include<unistd.h>
#include <pthread.h>
#include <time.h>

int timer = 777;
int timer_running = 1;

void* timer_thread(void* arg) {
    while(timer >= 0 && timer_running) {
        int mins = timer / 60;
        int secs = timer % 60;
        printf("\033[s");
        printf("\033[1;60H");
        printf("\033[K");
        printf("%02d:%02d", mins, secs);
        printf("\033[u");
        fflush(stdout);
        sleep(1);
        timer--;
    }
    return NULL;
}
void checktimer() {
    if (timer <= 0) {
        printf("\n=============================\n");
        printf("    TIME'S UP! GAME OVER\n");
        printf("  Your files have been encrypted.\n");
        printf("=============================\n");
        exit(0);  // ends the entire program immediately
    }
}

int main()
{
    int i, play_again;
    int timer_running = 1;
    pthread_t tid;
    int playagain = 1;
    int playch = 1;
    int choose;
    char name;

    while(playagain == 1)
    {
    
    		
		
        printf("Enter your name: ");
        scanf(" %c", &name);

        printf("-------------------------------\n");
        printf("11:47 PM. Sunday. Project due at 9 AM.\n");
        printf("You find the tool on a sketchy site. Pop-up ads everywhere. You click anyway.\n");
        getchar();

        printf("Warning: Unverified source. You accept without reading.\n");
        getchar();

        for(i=1;i<=3;i++)
            printf("Installing... Configuring... Finalizing...\n");

        printf("hahaha got you baby :)\n");
        getchar();

        printf("Screen flickers.\n");
        printf(".-\"-.\n");
        printf(" /     \\\n");
        printf("| x   x |\n");
        printf("|   ^   |\n");
        printf(" \\_____/\n");

        printf("Installation Successful. Welcome to MidnightSoft.\n");
        getchar();

        printf("Screen goes black.\n");
        printf("13:00... 12:59... 12:58...\n");
        getchar();

        printf("You downloaded me. Bad move.\n");
        printf("I'm spreading through your system. 13 MINUTES to delete me or everything vanishes.\n");
        printf("Press Enter to start: ");
        getchar();

        pthread_create(&tid, NULL, timer_thread, NULL);
        	while(playch == 1)
    	{

        printf("\n============================================================\n");
        printf("CHAPTER 1: THE HUNT BEGINS\n");
        printf("============================================================\n");
        printf("D3L3T3_M3.exe on desktop. Task Manager blinking. Antivirus quarantined something.\n");
        getchar();
        printf("Three things at once:\n");
        printf(" - Malicious file visible on desktop\n");
        printf(" - Unknown processes in Task Manager\n");
        printf(" - Antivirus claims it caught something\n");
        printf("============================================================\n");
        printf("What do you do first?\n");
        printf("1: Drag D3L3T3_M3.exe to recycle bin.\n");
        printf("2: Open Task Manager, kill suspicious processes.\n");
        printf("3: Check antivirus quarantine folder.\n");
        checktimer();
        scanf(" %d", &choose);

        if(choose == 1)
        {
        	printf("========================\n");
            printf("THE PERSISTENCE TRAP\n");
            printf("You delete D3L3T3_M3.exe. Gone... then it reappears.\n");
            printf("Backup copies in TEMP. Delete all you want, I come back. Learn PERSISTENCE MECHANISMS.\n");
            printf("PENALTY: -2 MINUTES\n");
            timer -= 120;
            printf("Timer: %02d:%02d\n", timer/60, timer%60);
            playch=0;
            
            
        }
        else if(choose == 2)
        {
        	printf("========================\n");
            printf("THE PROCESS HUNTER\n");
            printf("Suspicious processes spotted:\n");
            printf(" svchost32.exe (23%% CPU)\n");
            printf(" windowsupdate.exe (18%% CPU)\n");
            printf(" systemprotect.exe (31%% CPU)\n");
            printf("You kill them. They respawn: chromeupdate.exe, securityscan.exe.\n");
            printf("PROCESS INJECTION. I respawn faster than you kill. Keep looking.\n");
            playch=0;
        }
        else if(choose == 3)
        {
        	printf("========================\n");
            printf("THE DECOY\n");
            printf("Quarantine: adware_installer.exe - low risk. Not the real threat.\n");
            printf("That's a decoy. I use ROOTKIT TECHNIQUES. Your antivirus can't see me.\n");
            playch=0;
        }
        
        else
           {
           	printf("========================\n");
			printf("Invalid. Enter 1, 2, or 3.\n");

		
            printf("\nInorder to play chapter again press 1 else press 0 to quit\n");
            scanf("%d",&playch);
            if(playch == 1)
            {
                
            
                playch = 1; // chapter 
                printf("Restarting the chapter...\n");
            }
            else
            { playch = 0;
              timer_running = 0;
              timer =0;
              printf("Exiting the game. Goodbye!\n");

            }
           }
       }
       checktimer();
	
		printf(".................\n");

        printf("\nPress Enter to continue: ");
    
        while(getchar() != '\n');  // clears the \n left by scanf
getchar();   
while(playch == 1) {


        printf("============================================================\n");
        printf("CHAPTER 2: THE HIDDEN COPIES\n");
        printf("============================================================\n");
        printf("System slowing. Fan loud. Three suspicious locations:\n");
        printf(" 1. C:\\Windows\\Temp - suspicious timestamps\n");
        printf(" 2. C:\\Users\\%c\\AppData\\Roaming - hidden folder\n", name);
        printf(" 3. C:\\Windows\\System32 - some files look wrong\n");
        printf("Where do you focus?\n");
        printf("1: Delete everything in TEMP.\n");
        printf("2: Search files created at 11:47 PM via cmd.\n");
        printf("3: Reboot into Safe Mode.\n");
        checktimer();
        scanf(" %d", &choose);

        if(choose == 1)
        {
        	printf("========================\n");
            printf("TEMP FOLDER TRAP\n");
            printf("You delete 247 temp files. Relief... then:\n");
            printf("I wasn't there. I'm in the WINDOWS REGISTRY. Wasted time.\n");
            printf("PENALTY: -1 MINUTE\n");
            timer -= 60;
            playch=0;
        }
        else if(choose == 2)
        {
        	printf("========================\n");
            printf("TIMESTAMP DETECTIVE\n");
            printf("cmd: dir /s /o:d | find \"11:47\"\n");
            printf("11/17/2024  11:47 PM  svchost32.exe\n");
            printf("11/17/2024  11:47 PM  autorun.reg\n");
            printf("11/17/2024  11:47 PM  D3L3T3_M3.exe\n");
            printf("Found: C:\\Users\\%c\\AppData\\Local\\Temp\\sys_cache\\svchost32.exe\n", name);
            printf("FILE METADATA trick. Found me. But I'm locked - Access Denied.\n");
            playch=0;
        }
        else if(choose == 3)
        {
        	printf("========================\n");
            printf("SAFE MODE GAMBLE\n");
            printf("msconfig > Safe Mode. Rebooting...\n");
            printf("BIOS... Windows Safe Mode loaded.\n");
            printf("PENALTY: -2 MINUTES\n");
            printf("Suspicious processes gone. Malware dormant.\n");
            printf("SAFE MODE works. I can't defend here. Find me fast.\n");
            timer -= 120;
            playch=0;
        }
        else
        {
		
        printf("========================\n");
            printf("Invalid. Enter 1, 2, or 3.\n");
            
            printf("\nInorder to play the chapter again press 1 else press 0 to quit\n");
            scanf("%d",&playch);
            if(playch == 1)
            {
            
                
                playch = 1;
                printf("Restarting the chapter...\n");
            }
            else
            { playch = 0;
              timer_running = 0;
              timer = 0;
              printf("game over ....\n");
              printf("Exiting the game. Goodbye!\n");

            }
        }
    }
    checktimer();
        printf("\nPress Enter to continue: ");
    
        while(getchar() != '\n');  // clears the \n left by scanf
getchar();    
        while(playch == 1) {

        printf("============================================================\n");
        printf("CHAPTER 3: THE REGISTRY TRAP\n");
        printf("============================================================\n");
        printf("Found svchost32.exe in C:\\Users\\%c\\AppData\\Local\\Temp\\sys_cache\\\n", name);
        printf("Delete attempt: Access Denied. Even as admin: File in use.\n");
        printf("Terminal types itself:\n");
        printf("YOU FOUND MY BODY, NOT MY SOUL.\n");
        printf("I'M IN THE WINDOWS REGISTRY. DELETE ME = I RESURRECT.\n");
        printf("FIND MY REGISTRY KEY OR LOSE EVERYTHING.\n");
        printf("1: Force delete via cmd (del /f /q).\n");
        printf("2: Open regedit, find suspicious startup entries.\n");
        printf("3: Download a malware removal tool.\n");
        checktimer();
        scanf(" %d", &choose);

        if(choose == 1)
        {
        	printf("========================\n");
            printf("ZOMBIE FILE\n");
            printf("cd C:\\Users\\%c\\AppData\\Local\\Temp\\sys_cache\\\n", name);
            printf("del /f /q svchost32.exe -> Deleted! Refresh... it's back.\n");
            printf("REGISTRY AUTORUN KEY recreates me. Check HKLM\\...\\CurrentVersion\\Run.\n");
            printf("PENALTY: -1 MINUTE\n");
            timer -= 60;
            playch=0;
        }
        else if(choose == 2)
        {
        	printf("========================\n");
            printf("REGISTRY EXCAVATION\n");
            printf("regedit > HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Run\n");
            printf("Entries: OneDrive, Discord, SecurityHealthSystray... D3L3T3_M3 - WAIT.\n");
            printf("Data: AppData\\Local\\Temp\\sys_cache\\svchost32.exe\n");
            printf("You delete the entry.\n");
            printf("REGISTRY PERSISTENCE broken. File lifeline cut. Now delete the file.\n");
            printf("Timer: %d\n", timer);
            printf("svchost32.exe deleted. Stays gone. But malware isn't done.\n");
            playch=0;
        }
        else if(choose == 3)
        {
        	printf("========================\n");
            printf("DOUBLE INFECTION\n");
            printf("You download MalwareKiller Pro and run it.\n");
            printf("AHAHAHAHAHA\n");
            printf("YOU DOWNLOADED ME TWICE. THAT WAS MY FRIEND.\n");
            printf("ALL FILES ENCRYPTED. YOU FELL FOR SOCIAL ENGINEERING.\n");
            printf("NEVER TRUST RANDOM TOOLS. GAME OVER.\n");
            playch=0;
        }
        else{
        	printf("========================\n");
		
            printf("Invalid. Enter 1, 2, or 3.\n");
        
            printf("\nInorder to play chapter again press 1 else press 0 to quit\n");
            scanf("%d",&playch);
            if(playch == 1)
            {
                //timer = 777;
                //timer_running = 1;
                playch = 1;
                printf("Restarting the chapter ...\n");
            }
            else
            { playch = 0;
              timer_running = 0;
              timer = 0;
                printf("game over ....\n");
              printf("Exiting the game. Goodbye!\n");

            }}
        }
        checktimer();
            
			printf("\nPress Enter to continue: ");
    
           while(getchar() != '\n');  // clears the \n left by scanf
         getchar();    
         while (playch == 1) {

        printf("============================================================\n");
        printf("CHAPTER 4: THE NETWORK SPREAD\n");
        printf("============================================================\n");
        printf("Phone buzzes: New device detected: INFECTED_HOST_02\n");
        printf("I spread to your phone, TV, roommate's laptop.\n");
        printf("Network folder: had 12 files this morning. Now 47.\n");
        printf("1: Disconnect from WiFi.\n");
        printf("2: Delete infected files from shared folder.\n");
        printf("3: Run netstat to monitor connections.\n");
        checktimer();
        scanf(" %d", &choose);

        if(choose == 1)
        {
        	printf("========================\n");
            printf("QUARANTINE\n");
            printf("WiFi disconnected. Red X on network.\n");
            printf("NETWORK SEGMENTATION. Spread stopped. Infected devices still have me.\n");
            printf("Phone has unknown app: SystemUpdate_v2.apk. Contained for now.\n");
            playch=0;
        }
        else if(choose == 2)
        {
        	printf("========================\n");
            printf("DECOY FILES\n");
            printf("Shared folder: family_photos_backup.zip, important_documents.docx, project_final_REAL.zip\n");
            printf("All fake. You delete them.\n");
            printf("Decoys. I use SMB PROTOCOL in network traffic. Invisible without monitoring.\n");
            printf("PENALTY: -1 MINUTE\n");
            timer -= 60;
            playch=0;
        }
        else if(choose == 3)
        {
        	printf("========================\n");
            printf("NETWORK DETECTIVE\n");
            printf("netstat -ano reveals:\n");
            printf("TCP 192.168.1.100:445  -> 192.168.1.105 (roommate) PID 2304\n");
            printf("TCP 192.168.1.100:139  -> 192.168.1.108 (phone)    PID 2304\n");
            printf("TCP 192.168.1.100:8080 -> 157.240.22.35 (external) PID 5892\n");
            printf("Port 445/139 = SMB spread. Port 8080 = C2 server phoning home.\n");
            printf("PORT SCANNING found me. Source: C:\\Users\\%c\\AppData\\Local\\Temp\\sys_cache\\D3L3T3_M3.exe\n", name);
            playch=0;
        }
        else
        {
        	printf("========================\n");
		
            printf("Invalid. Enter 1, 2, or 3.\n");
            
            printf("\nInorder to play the chapter again press 1 else press 0 to quit\n");
            scanf("%d",&playch);
            if(playch == 1)
            {
            
                
                playch = 1;
                printf("Restarting the chapter...\n");
            }
            else
            { playch = 0;
              timer_running = 0;
                timer = 0;
              printf("game over");
              printf("Exiting the game. Goodbye!\n");

            }
        }
    }
    checktimer();
        printf("\nPress Enter to continue: ");
    
           while(getchar() != '\n');  // clears the \n left by scanf
         getchar();    
    
 
        printf("============================================================\n");
        printf("FINAL CHAPTER: THE FINAL DELETION\n");
        printf("============================================================\n");
        printf("Found: C:\\Users\\%c\\AppData\\Local\\Temp\\sys_cache\\D3L3T3_M3.exe\n", name);
        printf("Right-click > Delete: Access Denied.\n");
        printf("File flags: Read-only | Hidden | System | Locked by PID 5892\n");
        printf("L?A?S?T? C?H?A?N?C?E?\n");
        printf("- READ-ONLY | HIDDEN | SYSTEM | PROCESS LOCK\n");
        printf("DELETE ME RIGHT OR LOSE EVERYTHING. 2 MINUTES LEFT.\n");
        printf("Files renaming to .encrypted in background...\n");
        printf("--------------.\n");
        printf("1: attrib -r -h -s + kill PID + Safe Mode + secure wipe.\n");
        printf("2: rd /s /q to delete entire parent folder.\n");
        printf("3: Boot Linux USB, delete from external OS.\n");
        checktimer();
        scanf(" %d", &choose);

        if(choose == 1)
        {
        	printf("========================\n");
            printf("PERFECT VICTORY\n");
            printf("cd C:\\Users\\%c\\AppData\\Local\\Temp\\sys_cache\\\n", name);
            printf("attrib -r -h -s D3L3T3_M3.exe -> attributes cleared.\n");
            printf("Task Manager: kill PID 5892 -> terminated.\n");
            printf("Safe Mode > del /f /q D3L3T3_M3.exe -> deleted.\n");
            printf("cipher /w:C:\\Users\\%c\\AppData\\Local\\Temp\\sys_cache\\ -> wiped.\n", name);
            printf("Recycle Bin emptied. Temp files cleared.\n");
            printf("Timer stops. 00:47 REMAINING.\n");
            printf("IMPRESSIVE. YOU DEFEATED ME.\n");
            printf("YOU LEARNED:\n");
            printf("========================\n");
        }
        else if(choose == 2)
        {
        	printf("========================\n");
            printf("DEEP DELETE\n");
            printf("rd /s /q C:\\Users\\%c\\AppData\\Local\\Temp\\sys_cache\\\n", name);
            printf("Folder deleted.\n");
            printf("========================\n");
        }
        else if(choose == 3)
        {
        	printf("========================\n");
            printf("EXTERNAL OS\n");
            printf("Booted Linux USB. Windows filesystem accessible. Malware not running.\n");
            printf("Navigating to infected folder...\n");
            printf("========================\n");
        }
        else
        {
        	printf("========================\n");
            printf("Invalid. Enter 1, 2, or 3.\n");
            printf("game over ....");
            printf("To0  close but you fucked upp..");
            printf("========================\n");
            
        }
          

        printf("Play again? 1=Yes 0=Quit: ");
        scanf("%d", &playagain);
        if(playagain== 1)
        {
            timer = 777;
            timer_running = 1;
            printf("Restarting game...\n");
        }
        else
        {
            playagain = 0;
            timer_running = 0;
            printf("Goodbye!\n");

        }
 }

    while(timer >= 0)
    { sleep(1);}

    timer_running = 0;
    pthread_join(tid, NULL);

    return 0;
}

