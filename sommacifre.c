unsigned int somma_cifre(unsigned int x) {

	unsigned int tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7;

	tmp1 = x % 10;
	tmp2 = (x / 10)%10;
	tmp3 = (x / 100) % 10;
	tmp4 = (x / 1000) % 10;
	tmp5 = (x / 10000) % 10;
	tmp6 = (x / 100000) % 10;
	tmp7 = (x / 1000000) % 10;

	unsigned int res = tmp1 + tmp2 + tmp3 + tmp4 + tmp5 + tmp6 + tmp7;


	return res;



}