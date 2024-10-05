int main() {
    int T, P, Q, R, S;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d %d", &P, &Q, &R, &S);

        if (P > Q + R + S || Q > P + R + S || R > P + Q + S || S > P + Q + R) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}