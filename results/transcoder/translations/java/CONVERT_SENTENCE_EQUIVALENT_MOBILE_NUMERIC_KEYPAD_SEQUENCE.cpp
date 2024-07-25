string printSequence ( string arr [ ] , string input ) {
  string output = "" ;
  int n = input . length ( ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( input [ i ] == ' ' ) {
      output = output + "0" ;
    }
    else {
      int position = input [ i ] - 'A' ;
      output = output + arr [ position ] ;
    }
  }
  return output ;
}
