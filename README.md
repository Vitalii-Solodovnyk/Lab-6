Pliki:
- src/bank_accounts.c  - Zadanie 1 (Konta bankowe)
- src/max_diff.c       - Zadanie 2 (Największa bezwzględna różnica)

Kompilacja:
  gcc -Wall -Wextra -o bank_accounts src/bank_accounts.c
  gcc -Wall -Wextra -o max_diff src/max_diff.c

Uruchomienie (przykłady):
  ./bank_accounts
  (następnie wpisywać opcje i parametry zgodnie z instrukcją)

  ./max_diff
  (najpierw wpisz n, potem n liczb całkowitych)

Uwagi:
- Zadanie 2 używa VLA (int t[n];).
- Programy walidują numer konta oraz kwoty (>= 0).
- Komentarze i formatowanie zgodne z wymaganiami -Wall -Wextra.
