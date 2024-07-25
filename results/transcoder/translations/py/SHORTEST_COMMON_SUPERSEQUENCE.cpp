int superSeq ( int X [ ] , int Y [ ] , int m , int n ) {
  if ( ( ! m ) || ( ! n ) ) return n ;
  if ( ( X [ m - 1 ] == Y [ n - 1 ] ) && ( X [ m ] == Y [ n - 1 ] ) ) return 1 + superSeq ( X , Y , m - 1 , n - 1 ) ;
  return 1 + min ( superSeq ( X , Y , m - 1 , n ) , superSeq ( X , Y , m , n - 1 ) ) ;
}
