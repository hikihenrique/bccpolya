<h1>· bccpolya</h1>
Atividade "Modelando e Resolvendo" 1º semestre 2016, por Henrique Shodi Maeta
<h3>· Descrição do problema</h3>
<p>O problema pede para que seja feito um algoritmo para resolução de raiz quadrada de um número real, onde a saida também deverá ser um número real mas com apenas duas casas decimais, porém isso deve ser feito sem que haja a utilização da biblioteca math.h. Pede também para que seja feita a descrição do problema, a solução em linguagem matemática, em Portugues Estruturado, em fluxograma e também deve conter a explicação para o uso do termo polya no nome do repositório.</p>

<h3>· Linguagem Matemática</h3>
<i>y = número aleatório</i></br>
![alt tag](http://oi68.tinypic.com/29pynnm.jpg)</br>
O resultado dessa fração deve ser atribuida à <i>y</i> e a equação deve ser feita novamente.

<h3>· Portugues Estruturado</h3>
<pre>algoritmo "RaizQuadrada"</br>
inicio
	REAL n, x1, x2
	LEIA n
	x1 = (n + n / n) / 2
	ENQUANTO x2 <> x1 FACA
		x2 = (x1 + n / x1) / 2
		x1 = (x2 + n / x2) / 2
	FIMENQUANTO
	ESCREVA(x1)
fimalgoritmo</pre>

<h3>· Fluxograma</h3>
![alt tag](http://oi63.tinypic.com/xlxidj.jpg)

<h3>· Justificativa para o termo "polya"</h3>
<p>Geoge Pólya foi um matematico que, em 1945 publicou um livro entitulado "Como resolver isto", numa tradução literária, e este livro mostra alguns principios básicos para resolução de problemas, entre eles estão: "Voce pode pensar em uma imagem ou um diagrama que talvez possa de ajudar a entender o problema?", "Voce pode reformular o problema em suas próprias palavras?", etc.</p>
