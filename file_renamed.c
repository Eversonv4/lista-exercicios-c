#include <stdio.h>
#include <stdlib.h>

int main()
{
  int ret;
  // char oldname[] = "./projetos_codeblocks/foda.c";
  // char newname[] = "./projetos_codeblocks/main.c";

  ret = rename("teste.c", "test.c");

  if (ret == 0)
  {
    printf("File renamed successfully");
  }
  else
  {
    printf("Error: unable to rename the file");
  }

  return 0;
}