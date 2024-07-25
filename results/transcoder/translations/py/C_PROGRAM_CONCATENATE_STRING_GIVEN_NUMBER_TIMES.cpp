string repeat ( string s , int n ) {
  string s1 = s ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    s += s1 ;
  }
  return s ;
}
