private : void findCount ( int n , int sum ) {
  int start = ( int ) pow ( 10 , n - 1 ) ;
  int end = ( int ) pow ( 10 , n ) - 1 ;
  int count = 0 ;
  int i = start ;
  while ( i < end ) {
    int cur = 0 ;
    int temp = i ;
    while ( temp != 0 ) {
      cur += temp % 10 ;
      temp = temp / 10 ;
    }
    if ( cur == sum ) {
      count ++ ;
      i += 9 ;
    }
    else {
      i ++ ;
    }
  }
  cout << count << endl ;
}
