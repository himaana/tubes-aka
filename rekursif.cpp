int fibo_r(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fibo_r(x-1)+fibo_r(x-2));
   }
}
