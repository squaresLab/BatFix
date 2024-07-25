int getOddOccurrence ( int arr [ ] ) {
  int res = 0 ;
  for ( int i = 0 ;
  i < arr . length ;
  i ++ ) {
    res = res ^ arr [ i ] ;
  }
  return res ;
}
