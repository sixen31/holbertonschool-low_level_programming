char *leet(char *str)
{
int i, j;
char *leet_str = str;

char leet_dict[][2] = {
{'a', '4'},
{'A', '4'},
{'e', '3'},
{'E', '3'},
{'o', '0'},
{'O', '0'},
{'t', '7'},
{'T', '7'},
{'l', '1'},
{'L', '1'}
};

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == leet_dict[j][0])
{
leet_str[i] = leet_dict[j][1];
break;
}
}
}

return (leet_str);
}
