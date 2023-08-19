entrada_dias = int(input())
anos = int(entrada_dias/365)
meses = int(entrada_dias%365/30)
dias = int(entrada_dias%365%30)

print('{} ano(s)\n{} mes(es)\n{} dia(s)'.format(anos, meses, dias))