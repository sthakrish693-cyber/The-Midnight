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
        
        printf("\033[s");           // Save cursor position
        printf("\033[1;60H");       // Move to row 1, column 60
        printf("\033[K");           // Clear to end of line
        printf("%02d:%02d", mins, secs);
        printf("\033[u");           // Restore cursor position
        fflush(stdout);
        
        sleep(1);
        timer--;
    }
    return NULL;
}

int main()
{
    int i,n,play_again;
    int timer_running = 1;
    pthread_t tid;
    int playagain = 1;
    int choose;
    char name;
    
    
    
    while(playagain == 1)
    {
        printf("enter your name :");
        scanf("%c",&name);
    
    printf("-------------------------------\n");
    printf("It's 11:47 PM on a Sunday night.\n");
    
    
    printf("You're hunched over your laptop in your dimly lit dorm room\n");
    printf("desperately searching for a software tool\n");
    printf("you need for tomorrow's final year project presentation.\n ");
    printf("Your professor expects it at 9 AM sharp,\n and you're nowhere near done.\n");
     printf("After scrolling through dozens of sketchy forums \n");
     getchar();

printf("you finally find it—a file hosted on some obscure file-sharing site.\n");
    printf("The download button is surrounded by pop-up ads,\n");
    printf("but you're too tired to care. You click.\n");
    printf("---------------------------------------------...\n");
    printf("you start the installation process.\n");
    printf("A warning pops up: This software is from an unverified source. Proceed at your own risk.\n");
    getchar();
    printf("You hesitate for a moment, then click Accept without reading the terms and conditions.\n");
printf("Installation begins. A series of cryptic messages flash across the screen:\n");
getchar();


for(i=1;i<=3;i++)
{
printf("Installing core components...\n");
printf("Configuring system settings...\n");
printf("Finalizing installation...\n");
}


    printf("hahaha got you baby :)\n"); 
    getchar();


printf("Your screen flickers. Suddenly, a message pops up:\n");





printf(".-"      "-.\n");
printf("          /              / \n");
    printf("         |    .--. .--. |\n");
    printf("         |   (    Y    )|\n");
    printf("         |    '--' '--' |\n");
    printf("         |   .--------. |\n");
    printf("         |  / .-----. / |\n");
    printf("         |  ||  x x  || |\n");
    printf("         |  ||   ^   || |\n");
    printf("         |  / '---' /  |\n");
    printf("         |   '-----'   |\n");
    printf("        |             |\n");
    printf("        /|             |/\n");
    printf("       /|             ||\n");
    printf("      //|        |_|\n");
    printf("    //  |  |     |    |  |\n");
    printf("    ||   |  |  |  |    |   ||\n");
    printf("    ||   |  ||  |    |   ||\n");
    printf("    ||   |        |    |   ||\n");
    printf("   ||   ||    |   ||\n");
    printf("    ||                 |   ||\n");
    printf("    ||_|   ||\n");
    printf("    |/__|\n");
    

printf("Installation Successful. Welcome to MidnightSoft.\n");
getchar();
printf("As you stare at the message, your computer screen goes black.\n");

printf("A chilling voice echoes from the speakers:\n");
printf("13:00 12:59 12:58\n");
getchar();

printf("Hello, careless one. You shouldn't have downloaded me.\n");
printf("I'm hiding, replicating, encrypting. You have THIRTEEN MINUTES to find me and delete me permanently. If you fail, everything you've ever created... vanishes. \n");
printf("The clock is ticking. Good luck.\n");
printf("Your heart races. Your mouse freezes for a second. This can't be real... can it?\n");
printf("But the timer keeps counting down.\n");
printf(" You have no choice. You have to find this malware and delete it before time runs out.\n");
 printf("Press Enter to continue :::");
 getchar();

 pthread_create(&tid, NULL, timer_thread, NULL);
 printf("CHAPTER 1: THE HUNT BEGINS\n");
  printf("============================================================\n");
  printf("timer sounds click..  tik tik :\n");
  printf("Your hands are shaking as you stare at the desktop \n"); 
    printf("The file D3L3T3_M3.exe sits there, mocking you with its simple icon \n");
    printf("Your task manager icon is blinking in the taskbar.\n");
   printf("A notification appears: \"File moved to Quarantine folder.\n");
      printf("============================================================\n");
getchar();
     printf("You notice three things happening simultaneously:\n");
  printf(" The malicious file is clearly visible on your desktop\n");
  printf(" Multiple unknown processes are running in your task manager\n");
  printf("Your antivirus claims it quarantined something\n");
  printf("============================================================\n");

printf("You need to act fast. What do you do first?\n");
printf("OPTION 1: Try to delete the file directly from the desktop by dragging it to the recycle bin.\n");
printf("OPTION 2: Open Task Manager to identify and kill the suspicious processes running in the background.\n");
printf("OPTION 3: Check your antivirus quarantine folder to see what was caught");
scanf(" %d", &choose);
if (choose == 1)
{
   
     printf("THE PERSISTENCE TRAP\n");
     printf("You grab your mouse and drag D3L3T3_M3.exe to the recycle bin. The file disappears with a satisfying whoosh sound.\n");
     printf("You exhale. Maybe this was easier than—\n");
     printf("PING.\n");
     printf("The file reappears on your desktop.\n");
     printf("A message flashes on your screen:\n");
     printf("LOL. Did you really think it would be that easy? \nI've already created backup copies of myself in your system's TEMP folder. Every time you delete me, I'll just come back. You need to understand PERSISTENCE MECHANISMS if you want to beat me. But thanks for wasting time.\n");
     printf("--------------------------------\n");
     printf("PENALTY: -2 MINUTES\n");

     timer -= 120;
     printf("Timer: %02d:%02d\n", timer / 60, timer % 60);
     printf("Your screen glitches. Files start randomly opening and closing. You realize you need a better approach.\n");
     
}
else if(choose == 2)
{
     printf("OUTCOME: THE PROCESS HUNTER\n");
     printf("You press Ctrl + Shift + Esc and Task Manager springs to life. Under the Processes tab, you see dozens of programs running. Most look normal: Chrome, Discord, Spotify...\n");
     printf("But then you spot them—three suspicious entries:\n");
     printf("	svchost32.exe (Using 23% CPU)\n");
     printf("	windowsupdate.exe (Using 18% CPU)\n");
     printf("  systemprotect.exe (Using 31% CPU)\n");

     printf("These names look almost legitimate, but something's off. Real system processes don't use this much CPU randomly.\n");
     printf("You right-click and select End Task on all three.\n");
     printf("They disappear... for exactly three seconds.\n");
     printf("Then they respawn. New processes with different names appear:\n");
     printf("	chromeupdate.exe\n");
     printf("	securityscan.exe\n");
     printf("A message appears:\n");
     printf("Nice try, detective. You've learned about PROCESS INJECTION and PARENT-CHILD PROCESSES. I can create new processes faster than you can kill them. \n");
     printf("The processes keep multiplying, but at least now you know this thing is actively running. You need to find where it's hiding.\n");
     
}
 else if(choose == 3)
{
    printf("OUTCOME: THE DECOY\n");
    printf("You open your antivirus software and navigate to the Quarantine folder. Inside, you find a file:\n");
    printf("\"adware_installer.exe\" - Quarantined 3 minutes ago.\n");
    printf("You open the details. It's flagged as low-risk adware, not the malware terrorizing you right now.\n");
    printf("A message pops up:\n");
    printf("That's just a decoy I threw at your antivirus to keep it busy. Your security software is looking at the wrong thing while I spread through your system. I'm using ROOTKIT TECHNIQUES\n");
    
	printf("You realize the real malware is still out there, invisible to your security tools. You need to dig deeper into your file system manually.\n");
	
}
else
{
    printf("Invalid choice. Please enter 1, 2, or 3\n");
}
printf("press enter to continue:");
getchar();

printf("============================================================\n");
printf("CHAPTER 2: THE HIDDEN COPIES\n");
printf("============================================================\n");


printf("Your computer is getting slower. The fan is spinning loudly. You can feel the malware spreading like digital cancer through your folders.\n");
printf("You know it's hiding somewhere in your file system, creating copies of itself to ensure it can't be easily removed. You need to find these hidden copies and delete them before time runs out.\n");
printf("You open File Explorer and start investigating. Three locations stand out:\n");
printf("1.	C:\\Windows\\Temp - Filled with temporary files, some with suspicious recent timestamps\n");
printf("2.	C:\\Users\\%c\\AppData\\Roaming - A hidden folder containing application data\n",name);
printf("3.	C:\\Windows\\System32 - Critical system files... but some look wrong\n");
printf("The timer ticks down. You need to search these locations, but you can't check all three. Where do you focus?\n");
printf("______________\n");
printf("YOUR SECOND CHOICE:\n");
printf("OPTION 1: Delete everything in the TEMP folder to clear out any malware copies hiding there.\n");
printf("OPTION 2: Use Command Prompt to search for files created at exactly 11:47 PM (when you downloaded the malware).\n");
printf("OPTION 3: Restart your computer in Safe Mode to prevent the malware from running while you hunt for it.\n");
scanf(" %d", &choose);
if (choose == 1)
{
    printf("OUTCOME: THE TEMP FOLDER TRAP\n");
    
printf("You navigate to C:\\Windows\\Temp\\ and see hundreds of files—most with cryptic names like tmp8A3F.tmp and cab_7B2E.\n");
printf("You select all and hit delete.\n");
printf("Are you sure you want to permanently delete 247 items?\n");
printf("Yes. Delete everything.\n");
printf("The folder empties. You feel a moment of relief.\n");
printf("Then a new message appears:\n");
printf("\"You just deleted a bunch of innocent temporary files. I wasn't even in that folder. I'm smarter than that. I've embedded myself in your WINDOWS REGISTRY. Even if you found my file, I'd just regenerate from the registry keys. You're wasting precious time.\n");
printf("Suddenly, ghost files start appearing across your desktop—dozens of fake error messages, corrupted icons, flickering windows.\n");
printf("PENALTY: -1 MINUTE\n");
timer -= 60;

printf("The chaos is overwhelming. You need to think smarter, not harder.\n");

}
else if(choose == 2)
{

    printf("OUTCOME: THE TIMESTAMP DETECTIVE\n");
    printf("You open Command Prompt as Administrator. Your fingers fly across the keyboard:\n");
    printf("cd C:\n");
    printf("dir /s /o:d | find \"11:47\".\n");
    printf("The command searches your entire C: drive for files created or modified at 11:47 PM, sorted by date.\n");
    printf("Results scroll across the black terminal window:\n");   

printf("11/17/2024  11:47 PM    2,487,296  svchost32.exe\n");
printf("11/17/2024  11:47 PM       15,872  autorun.reg\n");
printf("11/17/2024  11:47 PM    1,024,000  D3L3T3_M3.exe\n");
printf("There it is. svchost32.exe in C:\\Users\\%c\\AppData\\Local\\Temp\\sys_cache\\.\n", name);
printf("The filename is almost identical to the legitimate Windows process \"svchost.exe\"—but with \"32\" added to trick you.\n");
printf("A message appears:\n");
printf("\"Impressive. You've learned about FILE METADATA and TIMESTAMPS. You found one of my copies. But I'm not just a file anymore... I'm in your system's DNA now. Try to delete me. I dare you.\"\n");
printf("You navigate to the folder and right-click the file to delete it.\n");
printf("Access Denied. This file is currently in use by another process.\n");
printf("Of course. It's running. You need to stop it first.\n");

}
else if(choose == 3)
{
   printf("OUTCOME: THE SAFE MODE GAMBLE\n");
   printf("You decide to reboot into Safe Mode—a diagnostic mode where Windows loads only essential drivers and services, preventing most malware from running.\n");
   printf("You press Windows + R, type msconfig, and select Safe Mode with Networking.\n");
   printf("Your computer will restart in 10 seconds...\n");
   printf("The screen goes black.\n");
   printf("Restarting...\n");

printf("BIOS loading...\n");
printf("Windows Safe Mode\n");
printf("The screen looks different—lower resolution, no wallpaper, just the words \"Safe Mode\" in each corner.\n");
printf("But the timer is still there.\n");

printf("PENALTY: -2 MINUTES (Time lost during reboot)\n");
printf("However, you notice something important: Most of the suspicious processes are gone. The malware isn't running in Safe Mode.\n");
printf("A message appears:\n");
printf("Clever move. You've used SAFE MODE BOOT OPTIONS to create a controlled environment. I can't actively defend myself here. But I'm still embedded in your system. Find me before you reboot, or I'll activate again.\n");
printf("This is your chance. The malware is dormant. You can hunt it down without it fighting back.\n");
timer -= 120;
    
}
else
{
    printf("Invalid choice. Please enter 1, 2, or 3.\n");
}

printf("============================================================\n");
printf("CHAPTER 3:  THE REGISTRY TRAP\n");
printf("============================================================\n");
printf("You've located the suspicious file: svchost32.exe hiding in C:\\Users\\%c\\AppData\\Local\\Temp\\sys_cache\\..\n", name);
printf("You try to delete it.\n");
printf("Access Denied.\n");
printf("You try again with administrator privileges.\n");
printf("Cannot delete. File is in use.\n");
printf("Even in Safe Mode (if you chose that route), the file refuses to die.\n");
printf("Then your screen flickers, and a terminal window opens automatically, text typing itself:\n");
printf("YOU FOUND MY BODY, BUT NOT MY SOUL.\n");
printf("I'VE EMBEDDED MYSELF IN YOUR WINDOWS REGISTRY.\n");
printf("EVEN IF YOU DELETE ME, I'LL RESURRECT ON YOUR NEXT BOOT.\n");
printf("FIND MY REGISTRY KEY OR LOSE EVERYTHING.\n");
printf("The registry—the Windows database that stores system settings, including which programs run at startup.\n");
printf("You have three options to deal with this:\n");
printf("______________\n");
printf("YOUR THIRD CHOICE:\n");
printf("OPTION 1: Force delete the file using Command Prompt with admin privileges (del /f /q).\n");
printf("OPTION 2: Open Registry Editor (regedit) and manually search for suspicious startup entries.\n");
printf("OPTION 3: Quickly download a third-party malware removal tool from the internet.\n");
scanf(" %d", &choose);
if (choose == 1)
{
 printf("OUTCOME: THE ZOMBIE FILE\n");
 printf("You open Command Prompt as Administrator and type:\n");
 printf("cd C:\\Users\\%c\\AppData\\Local\\Temp\\sys_cache\\\n", name);
 printf("del /f /q svchost32.exe\n");
 printf("\"File deleted successfully.\"\n");
 printf("Yes! You did it!\n");
 printf("You check the folder. The file is gone.\n");
 printf("You refresh.\n");
 printf("...\n");
 printf("The file reappears.\n");
 printf("A message flashes:\n");
 printf("I TOLD YOU. I'm not just a file anymore. I've created a REGISTRY AUTORUN KEY that recreates me every time you delete me. Check: HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Run. I'll wait.\n");
 printf("PENALTY: -1 MINUTE\n");
 timer -= 60;

 printf("You realize you're fighting a hydra—cut off one head, two more grow back. You need to kill the root.\n");
}
else if(choose == 2)
{
 printf("OUTCOME: THE REGISTRY EXCAVATION\n");
 printf("You press Windows + R and type: regedit\n");
 printf("The Registry Editor opens—a maze of folders and keys that control every aspect of Windows.\n");
 printf("You navigate to:\n");
 printf("HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Run\n");
 printf("This is where programs add themselves to run automatically at startup.\n");
 printf("You scan the entries:\n");
 printf("•	OneDrive - Legitimate\n");
 printf("•	Discord - Legitimate\n");
 printf("•	SecurityHealthSystray - Legitimate\n");
 printf("•	D3L3T3_M3 - ...Wait.\n");
 printf("There it is.\n");
 printf("Name: D3L3T3_M3\n");
 printf("Data: \"C:\\Users\\AppData\\Local\\Temp\\sys_cache\\svchost32.exe\"\n");
 printf("This is the persistence mechanism. Every time Windows starts, this registry key tells it to run the malware.\n");
 printf("You right-click and delete the registry entry.\n");
 printf("\"Are you sure you want to delete this value?\"\n");
 printf("Yes.\n");
 printf("The entry disappears.\n");
 printf("A message appears:\n");
 printf("You've learned about REGISTRY PERSISTENCE and AUTORUN KEYS. Smart. You've cut my lifeline. But I'm not dead yet. I've already spread beyond this computer. Delete the file now, quickly, before I finish my final trick...\n");
 printf("watch timer: %d\n", timer);
 printf("You rush back to the file location and delete svchost32.exe. This time, it stays deleted.\n");
 printf("But the malware isn't done yet.\n");
}
else if(choose == 3)
{
   printf("OUTCOME: THE DOUBLE INFECTION\n");
   printf("Panicking, you open your browser and search: free malware removal tool\n");
   printf("The first result looks promising: MalwareKiller Pro - Free Download\n");
   printf("You click the download button.\n");
   printf("The file downloads: MalwareKiller_Setup.exe\n");
   printf("You double-click to run it.\n");
   printf("The screen goes black.\n");
   printf("Red text appears:\n");
   printf("AHAHAHAHAHA\n");
   printf("YOU DOWNLOADED ME... TWICE.\n");
   printf("THAT WASN'T A REMOVAL TOOL.\n");
   printf("THAT WAS MY FRIEND.\n");
   printf("GAME OVER.\n");
   printf("Your entire screen fills with error messages. Files start deleting themselves. Your desktop wallpaper changes to a ransomware note:\n");
   printf("ALL YOUR FILES HAVE BEEN ENCRYPTED.\n");
   printf("YOU FELL FOR SOCIAL ENGINEERING.\n");
   printf("ALWAYS VERIFY YOUR SOURCES.\n");
   printf("GAME OVER.\n");
   printf("GAME OVER - YOU LOST\n");
   printf("You learned the hard way: Never download random \"security tools\" from untrusted sources. Attackers often disguise malware as antivirus software, preying on desperate victims. \n");

}
else{
    printf("Invalid choice. Please enter 1, 2, or 3.\n");
}
 printf("============================================================\n");
 printf("CHAPTER 4: THE NETWORK SPREAD\n");
    printf("============================================================\n");
    printf("Just when you think you've won, your phone buzzes on the desk beside you.\n");
printf("You glance at it. A notification:\n");
printf("New device detected on network: INFECTED_HOST_02\n");
printf("Your blood runs cold.\n");
printf("A new message appears on your laptop:\n");
printf("Congratulations on finding my registry key. But did you really think I'd limit myself to just ONE device? While you were hunting me, I spread across your WiFi network. Your phone. Your smart TV. Your roommate's laptop that's connected to the same network. I'm on ALL of them now. Delete me from EVERY device, or I'll encrypt everything through your shared network folder.\n");
printf("You check your network connections:\n");
printf("•	Your Phone - Connected via WiFi\n");
printf("•	Living Room TV - Connected\n");
printf("•	Roommate's Laptop - Online\n");
printf("•	Network Shared Folder - Contains 47 files... wait, it had 12 files this morning.\n");
printf("The malware is using your home network to spread like wildfire.\n");
printf("______________\n");
printf("YOUR FOURTH CHOICE:\n");
printf("OPTION A: Immediately disconnect from WiFi to stop the malware from spreading further.\n");
printf("OPTION B: Check the shared network folder and delete all the infected files you find there.\n");
printf("OPTION C: Use a network monitoring tool to identify exactly which devices are infected and what they're doing.\n");
printf("______________\n");
scanf(" %d", &choose);
if (choose == 1)    {
printf("OUTCOME: THE QUARANTINE\n");
printf("You click your WiFi icon and select \"Disconnect.\n");
printf("Your internet drops. The network icon shows a red X.\n");
printf("The malware's terminal window appears:\n");
printf("Smart move. You've learned about NETWORK SEGMENTATION and LATERAL MOVEMENT. By disconnecting, you've stopped me from spreading to more devices. But the devices I've already infected still have copies of me. You've bought yourself time, but you haven't won yet.\n");
printf("TIMER PAUSES FOR 30 SECONDS\n");
printf("Your phone buzzes again. You unlock it and see a strange app you've never installed: SystemUpdate_v2.apk\n");
printf("The malware is on your phone too. But at least it can't spread further while you're offline.\n");

printf("You need to finish this. Now.\n");
printf("______________\n");
}
else if(choose == 2)
{
printf("OUTCOME: THE DECOY FILES\n");
printf("You open your shared network folder:\n");
printf("\\NETWORK\\SharedFiles\\\n");
printf("Inside, you see dozens of new files:\n");
printf("•	family_photos_backup.zip\n");
printf("•	important_documents.docx\n");   
printf("•	project_final_REAL.zip\n");
printf("They all have today's date. They're all fake.\n");
printf("You select them all and hit delete.\n");
printf("A message appears:\n");
printf("Those were just DECOYS to waste your time. The real copies of me aren't sitting in a shared folder like an amateur. I'm using the SMB PROTOCOL to hide in your network traffic itself, spreading through packets invisible to you. You can't see me unless you monitor the network.\n");
printf("PENALTY: -1 MINUTE\n");
timer -= 60;
printf("Ghost files keep appearing. You realize you're fighting shadows while the real threat moves unseen.\n");
}
else if(choose == 3)
{
 printf("OUTCOME: THE NETWORK DETECTIVE\n");
 printf("You open Command Prompt and type:\n");
 printf("netstat -ano\n");
 printf("The command shows all active network connections on your computer.\n");
 printf("Results flood the screen:\n");
 printf("TCP    192.168.1.100:445    192.168.1.105:52847    ESTABLISHED    2304\n");
 printf("TCP    192.168.1.100:139    192.168.1.108:49234    ESTABLISHED    2304  \n");
 printf("TCP    192.168.1.100:8080   157.240.22.35:443      ESTABLISHED    5892\n");
 printf("You recognize your local IP: 192.168.1.100\n");
 printf("But two other local IPs are connected to you:\n");
 printf("•	192.168.1.105 - Your roommate's laptop\n");
 printf("•	192.168.1.108 - Your phone\n");
 printf("And there's an external connection: 157.240.22.35 - An unknown server.\n");
 printf("Port 445 and 139 are SMB ports—used for file sharing. The malware is using these to spread across devices.\n");
 printf("Port 8080 connection to an external IP... that's the malware's Command & Control (C2) server. It's phoning home.\n");
 printf("A message appears:\n");
 printf("\"Excellent work. You've learned about PORT SCANNING, TCP/IP CONNECTIONS, and MALWARE C2 SERVERS. You now know I'm communicating with an external server and spreading through your network. But the original file? Still on YOUR computer. Find it and kill it before I finish uploading your data.\"\n");
 printf("You trace Process ID 2304 and 5892 back to the source:\n");
 printf("C:\\Users\\%c\\AppData\\Local\\Temp\\sys_cache\\D3L3T3_M3.exe\n", name);
 printf("There it is. The ORIGINAL file. The source of everything.\n");
 
}
else{
    printf("Invalid choice. Please enter 1, 2, or 3.\n");
}
printf("============================================================\n");
printf("FINAL CHAPTER:THE FINAL DELETION\n");
printf("============================================================\n");
printf("============================================================\n");
printf("You've found it. The original malware file:");
printf("C:\\Users\\%c\\AppData\\Local\\Temp\\sys_cache\\D3L3T3_M3.exe\n", name);
printf("It's sitting there, unassuming, only 2.4 MB. Such a small file causing so much chaos.\n");
printf("You right-click. Select Delete.\n");
printf("Cannot delete. Access is denied.\n");
printf("You check the file properties:\n");
printf("•	Read-only\n");
printf("•	Hidden\n");
printf("•	 System file\n");
printf("•	 Currently in use by process ID 5892\n");
printf("The malware has protected itself with every defense Windows offers.\n");
printf("A final message appears, the text glitching and distorting:\n");
printf("L?A?S?T? ?C?H?A?N?C?E?.?\n");
printf("I?'?V?E? ?P?R?O?T?E?C?T?E?D? ?M?Y?S?E?L?F? ?W?I?T?H?:?\n");
printf("- READ-ONLY ATTRIBUTE\n");
printf("- HIDDEN FILE ATTRIBUTE\n");
printf("- SYSTEM FILE DESIGNATION  \n");
printf("- ACTIVE PROCESS LOCK\n");
printf("DELETE ME PROPERLY... OR WATCH EVERYTHING VANISH.\n");
printf("YOUR FINAL PROJECT. YOUR PHOTOS. YOUR LIFE.\n");
printf("2 MINUTES REMAIN.\n");
printf("CHOOSE WISELY.\n");
printf("Your screen flickers. In the background, you can see files being renamed to .encrypted extensions, one by one, slowly crawling through your folders.\n");
printf("You have ONE chance to get this right.\n");
printf("YOUR FINAL CHOICE:\n");
printf("OPTION 1: Use attrib command to remove all file protections, then reboot to Safe Mode and delete the file permanently with secure wiping.\n");
printf("OPTION 2: Delete the entire parent folder using Command Prompt with administrator privileges and force flags.\n");
printf("OPTION 3: Restart with a bootable Linux USB drive and delete the Windows file from an external operating system.\n");
printf("______________\n");
scanf(" %d", &choose);
if (choose == 1)
{
 printf("OUTCOME: PERFECT VICTORY\n");
 printf("You take a deep breath and open Command Prompt as Administrator.\n");
 printf("First, remove the file attributes:\n");
 printf("cd C:\\Users\\%c\\AppData\\Local\\Temp\\sys_cache\\\n",name);
 printf("attrib -r -h -s D3L3T3_M3.exe\n");
 printf("File attributes removed.\n");
 printf("The file is no longer Read-only, Hidden, or marked as a System file.\n");
 printf("But it's still running. You need to stop the process first.\n");
 printf("You open Task Manager, find Process ID 5892, and kill it.\n");
 printf("\"Process terminated.\"\n");
 printf("Now, to be absolutely sure, you reboot into Safe Mode (if not already there).\n");
 printf("Once in Safe Mode, you return to Command Prompt:\n");
 printf("cd C:\\Users\\%c\\AppData\\Local\\Temp\\sys_cache\\\n",name);
 printf("del /f /q D3L3T3_M3.exe\n");
 printf("\"File deleted.\"\n");
 printf("You check the folder. It's gone.\n");
 printf("But you're not done. You need to make sure it can't be recovered from free disk space.\n");
 printf("You run:\n");
 printf("cipher /w:C:\\Users\\%c\\AppData\\Local\\Temp\\sys_cache\\\n",name);
 printf("This command performs a secure wipe of free space, overwriting deleted data so it can't be recovered.\n");
 printf("Wiping free space... 100%... .complete.\n");
 printf("Finally, you empty the Recycle Bin and delete all temporary files.\n");
 printf("The timer stops.\n");
 printf("00:47 REMAINING\n");
 printf("The screen flashes white. The malware's terminal window appears one last time:\n");
 printf("IMPRESSIVE.\n");
 printf("YOU'VE DEFEATED ME.\n");
 printf("YOU LEARNED:");
}
else
    if(choose == 2)
    {
    printf("OUTCOME: THE DEEP DELETE\n");
    printf("You decide to delete the entire parent folder to ensure all traces of the malware are removed.\n");
    printf("You open Command Prompt as Administrator and type:\n");
    printf("rd /s /q C:\\Users\\%c\\AppData\\Local\\Temp\\sys_cache\\\n",name);
    printf("Folder deleted.\n");    
    }
    else if(choose == 3)
    {
    printf("OUTCOME: THE EXTERNAL OS\n");
    printf("You restart your computer and boot from a Linux USB drive. The Linux environment loads, giving you access to your Windows file system without the malware running.\n");
    printf("You navigate to the infected folder:\n");
    }
    else
    {
        printf("Invalid choice. Please enter 1, 2, or 3.\n");
    }



  printf("Inorder to play again press 1 else press 0 to quit\n");
    scanf("%d",&playagain);
    if(playagain == 1)
    {
        timer = 777;
        timer_running = 1;
        playagain = 1;
        printf("Restarting the game...\n");
    }
    else
    { playagain = 0;
      timer_running = 0;
      printf("Exiting the game. Goodbye!\n");

    }

 
   
}
while(timer >= 0) {
        sleep(1);
 }
  timer_running = 0;
    pthread_join(tid, NULL);
      
  return 0;
}



    