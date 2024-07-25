template < typename T > int findExtraElementIndex ( const T * arrA , const T * arrB ) {
  const T extraElement = sum ( arrA ) - sum ( arrB ) ;
  return arrA -> find ( extraElement ) ;
}
