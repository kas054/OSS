#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int pid = fork();
  // определить, в каком процессе мы находимся, помогает переменная pid

  if (pid == 0) {
    // дочерний процесс получает в качестве значения 0
    // это не является корректным PID и служит для определения
    // того факта, что данный код выполняется в дочернем процессе
    printf("Это сообщение из дочернего процесса\n");
    printf("PID %d PPID %d\n", getpid(), getppid());
  } else if (pid > 0) {
    // родительский процесс получает значение PID дочернего, он должен быть > 0
    printf("Это сообщение из родительского процесса.\n"
           "Идентификатор дочернего процесса:  %d\n", pid);
  }
  sleep(10);

  return 0;
}
