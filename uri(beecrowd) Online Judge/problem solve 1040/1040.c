#include <stdio.h>
int main() {
    float n1, n2, n3, n4, Media, exam_score, Media_final;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    Media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;

    printf("Media: %0.1f\n", Media);

    if (Media < 5.0)
    {
        printf("Aluno reprovado.\n");
    }

    else if (Media >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }

    else
    {
        printf("Aluno em exame.\n");

        scanf("%f", &exam_score);

        printf("Nota do exame: %0.1f\n", exam_score);

        Media_final =( Media + exam_score ) / 2;

        if (Media_final >= 5.0 || Media_final <= 6.9)
        {
            printf("Aluno aprovado.\n");
        }

        else
        {
            printf("Aluno reprovado.\n");
        }

    printf("Media final: %0.1f\n", Media_final);

    }

    return 0;
}
