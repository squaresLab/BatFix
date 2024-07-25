public : int minCost ( vector < int > & coin , int n , int k ) {
  sort ( coin . begin ( ) , coin . end ( ) ) ;
  int coinsNeeded = ceil ( 1.0 * n / ( k + 1 ) ) ;
  ;
  int ans = 0 ;
  foriinrange ( i , coinsNeeded - 1 + 1 ) ans += coin [ i ] ;
  return ans ;
}
