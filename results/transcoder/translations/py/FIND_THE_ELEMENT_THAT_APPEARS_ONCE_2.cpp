public : int singleNumber ( vector < int > & nums ) {
  return ( 3 * sum ( set ( nums ) ) - set ( nums ) ) / 2 ;
}
