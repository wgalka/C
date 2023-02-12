Właściwości pochodnych oraz wzory na pochodne.

![wzory2](https://static.docsity.com/documents_first_pages/2020/07/16/7458de6d69b0072f0b22ec52baf0ff9e.png)

Wzory na liczenie pochodnych
https://www.matemaks.pl/grafika/studia/pochodne/wzory_na_liczenie_pochodnych.gif

![wzory](https://eduinf.waw.pl/inf/prg/009_kurs_avr/images_t/0010.p7.gif)

# zadanie 1

$$
f(x) = \frac{4x^3 + x^2 +2}{x^2 + 1}
$$

Należy wykorzystać właściwość pochodnych oznaczoną wzorem 5. W miejsca f`(x) obliczamy pochodną korzystając ze wzorów na pochodne.

$$
(\frac{f(x)}{g(x)})' = \frac{f'(x)g(x)-f(x)g'(x)}{g(x)^2}
$$


Licznik oznaczymy jako f(x) i obliczamy pochodną tej funkcji czyli f'(x). 
$$
f(x) = 4x^3 + x^2 +2
$$

Oblicz pochodną funkcji f(x) wykorzystując 2 wzór na pochodne.

$$
f'(x) =
$$

<details>

$$
f'(x) = 12x^2+2x
$$

</details>

Mianownik oznaczamy jako g(x) i obliczamy pochodną tej funkcji czyli g'(x).

$$
g(x) = x^2 +1
$$

Oblicz pochodną funkcji g(x) wykorzystując 2 wzór na pochodne.

$$
g'(x) =
$$

<details>

$$
g'(x) = 2x
$$

</details>

Ostatecznie należy podstawić obliczone wzory do równania właściwości pochodnych oznaczonego wzorem 5 co będzie rozwiązaniem zadania.

$$
f'(x) = \frac{f'(x)g(x)-f(x)g'(x)}{g(x)^2}
$$

Po podstawieniu należy uprościć równanie

<details>

$$
f'(x) = \frac{(12x^2+2x)(x^2 +1)-(4x^3 + x^2 +2)(2x) } {(x^2 + 1)^2} =
\frac{(2 x + 12 x^2 + 2 x^3 + 12 x^4)-(8 x^4 + 2 x^3 + 4 x) }{(x^2 + 1)^2}=\frac{4 x^4 + 12 x^2 - 2 x}{(x^2 + 1)^2}
$$

</details>

## zadanie 2

$$
f(x) = \sqrt[3]{(3x^3+x^+1)^4}
$$

Pozbywamy się ułamka (wzory przydatne przy liczeniu pochodnych):

$$
f(x) = (3x^3+x^2+1)^{\frac{4}{3}}
$$

Korzystamy ze wzoru na liczenie pochodnych (f(g(x)))':

$$
(f(g(x)))' = f'(g(x))g'(x)
$$

W naszym przypadku g(x) będzie równe:

$$
g(x) = 3x^3+x^2+1
$$

Oblicz g'(x) i podstaw równania do wzoru na liczenie pochodnych.

<details>

$$
f'(x) = \frac{4}{3}(3x^3+x^2+1)^{\frac{1}{3}} (9x^2+2x)
$$

</details>

## Zadanie 3
$$
f(x) = sin(-2x^3)cos(x^2)
$$

Wykorzystujemy 4 właściwość pochodnych oraz wzór 10,11 oraz ostatni wzór na liczenie pochodnych jak ostatnio.

$$
f'(x) = cos(-2x^3)(-6x^2)(cos(x^2)) + sin(-2x^3)(-sin(x^2)(2x))
$$


## Zadanie 4

$$
f(x) = e^{cos(1 + x^3)}
$$

Korzystamy z ostatniego wzoru na liczenie pochodnych wzorów na pochodne :7,11, 2

$$
f'(x)= e^{cos(1 + x^3)} (-sin(1+x^3)) * 3x^2
$$

## Zadanie 5

$$
f(x) = \frac{ x^2+ \sqrt{x}}{\sqrt[3]{x}} = \frac{ x^2+ x^{\frac{1}{2}}}{x^{\frac{1}{3}}}
$$

Korzystamy z 5 Właściwości pochodnych

$$
f'(x) = \frac{(2x+\frac{1}{2}x^{-\frac{1}{2}})x^{\frac{1}{3} }- (x^2+ x^{\frac{1}{2}})(\frac{1}{3}x^{-\frac{2}{3}})}{(x^{\frac{1}{3}})^2}
$$


# reguła de l'Hospitala

$$
\lim_{x\to0} = \frac{2x - e^x}{x^2-3x}
$$

Podstawiamy za x 0 i obliczamy

$$
\lim_{x\to0} = \frac{2*0 - e^0}{0^2-3*0} = \frac{0}{0}
$$

Otrzymaliśmy symbol nieoznaczony.
Reguła de l'Hospitala zakłada że obliczając granicę funkcji dla  pochodna z licznika/pochodna z mianownika będzie ona równa granicy oryginalnej funkcji. Można ją stosować przy pewnych założeniach:
https://pre-epodreczniki.open.agh.edu.pl/tiki-index.php?page=Regu%C5%82a+de+l%27Hospitala

$$
\lim_{x\to0} = \frac{f(x)}{g(x)} = \frac{f'(x)}{g'(x)}
$$


$$
f(x) = 2x - e^x
$$

$$
g(x) = x^2-3x
$$
Zatem należy obliczyć granicę funkcji z f'(x)/g'(x)

# Zadanie 7

$$
f(x) = 4x^3- 3x^2 + 1
$$

Należy obliczyć pochodzną funkcji. Otrzymamy równanie kwadratowe z którego łatwo obliczyć miejsca zerowe funkcji.

<details>

$$
f'(x) =  12x^2 - 6x
$$

$$
x1 = 0
$$

$$
x2 = \frac{1}{2}
$$

</details>

Miejsca zerowe będą miejscami gdzie funkcja osiąga swoje maksimum lub minimum i zmienia się jej monotoniczność.Należy zastanowić się czy wartości będą rosnąć czy maleć. Można obliczyć sobie kilka wartości przed miejscami zerowymi aby to sprawdzić.

<details>
Jeśli za x podstawimy -1 to otrzymamy -9 podstawiając -2 otrzymamy jeszcze mniej zatem funkcja jest rosnąca w tym przedziale. Bo im bardziej przesuwamy wartości w prawo tym są one większe.

$$
(-\infty, 0) - rosnąca
$$

W punkcie 0 funkcja osiąga swoje maksimum(bo funkcja rośnie) i zmienia monotoniczność. Zatem po przekroczeniu 0 funkcja maleje.

$$
(0, \frac{1}{2}) - malejąca
$$

W punkcie 1/2 znów funkcja zmienia monotoniczność.

$$
(\frac{1}{2}, +\infty) - rosnąca
$$

Dla sprawdzenia można obliczyć kilka wartości funkcji

</details>




