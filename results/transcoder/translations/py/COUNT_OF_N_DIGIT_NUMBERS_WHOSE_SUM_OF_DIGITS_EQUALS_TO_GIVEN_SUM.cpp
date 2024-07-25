int findCount ( int n , int sum ) {
  int start = pow ( 10 , n - 1 ) ;
  ;
  int end = pow ( 10 , n ) - 1 ;
  int count = 0 ;
  int i = start ;
  while ( ( i <= end ) && ( i != 0 ) ) {
    int cur = 0 ;
    int temp = i ;
    while ( ( temp != 0 ) && ( temp != sum ) ) {
      cur += temp % 10 ;
      temp = temp / 10 ;
    }
    if ( ( cur == sum ) && ( i != 0 ) ) {
      count = count + 1 ;
      i += 9 ;
    }
    else {
      i = i + 1 ;
    }
  }
  cout << count << endl ;
  return count ;
}
