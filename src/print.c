#include<stdio.h>
#include<stdlib.h>

void an_3() {
    printf("Там где ты учился кодить, я преподавал!\n");
}
void an_2() {
    printf("Встань, погуляй, выдохни и попробуй еще раз))\n");
}
void an_1() {
    printf("Тащи что нибудь потяжелее!\n");
}
void an_4() {
    printf("Мясаааа мнеее))\n");
}
void an_5() {
    printf("Креативненько!)\n");
}
void an_6() {
    printf("Давай! Я верю в тебя!\n");
}
void an_7() {
    printf("Крашни меня полностью!!!\n");
}
void an_8() {
    printf("Ты не устал там?))\n");
}
void an_9() {
    printf("Я брат Vertera! Сынок!\n");
}
void an_0() {
    printf("Может тебе сменить профессию?\n");
}

void end() {
    printf("Слабо, да?)) Подписывайся телега @pushchill (там залил пару учебников и ссылка на основной чат)\n Всем удачи на экзамене! От dpaulita и awoolfie\n Не будем теряться после интенсива;)\n");
}

void start() {
    FILE *fp;
    char str[128];
    if ((fp=fopen("build/start.txt", "r") )==NULL) {
        printf("Cannot open file.\n");
    exit (1);
    }
    while(!feof (fp)) {
    if (fgets(str, 126, fp))
    printf("%s", str);
}
fclose(fp);
}