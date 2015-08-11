/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sh1.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/08 21:03:29 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/11 17:00:20 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SH1_H
# define FT_SH1_H

# define DEFAULT_PATH	"/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin"
# define NBR_BUILTIN	5

# define READ_END		0
# define WRITE_END		1

typedef struct	s_state
{
	int			do_sigint;
	int			running;
	int			return_val;
	char		**env;
	char		**new_env;
	char		*home;
	char		*oldpwd;
	char		*pwd;
	char		*path;
}				t_state;

typedef struct	s_builtin
{
	char		*name;
	void		(*builtin_func)(t_state *state, int ac, char **av);

}				t_builtin;

t_state			*singleton_state(void);
void			setup(t_state *state);
void			handle_sig(int sig);
void			prompt(t_state *state);

void			handle_line(char *line, t_state *state);
void			handle_cmds(t_state *state, char *line);
void			new_inside_shell(t_state *state, char **cmds, char *cmd);

void			set_tild_home_variable(t_state *state, char **cmds);

void			set_dollar_variable(char **env, char **cmds);
char			*replace_each_dollar_var(char **env, char *s);
void			replace_dollar_var(char **env, char **new_str, char *s, int i);
void			handle_several_dollar(char **new_str, char *s, int *i);

void			run_cmd(char ***env, char *cmd, char **cmds);
char			*find_cmd(t_state *state, char *cmd);
char			*check_validity_cmd(t_state *state, char *cmd);
char			*check_cmd(t_state *state, char *cmd);
char			*check_cmd_existence(t_state *state, char *cmd);

int				is_valid_cmd(char *cmd);
int				is_exist_cmd(char *cmd);
int				is_exec_cmd(char *cmd);

void			run_pipe(t_state *state, char **pipes);
void			handle_pipe(t_state *state, char **pipes, int nbr_pipe);

char			*ft_remove_blank_begin_end(char *s);
void			handle_exit_status(char ***env, int child_status,
														char **pipes, int i);

char			**environ_cpy(char **environ);
char			*get_env(char **environ, char *env);
void			set_env(char ***environ, char *env, char *value);
void			set_env_add_entry(char ***environ, char *entry, char *value,
														int nbr_var_old_env);
void			unset_env(char ***environ, char *env);

t_builtin		*set_builtins(void);
int				check_builtins(char *cmd);
void			run_builtins(t_state *state, char **cmds);

void			builtin_cd(t_state *state, int ac, char **av);
void			handle_cd_to(t_state *state, char *cd_to);
void			handle_cd_switch(t_state *state, char **av);
void			set_previous_dir_variable(char *oldpwd, char **av);

void			set_pwd(t_state *state, char *cd_to);
void			set_oldpwd(t_state *state);

void			builtin_env(t_state *state, int ac, char **av);

void			builtin_exit(t_state *state, int ac, char **av);

void			builtin_setenv(t_state *state, int ac, char **av);

void			builtin_unsetenv(t_state *state, int ac, char **av);

#endif
