# libft

1. créer la libft.a dans le working directory avec :
```
make fclean all
```
ou :
```
make fclean all bonus
```
2. placer le dossier `tests` dans le working directory et modifier `libft/main.c`
3. compiler avec :
```
cc -Wall -Wextra -Werror -lbsd -fsanitize=address -g *.c tests/libft/*.c -L. -lft"
```

# get_next_line

1. placer le dossier `tests` dans le working directory et modifier `get_next_line/main.c`
2. compiler la partie obligatoire avec :
```
cc -Wall -Wextra -Werror -fsanitize=address -g get_next_line.c get_next_line_utils.c tests/get_next_line/*.c"
```
3. compiler la partie bonus avec :
```
cc -Wall -Wextra -Werror -fsanitize=address -g *_bonus.c tests/get_next_line/*.c"
```
