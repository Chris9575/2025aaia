//week06_4a_array_x_y_int_N_for_mousePressed_recycle_for_k
//從week04-5 延伸過來,利用for迴圈
void setup() {
  size(600, 400);//開啟400x400的視窗
}
float [] x=new float[100];//有100個x和100個y
float [] y=new float[100];//Java的陣列宣告
int N=0;//飼料有N個
void draw() {
  background(#C0FFEE);
  for(int i=0;i<N;i++){
    ellipse(x[i], y[i], 8, 8);
  }
}
  void  mousePressed() {
  x[N]=mouseX;//放到中間
  y[N]=mouseY;//放到中間
  N++;//增加1顆飼料
}
