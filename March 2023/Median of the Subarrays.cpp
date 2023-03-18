long long helper( int n, const vector< int >& a, int m ) {
    vector< int > v( 2 * n + 1 ); v[ n ]++;
    long long x{}, t{}, j{ n };
    for ( int i{}; i < n; ++i, ++v[ j ] )
        x += t += a[ i ] >= m ? v[ j++ ] : -v[ --j ];
    return x;
}
long long countSubarray( int N, vector< int > A, int M ) {
    return helper( N, A, M ) - helper( N, A, ++M );
}