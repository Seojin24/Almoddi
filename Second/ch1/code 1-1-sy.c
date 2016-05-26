int fac( int n )
{
	int r, i;
	r = 1;

	for (i=2; i<=n; i++ )
		r *=i;

	return r;
}