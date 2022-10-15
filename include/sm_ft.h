
#ifndef SM_FT_H_
# define SM_FT_H_
# include "./ft_system.h"

//text
int sm_while_space_tab(int start,char *str);
int sm_get_keybord_input(char *return_txt,int size);
void    sm_clear_str(char *str);
int sm_atoi(char *str);
int sm_copy_str_to(char *input,char *return_v,int start_p, int end_p);
int sm_look_for_word(char *str,char *word);
//menu
int sm_func_looking(char *str,char *word, int *path);
int sm_find_mix_str(char *str,char *word, int *path);
void sm_signature(void);
int sm_look_for_char_p(char *str, int start_p ,int number ,char look);
int sm_ls(char *path);
int sm_print_file(char *name);
//game
void game_snake(char *name, int game_size);
void sm_tictactoe(char *user);
typedef struct snake {
	int x;
	int y;
	int snakeSize;
	int score;
	int gameOn;
} snake;

typedef struct apple {
	int x;
	int y;
	int onOff;
} apple;
//other
int sm_r_num(int lower ,int upper);
void sm_inspect_arr(void *p, char type ,int size, int color);
void noise(int loop, int size);
void *sm_calloc(size_t type, int size);
void    show_color(void);

#endif // SM_FT_H_