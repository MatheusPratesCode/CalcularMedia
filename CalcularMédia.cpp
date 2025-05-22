#include <stdio.h>
#include <locale.h> // Incluindo a biblioteca de localização para a língua portuguesa

int main() {
    float primeiraProva, trabalho, segundaProva, media;

    // Configurando a localidade para a língua portuguesa
    setlocale(LC_ALL, "Portuguese");

    // Inserir a nota da primeira prova
    printf("Digite a nota da Prova Intermediária (0-10): ");
    scanf("%f", &primeiraProva);

    // Inserir a nota do trabalho
    printf("Digite a nota do Trabalho Semestral (0-10): ");
    scanf("%f", &trabalho);

    // Inserir a nota da segunda prova
    printf("Digite a nota da Prova Semestral (0-10): ");
    scanf("%f", &segundaProva);

    // Verifica se as notas estão dentro do limite
    if (primeiraProva < 0 || primeiraProva > 10 ||
        trabalho < 0 || trabalho > 10 ||
        segundaProva < 0 || segundaProva > 10) {
        printf("Notas inválidas. Certifique-se de inserir notas entre 0 e 10.\n");
        return 1; // Caso a nota for menor que 10(LIMITE) - Encerra o programa com código de erro
    }

    // Calcula a Média Semestral
    media = 0.35 * primeiraProva + 0.30 * trabalho + 0.35 * segundaProva;

    // Exibe a média do aluno
    printf("Média semestral: %.2f\n", media);

    // Verifica se o aluno foi aprovado, reprovado ou precisa de recuperação
    if (media >= 6.51) {
        printf("\nParabéns! Você foi aprovado.\n");
    } else if (media >= 3.51) {
        printf("\nInfelizmente, você foi reprovado. Estude mais para passar na recuperação.\n");
    } else {
        printf("\nVocê não atingiu a média para realizar a prova de recuperação, infelizmente terá que refazer a matéria.\n");
    }

    return 0; // Finaliza o programa com sucesso :)
}
