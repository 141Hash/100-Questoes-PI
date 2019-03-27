int main () {
    int x, soma = 0, n = 0;

    scanf("%d", &x);

    while ( x != 0) {

            soma += x;

            n += 1;

        scanf("%d", &x);
    }

    int media = soma / n ;
    printf("A média é %d\n", media);
    return 0;

}
