/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hmo <moel-hmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:17:15 by moel-hmo          #+#    #+#             */
/*   Updated: 2024/10/22 00:48:03 by moel-hmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *str){
    int i;
    int ichara;
    size_t ra9m;
    
    i = 0;
    ichara = 1;
    ra9m = 0;
   
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            ichara *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        ra9m = ra9m * 10 + (str[i] - 48);
        i++;
    }
    return ra9m * ichara;

}

int main()
{
    printf("Test 1: \"%s\" -> %d\n", "  1234", ft_atoi("  1234"));           // Positive number
    printf("Test 2: \"%s\" -> %d\n", "  -1234", ft_atoi("  -1234"));         // Negative number
    printf("Test 3: \"%s\" -> %d\n", "  +1234", ft_atoi("  +1234"));         // Positive with '+'
    printf("Test 4: \"%s\" -> %d\n", "  -+1234", ft_atoi("  -+1234"));       // Invalid multiple signs
    printf("Test 5: \"%s\" -> %d\n", "42", ft_atoi("42"));                   // Simple number
    printf("Test 6: \"%s\" -> %d\n", "-0", ft_atoi("-0"));                   // Zero with '-'
    printf("Test 7: \"%s\" -> %d\n", "   00123", ft_atoi("   00123"));       // Leading zeroes
    printf("Test 8: \"%s\" -> %d\n", "abc123", ft_atoi("abc123"));           // Invalid input (letters first)
    printf("Test 9: \"%s\" -> %d\n", "123abc", ft_atoi("123abc"));           // Trailing characters
    printf("Test 10: \"%s\" -> %d\n", "    123 456", ft_atoi("    123 456")); // Spaces after number
    printf("Test 11: \"%s\" -> %d\n", "   +42abc", ft_atoi("   +42abc"));     // Valid number followed by letters
    printf("Test 12: \"%s\" -> %d\n", "---123", ft_atoi("---123"));           // Multiple '-' signs (invalid)
    
}