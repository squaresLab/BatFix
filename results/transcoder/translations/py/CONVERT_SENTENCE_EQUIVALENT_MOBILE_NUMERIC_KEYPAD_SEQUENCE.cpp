string printSequence ( string arr , string input ) {
  int n = input . length ( ) ;
  string output = "" ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( input [ i ] == ' ' ) || ( input [ i ] == '\t' ) ) {
      output = output + "0" ;
    }
    else {
      int position = ( int ) input [ i ] - ( int ) 'A' ;
      output = output + arr [ position ] ;
    }
  }
  return output ;
}
