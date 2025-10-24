# ft_printf [![wakatime](https://wakatime.com/badge/user/b5c6762d-cdfb-4336-9c84-87845f0e1976/project/c0ba9f0a-c2f2-4934-8a65-a1a8fb56dca8.svg)](https://wakatime.com/badge/user/b5c6762d-cdfb-4336-9c84-87845f0e1976/project/c0ba9f0a-c2f2-4934-8a65-a1a8fb56dca8)

*ft_printf is a 42 project: you must recreate the printf function*

- **100/100** ✅

## Functions
```h
// PUT
void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putaddr(size_t v, int prefix, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putunbr(unsigned int nb, int *count);
void	ft_putnbrhexa(unsigned int v, int in_lowercase, int *count);

// UTILS
int		ft_startwith(const char *s, const char *val);
int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlen(const char *s);

// PRINTF
int		ft_printf(const char *s, ...);
```
![42](https://img.shields.io/badge/-42-black?style=for-the-badge&logo=42&logoColor=white)