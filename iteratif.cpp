int fibr(int num) {
   int x = 0;
   int y = 1;
   int z = 0;
   for (int i = 0; i < num; i++) {
      z = x + y;
      x = y;
      y = z;
   }
   return x;
}
