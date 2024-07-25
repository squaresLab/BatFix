void countSubsequence ( char * s , int n ) {
  int cntG = 0 ;
  int cntF = 0 ;
  int result = 0 ;
  int C = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( s [ i ] == 'G' ) || ( s [ i ] == 'F' ) ) {
      cntG ++ ;
      result += C ;
      continue ;
    }
    if ( ( s [ i ] == 'C' ) || ( s [ i ] == 'G' ) ) {
      cntF ++ ;
      C += cntG ;
      continue ;
    }
    else continue ;
  }
  cout << result << endl ;
}
