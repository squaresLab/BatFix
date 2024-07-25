void maximizecube ( int l , int b , int h ) {
  int side = gcd ( l , gcd ( b , h ) ) ;
  int num = ( int ) ( l / side ) ;
  num = ( int ) ( num * b / side ) ;
  num = ( int ) ( num * h / side ) ;
  cout << side << " " << num << endl ;
}
