#include <stdio.h>

int main(void) {
	int num;
	char name[50];
	scanf("%49s %d",name, &num);
	switch (num){
		case 0: printf("%s, ты только начинаешь! Завтра получится лучше!", name);
			break;
		case 1:
		case 2:
		case 3: 
				printf("%s, хорошее начало! Так держать!", name);
			break;
		case 4:
		case 5:
		case 6: 
			printf ("%s, ты в ударе! Настоящий молодец!", name);
			break;
		case 7: printf("%s, ты просто машина! Уровень: Бог кода!",name);
			break;
		default: printf("Количество задач не может быть отрицательным! Попробуй еще раз.");

	}
}
