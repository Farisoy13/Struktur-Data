// Potongan program PUSH
if (top < 9) {
    top++;
    cout << "Masukkan data: ";
    cin >> S[top];
    cout << "Data " << S[top] << " berhasil di-PUSH.\n";
} else {
    cout << "Stack Penuh!\n";
}

