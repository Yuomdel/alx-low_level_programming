#include "main.h"
/**
*_isalpha -will controls if a char is alphabetical
*@c:the char to be verified
*Return:will return 0 or 1
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);

return (0);
}
