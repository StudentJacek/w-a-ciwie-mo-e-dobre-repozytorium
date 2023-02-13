/**
 * @file integral_formula.cpp
 * @brief Plik zawiera implementację wzoru na całkę
 */

/**
 * @brief Oblicza wartość całki funkcji liniowej
 * 
 * Funkcja oblicza wartość całki funkcji liniowej o współczynniku `k` w punkcie `x`
 * na podstawie wzoru:
 * 
 * ∫k dx = kx + C
 * 
 * @param k współczynnik funkcji liniowej
 * @param x punkt, w którym obliczana jest wartość całki
 * @param C stała wyrazowa
 * 
 * @return Wartość całki funkcji liniowej w punkcie `x`
 */
double integral(double k, double x, double C) {
  return k * x + C;
}


/**
 * @file trapezoidal_rule.cpp
 * @brief Plik zawiera implementację reguły trapezów
 */

/**
 * @brief Oblicza przybliżoną wartość całki funkcji
 * 
 * Funkcja oblicza przybliżoną wartość całki funkcji `f(x)` na przedziale
 * od `a` do `b` za pomocą reguły trapezów:
 * 
 * ∫f(x)dx ≈ (b - a) * (f(a) + f(b)) / 2
 * 
 * @param f wskaźnik na funkcję, której całka jest obliczana
 * @param a początek przedziału całkowania
 * @param b koniec przedziału całkowania
 * 
 * @return Przybliżona wartość całki funkcji `f(x)` na przedziale `[a, b]`
 */
double integrate(double (*f)(double), double a, double b) {
  return (b - a) * (f(a) + f(b)) / 2;
}

