answers, student_answers = [
    "Dryopithecus",
    "Ramapithecus",
    "Australopithecus",
    "Homo Erectus",
    "Homo Sapiens Neanderthalensis",
    "Homo Sapiens Sapiens"
], []
error = 0

for i in range(len(answers)):
    student_answers.append(input(f'Вопрос: {i + 1} этап развития человека?: '));
    if answers[i].lower() != student_answers[i].lower():
        error = error + 1;

print(f'Результат тестирования\nПравильные: {len(answers) - error}\t Ошибки: {error}\nПравильный ответ:\n');
print(' => '.join(answers));