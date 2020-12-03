#include "fcpp.hh"
// (a)
bool teiler(int teiler, int zahl)
{
  return (zahl % teiler == 0);
}

// (b) Eigentlich ist Schritt b überflüssig.

int teileranzahl(int index, int anzahl, int zahl)
{
  // Ersetzen Sie die Null durch Ihren Code.
  return (cond(index == 1,
               anzahl += 1,
               cond(teiler(index, zahl) == 1,
                    teileranzahl(index - 1, anzahl += 1, zahl),
                    teileranzahl(index - 1, anzahl = anzahl, zahl)
               )
              )
  );
}

// (c)
int teilersumme(int index, int summe, int zahl)
{
  return (cond(index == 1,
               summe += 1,
               cond(teiler(index, zahl) == 1,
                    teilersumme(index - 1, summe = summe + index, zahl),
                    teilersumme(index - 1, summe = summe, zahl)
               )
          )
  );
}

// (d)
bool vollkommen(int zahl)
{
  return (teilersumme(zahl - 1, 0, zahl) == zahl);
}

// (e)
int suchevollkommen(int zahl)
{
  return (cond(vollkommen(zahl) == 1, zahl, suchevollkommen(zahl + 1)));
}

// (f)
int main(int argc, char *argv[])
{
  return (print(suchevollkommen(497)));
}

// Die beiden nächstgrößeren vollkommenen Zahlen nach 28 sind 496 und 8128.