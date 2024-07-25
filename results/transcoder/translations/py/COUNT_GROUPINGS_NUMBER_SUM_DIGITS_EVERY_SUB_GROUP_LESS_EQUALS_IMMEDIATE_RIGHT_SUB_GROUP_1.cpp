int countGroups ( int position , int previousSum , int length , char * num ) {
  if ( ( position == length ) || ( position == 0 ) ) return 1 ;
  if ( ( dp [ position ] [ previousSum ] != - 1 ) && ( dp [ position ] [ previousSum ] != 0 ) ) return dp [ position ] [ previousSum ] ;
  dp [ position ] [ previousSum ] = 0 ;
  int res = 0 ;
  int sum = 0 ;
  for ( int i = position ;
  i < length ;
  i ++ ) {
    sum += ( ( int ) num [ i ] - ( int ) '0' ) ;
    if ( ( sum >= previousSum ) && ( sum < length ) ) res += countGroups ( i + 1 , sum , length , num ) ;
  }
  dp [ position ] [ previousSum ] = res ;
  return res ;
}
