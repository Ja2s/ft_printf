#include "libft.h"
#include <stdarg.h>

int ft_printf(const char format*, ...)
{
    va_list args;
    va_start(args, format);

    int count;

    count = 0;
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 's')   //string
            {
                const char  *str = va_arg(args, const char *);
                ft_putstr_fd(str, fd);           //a verifier
                count = ft_strlen(str);
            }
            if (*format == 'd' || *format == 'i')  //decimal or "integer??"
            {
                int nb = va_arg(args, int)
                ft_putnbr_fd(nb, fd);           //a verifier 
                while (nb > 0)
                {
                    nb /= 10;
                    count++;
                }
            }
            if (*format == 'c')  //character
            {
                const char c = va_arg(args, const char);
                ft_putchar_fd(c, fd);
                count += 1;
            }
            if (*format == 'u')
            {
                unsigned int unb = va_arg(args, unsigned int);
                ft_putnbr_fd(unb, fd);
                while (unb >= 10)
                {
                    unb /= 10;
                    count++;
                }
                count += 1;
            }
            if (*format == '%')
            {
                const char c = va_arg(args, const char);
                ft_putchar_fd('%', fd);
                count += 1;
            }
        }
    }  
}
