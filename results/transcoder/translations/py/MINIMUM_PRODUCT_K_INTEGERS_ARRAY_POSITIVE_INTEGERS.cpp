int minProduct ( int arr [ ] , int n , int k ) {
  heap_sort ( arr , n ) ;
  int count = 0 ;
  int ans = 1 ;
  while ( ( arr ) & & count < k ) {
    int x = heap_sort ( arr , n ) ;
    ans = ans * x ;
    count = count + 1 ;
  }
  ;
  return ans ;
  ;
}
