//week06_4b_array_x_y_int_N_for_mousePressed_recycle_for_k
//從week06-4a 延伸過來,利用for(int k=i;k<N-1;k++)回收飼料
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
    y[i]+=2;
    if(y[i]>400){//飼料掉到外面要回收
      for(int k=i;k<N-1;k++){
      x[k]=x[k+1];
      y[k]=y[k+1];
    }
    N--;//回收完1顆飼料
    }
    println(N);
 }
}
  void  mousePressed() {
  x[N]=mouseX;//放到中間
  y[N]=mouseY;//放到中間
  N++;//增加1顆飼料
}
