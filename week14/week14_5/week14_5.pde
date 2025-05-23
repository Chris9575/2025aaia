//week14_5_sound
//Sketch-Library-Manage Libraries...
//安裝Sound後,開始寫
//選單File-Example 選 Libraries核心函示庫Sound-Soundfile-JumbleSounfile
//在自己寫
import processing.sound.*;//Java使用Sound外掛
SoundFile music,sword,monkey,intro;//宣告一個變數music
void setup(){
  size(640,360);//記得要把音樂檔,拉到程式裡
  music=new SoundFile(this,"In Game Music.mp3");
  monkey=new SoundFile(this,"Monkey 1.mp3");
  intro=new SoundFile(this,"Intro Song_Final.mp3");
  sword=new SoundFile(this,"sword slash.mp3");
  music.play();//play()播放
  }
  void mousePressed(){//按下mouse
    if(mouseButton==LEFT) sword.play();//按下左鍵(揮劍)
    else monkey.play();//按下另一個鍵(雙猴子叫)
   }
   void draw(){
     //裡面是空白
     }
