#include <stdio.h>
#include <locale.h> // Incluindo a biblioteca de localiza��o para a l�ngua portuguesa

int main() {
    float primeiraProva, trabalho, segundaProva, media;

    // Configurando a localidade para a l�ngua portuguesa
    setlocale(LC_ALL, "Portuguese");

    // Inserir a nota da primeira prova
    printf("Digite a nota da Prova Intermedi�ria (0-10): ");
    scanf("%f", &primeiraProva);

    // Inserir a nota do trabalho
    printf("Digite a nota do Trabalho Semestral (0-10): ");
    scanf("%f", &trabalho);

    // Inserir a nota da segunda prova
    printf("Digite a nota da Prova Semestral (0-10): ");
    scanf("%f", &segundaProva);

    // Verifica se as notas est�o dentro do limite
    if (primeiraProva < 0 || primeiraProva > 10 ||
        trabalho < 0 || trabalho > 10 ||
        segundaProva < 0 || segundaProva > 10) {
        printf("Notas inv�lidas. Certifique-se de inserir notas entre 0 e 10.\n");
        return 1; // Caso a nota for menor que 10(LIMITE) - Encerra o programa com c�digo de erro
    }

    // Calcula a M�dia Semestral
    media = 0.35 * primeiraProva + 0.30 * trabalho + 0.35 * segundaProva;

    // Exibe a m�dia do aluno
    printf("M�dia semestral: %.2f\n", media);

    // Verifica se o aluno foi aprovado, reprovado ou precisa de recupera��o
    if (media >= 6.51) {
        printf("\nParab�ns! Voc� foi aprovado.\n");
    } else if (media >= 3.51) {
        printf("\nInfelizmente, voc� foi reprovado. Estude mais para passar na recupera��o.\n");
    } else {
        printf("\nVoc� n�o atingiu a m�dia para realizar a prova de recupera��o, infelizmente ter� que refazer a mat�ria.\n");
    }

    return 0; // Finaliza o programa com sucesso :)
}
