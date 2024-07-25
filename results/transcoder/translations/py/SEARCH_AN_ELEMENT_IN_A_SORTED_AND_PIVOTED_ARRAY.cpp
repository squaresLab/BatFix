int search ( int arr [ ] , int l , int h , int key ) {
  if ( l > h ) return - 1 ;
  int mid = ( l + h ) / 2 ;
  ifarr [ mid ] == key ) returnmid ;
  if ( ifarr [ l ] <= arr [ mid ] ) {
    ifkey >= arr [ l ] && andkey <= arr [ mid ] ) returnsearch ( arr , l , mid - 1 , key ) ;
    returnsearch ( arr , mid + 1 , h , key ) ;
  }
  if ( ifkey >= arr [ mid ] && andkey <= arr [ h ] ) returnsearch ( a , mid + 1 , h , key ) ;
  returnsearch ( arr , l , mid - 1 , key ) ;
}
