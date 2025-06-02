      #include <stdio.h>

int main() {
    int i; // Declare 'i' UMA VEZ no início do escopo de main.

    // Movimento da Torre usando FOR
    printf("Movimento da Torre:\n");
    // O 'i' no loop for é uma variável local a esse loop se declarado como 'int i = 0'
    // Se você quer usar o 'i' declarado acima, seria 'for (i = 0; ...)'
    for (int contador_torre = 0; contador_torre < 5; contador_torre++) { // Usando um contador local para clareza
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo usando WHILE
    printf("Movimento do Bispo:\n");
    i = 0; // Reinicializa 'i' para o loop do Bispo
    while (i < 5) {
        printf("Cima, Direita\n"); // Adicionado \n
        i++;
    }
    printf("\n");

    // Movimento da Rainha usando DO-WHILE
    printf("Movimento da Rainha:\n");
    i = 0; // Reinicializa 'i' para o loop da Rainha
    if (8 > 0) { // Esta condição é um pouco redundante para um valor fixo > 0,
                 // mas não causa erro.
        do {
            printf("Esquerda\n");
            i++;
        } while (i < 8); // CONDIÇÃO CORRIGIDA: deve ser i < 8 para repetir 8 vezes
    }
    printf("\n");

    return 0;
}