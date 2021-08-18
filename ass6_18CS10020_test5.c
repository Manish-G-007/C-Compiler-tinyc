// Check Whether Number is Palindrome (or) not

int main()
{
    int n, reversedInteger , remainder, originalInteger;
    reversedInteger = 0;
    printStr("_________ Palindrome or Not_________ \n");
    printStr("Enter an integer: ");
    int err;
    n = readInt(&err);

    originalInteger = n;
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n = n/10;
    }
    if (originalInteger == reversedInteger)
        printStr("Yes, It is a palindrome.\n");
    else
        printStr("No, It is not a palindrome.\n");
    printStr("\n____________________________________ \n");
    
    return 0;
}