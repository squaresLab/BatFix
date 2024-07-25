int sumAtKthLevel ( char * tree , int k , int * i , int level ) {
  if ( ( * i ) == '(' ) {
    * i ++ = '(' ;
    if ( ( * i ) == ')' ) return 0 ;
    int sum = 0 ;
    if ( ( level == k ) && ( * i ) == ')' ) sum = atoi ( ( * i ) ) ;
    * i ++ = '\0' ;
    int leftsum = sumAtKthLevel ( tree , k , * i , level + 1 ) ;
    * i ++ = '\0' ;
    int rightsum = sumAtKthLevel ( tree , k , * i , level + 1 ) ;
    * i ++ = '\0' ;
    return sum + leftsum + rightsum ;
  }
  return 0 ;
}
