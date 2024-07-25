int superSeq ( string X , string Y , int m , int n ) {
  if ( m == 0 ) return n ;
  if ( n == 0 ) return m ;
  if ( X [ m - 1 ] == Y [ n - 1 ] ) return 1 + superSeq ( X , Y , m - 1 , n - 1 ) ;
  return 1 + min ( superSeq ( X , Y , m - 1 , n ) , superSeq ( X , Y , m , n - 1 ) ) ;
}
