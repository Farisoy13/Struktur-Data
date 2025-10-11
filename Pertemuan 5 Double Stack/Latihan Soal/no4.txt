Algoritma CETAK_STACK1(Stack)
1.  if (TOP1 == -1) then
2.      print "Stack1 kosong"
3.  else
4.      while (TOP1 != -1) do
5.          data ← Stack[TOP1]
6.          print "Isi Stack1:", data
7.          TOP1 ← TOP1 - 1
8.      endwhile
9.  endif

Penjelasan:
Algoritma ini mencetak isi Stack1 dari atas ke bawah (karena stack bersifat LIFO — Last In, First Out).
Setiap elemen diambil (pop) dan dicetak, lalu TOP1 dikurangi satu


