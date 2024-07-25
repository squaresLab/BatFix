void strToBinary ( string s ) {
  int n = s . length ( ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int val = atoi ( s [ i ] . c_str ( ) ) ;
    string bin = "" ;
    while ( val > 0 ) {
      if ( val % 2 == 1 ) bin += '1' ;
      else bin += '0' ;
      val /= 2 ;
    }
    bin = reverse ( bin . begin ( ) , bin . end ( ) ) ;
    cout << bin << " " ;
  }
}
