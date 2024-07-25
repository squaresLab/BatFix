void substring_conversions ( string str , int k , int b ) {
  for ( int i = 0 ;
  i + k <= str . length ( ) ;
  i ++ ) {
    string sub = str . substr ( i , k ) ;
    int sum = 0 , counter = 0 ;
    for ( int j = sub . length ( ) - 1 ;
    j >= 0 ;
    j -- ) {
      sum = ( int ) ( sum + ( ( sub [ j ] - '0' ) * pow ( b , counter ) ) ) ;
      counter ++ ;
    }
    cout << sum << " " ;
  }
}
