int countSubstrs ( string str , int i , int j , int n ) {
  if ( n == 1 ) return 1 ;
  if ( n <= 0 ) return 0 ;
  int res = countSubstrs ( str , i + 1 , j , n - 1 ) + countSubstrs ( str , i , j - 1 , n - 1 ) - countSubstrs ( str , i + 1 , j - 1 , n - 2 ) ;
  if ( str [ i ] == str [ j ] ) res ++ ;
  return res ;
}
