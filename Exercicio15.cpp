#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100
#define MAX_NOME 50

typedef struct {
    int matricula;
    char nome[MAX_NOME];
    float media;
} Aluno;

Aluno alunos[MAX_ALUNOS];
int num_alunos = 0;

void cadastrarAluno() {
    if (num_alunos < MAX_ALUNOS) {
        printf("Digite a matrícula do aluno: ");
        scanf("%d", &alunos[num_alunos].matricula);
        printf("Digite o nome do aluno: ");
        scanf(" %[^\n]", alunos[num_alunos].nome);
        printf("Digite a média do aluno: ");
        scanf("%f", &alunos[num_alunos].media);
        num_alunos++;
        printf("Aluno cadastrado com sucesso!\n");
    } else {
        printf("Limite de alunos atingido!\n");
    }
}


void listarAlunos() {
    if (num_alunos == 0) {
        printf("Nenhum aluno cadastrado!\n");
    } else {
        for (int i = 0; i < num_alunos; i++) {
            printf("Matrícula: %d\n", alunos[i].matricula);
            printf("Nome: %s\n", alunos[i].nome);
            printf("Média: %.2f\n\n", alunos[i].media);
        }
    }
}


void mostrarAlunoMaiorMedia() {
    if (num_alunos == 0) {
        printf("Nenhum aluno cadastrado!\n");
    } else {
        int indice_maior_media = 0;
        float maior_media = alunos[0].media;
        for (int i = 1; i < num_alunos; i++) {
            if (alunos[i].media > maior_media) {
                maior_media = alunos[i].media;
                indice_maior_media = i;
            }
        }
        printf("Aluno com maior média:\n");
        printf("Matrícula: %d\n", alunos[indice_maior_media].matricula);
        printf("Nome: %s\n", alunos[indice_maior_media].nome);
        printf("Média: %.2f\n", alunos[indice_maior_media].media);
    }
}


void buscarAluno() {
    int matricula;
    printf("Digite a matrícula do aluno: ");
    scanf("%d", &matricula);
    for (int i = 0; i < num_alunos; i++) {
        if (alunos[i].matricula == matricula) {
            printf("Aluno encontrado:\n");
            printf("Matrícula: %d\n", alunos[i].matricula);
            printf("Nome: %s\n", alunos[i].nome);
            printf("Média: %.2f\n", alunos[i].media);
            return;
        }
    }
    printf("Aluno não encontrado!\n");
}

int main() {
    
    alunos[0].matricula = 1;
    strcpy(alunos[0].nome, "João");
    alunos[0].media = 8.5;
    alunos[1].matricula = 2;
    strcpy(alunos[1].nome, "Maria");
    alunos[1].media = 9.2;
    alunos[2].matricula = 3;
    strcpy(alunos[2].nome, "Pedro");
    alunos[2].media = 7.8;
    num_alunos = 3;

    while (1) {
        printf("Menu:\n");
        printf("1. Listar todos os alunos\n");
        printf("2. Mostrar aluno com maior média\n");
        printf("3. Buscar por aluno\n");
        printf("4. Cadastrar aluno\n");
        printf("5. Sair\n");
        int opcao;
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                listarAlunos();
                break;
            case 2:
                mostrarAlunoMaiorMedia();
                break;
            case 3:
                buscarAluno();
                break;
            case 4:
                cadastrarAluno();
                break;
            case 5:
                return 0;
            default:
                printf("Opção inválida!\n");
        }
    }
    return 0;
}
