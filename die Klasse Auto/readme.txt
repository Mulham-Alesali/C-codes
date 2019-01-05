Aufgaben
1. Definieren Sie die Klasse Auto in der Datei Auto.h.
2. Implementieren Sie alle angegebenen Methoden unter Berücksichtigung der oben
gemachten Einschränkungen. Die Setter und die Streaming-Operatoren sind in der Datei
Auto.cpp zu schreiben.
3. Testen Sie alle Methoden der Klasse in Auto der Datei test.cpp.
Deklarieren Sie Instanzen der Klasse Auto, die entsprechend mit dem Standard-, dem
Initialisierungs- und dem Kopierkonstruktor erzeugt werden.
Eine weitere Instanz wird über eine Adressvariable verwaltet und mit dem new-Operator
erzeugt. 


-Typ:string
-Sitze:int
+Auto ()
+Auto (string,int)
+Auto (Auto)
+~Auto ()
+getTyp ():string
+setTyp (string):void
+getSitze ():int
+setSitze (int):void
+operator << (ostream, Auto):ostream
+operator >> (istream, Auto):istream 
