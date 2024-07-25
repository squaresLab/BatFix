void substring_conversions ( string str , int k , int b ) {
  int i = 0 , sum = 0 , counter = k - 1 ;
  for ( i = 0 ;
  i < k ;
  i ++ ) {
    sum = ( int ) ( sum + ( ( str [ i ] - '0' ) * pow ( b , counter ) ) ) ;
    counter -- ;
  }
  cout << sum << " " ;
  int prev = sum ;
  sum = 0 ;
  counter = 0 ;
  for ( ;
  i < str . length ( ) ;
  i ++ ) {
    sum = ( int ) ( prev - ( ( str [ i - k ] - '0' ) * pow ( b , k - 1 ) ) ) ;
    sum = sum * b ;
    sum = sum + ( str [ i ] - '0' ) ;
    cout << sum << " " ;
    prev = sum ;
    counter ++ ;
  }
}
