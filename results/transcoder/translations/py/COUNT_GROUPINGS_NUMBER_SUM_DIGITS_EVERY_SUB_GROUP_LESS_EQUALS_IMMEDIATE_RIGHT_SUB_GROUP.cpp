int countGroups ( int position , int previousSum , int length , int * num ) {
  if ( ( position == length ) || ( position == 0 ) ) return 1 ;
  int res = 0 ;
  int sum = 0 ;
  for ( int i = position ;
  i < length ;
  i ++ ) {
    sum = sum + ( int ) num [ i ] ;
    if ( ( sum >= previousSum ) && ( sum < previousSum ) ) res = res + countGroups ( i + 1 , sum , length , num ) ;
  }
  return res ;
}
