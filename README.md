# IPI
Das ist meine Codes für IPI Übungsblatt 4 Aufgabe 3.

Eine natürliche Zahl ist vollkommen, wenn sie gleich der Summe ihrer Teiler ist, sich selbst ausgenommen. 

Die Zahl 6 = 1 + 2 + 3 ist die kleinste vollkommene Zahl, die nächstgrößere ist 28 = 1 + 2 + 4 + 7 + 14.

Gesucht ist ein Programm, das die kleinste vollkommene Zahl bestimmt, die größer oder gleich einer
gegebenen Zahl ist. Implementieren Sie dazu die folgenden Funktionen:

(a) bool teiler (int teiler, int zahl)
entscheidet, ob zahl durch teiler geteilt wird,

(b) int teileranzahl (int index, int anzahl, int zahl)
bestimmt die Anzahl der Teiler von zahl im Intervall {1, . . . , zahl − 1},

(c) int teilersumme (int index, int summe, int zahl)
bestimmt die Summe aller Teiler von zahl im Intervall {1, . . . , zahl − 1},

(d) bool vollkommen (int zahl)
entscheidet, ob zahl vollkommen ist,

(e) int suchevollkommen (int zahl)
bestimmt die kleinste vollkommene Zahl, die größer oder gleich zahl ist.

(f) Bestimmen Sie mit der Funktion suchevollkommen die beiden nächstgrößeren vollkommenen Zahlen
nach 28.
