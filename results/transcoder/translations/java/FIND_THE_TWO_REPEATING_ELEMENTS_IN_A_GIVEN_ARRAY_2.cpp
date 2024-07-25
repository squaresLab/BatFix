void printRepeating ( int arr [ ] , int size ) {
  int xor = arr [ 0 ] ;
  int set_bit_no ;
  int i ;
  int n = size - 2 ;
  int x = 0 , y = 0 ;
  for ( i = 1 ;
  i < size ;
  i ++ ) {
    xor ^= arr [ i ] ;
  }
  for ( i = 1 ;
  i <= n ;
  i ++ ) {
    xor ^= i ;
  }
  set_bit_no = ( xor & ~ ( xor - 1 ) ) ;
  for ( i = 0 ;
  i < size ;
  i ++ ) {
    int a = arr [ i ] & set_bit_no ;
    if ( a != 0 ) {
      x = x ^ arr [ i ] ;
    }
    else {
      y = y ^ arr [ i ] ;
    }
  }
  for ( i = 1 ;
  i <= n ;
  i ++ ) {
    int a = i & set_bit_no ;
    if ( a != 0 ) {
      x = x ^ i ;
    }
    else {
      y = y ^ i ;
    }
  }
  cout << "The two reppeated elements are :" << endl ;
  cout << x << " " << y << endl ;
}
