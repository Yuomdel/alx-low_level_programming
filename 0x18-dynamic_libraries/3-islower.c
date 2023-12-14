#include "main.h"
/**
*_islower - will controls if a character is in lowercase
*@c:the char to be verified
*Return:will return 0 or 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

return (0);
}
