int findTheWinner(int n, int k) {
    int w = 0;
    for (int i = 2; i <= n; i++) {
        w = (w + k) % i;
    }
    return w + 1;
}
