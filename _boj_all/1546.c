#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<time.h>

int Maxof(const int a[], int n) {
    int i;
    int max = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > max) max = a[i];
    return max;
}

int main() {
    int num_of_subject;
    int* subject_score;
    double* float_score;
    int max_score;
    double sub_score = 0;

    scanf("%d", &num_of_subject);
    subject_score = calloc(num_of_subject, sizeof(int));
    float_score = calloc(num_of_subject, sizeof(double));

    for (int i = 0; i < num_of_subject; i++) {
        scanf("%d", &subject_score[i]);
    }

    max_score = Maxof(subject_score, num_of_subject);


    for (int i = 0; i < num_of_subject; i++) {
        float_score[i] = ((double)subject_score[i] / max_score) * 100;
        sub_score += float_score[i];

    }

    printf("%f", sub_score / num_of_subject);

    return 0;
}