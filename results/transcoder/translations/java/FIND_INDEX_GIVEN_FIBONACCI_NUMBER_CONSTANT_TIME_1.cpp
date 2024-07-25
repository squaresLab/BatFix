int findIndex ( int n ) {
  float fibo = 2.078087F * float ( log ( n ) ) + 1.672276F ;
  return round ( fibo ) ;
}
