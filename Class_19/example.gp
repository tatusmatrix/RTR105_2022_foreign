s0(x) = x
s1(x) = s0(x) - x**3/(1*2*3)
s2(x) = s1(x) + x**5/(1*2*3*4*5)
s3(x) = s2(x) - x**7/(1*2*3*4*5*6*7)
plot [-5:5] sin(x) lw 5
replot s0(x) lw 5
replot s1(x) lw 5
replot s2(x) lw 5
replot s3(x) lw 5
set grid
replot
