// Calculate Potential Difference 
int main()

{
    int potential_difference, current, resistance;
    printStr("_____________ Calculating Potential Difference _____________\n");
    printStr("Enter the value of current flowing in wire:");
    int err = 1;
    current = readInt(&err);
    printStr("Enter the value of resistance of wire:");
    resistance = readInt(&err);

    potential_difference = current * resistance;

    printStr("The Potential Difference across wire is: ");
    printInt(potential_difference);
    printStr("\n");
    printStr("\n__________________________\n");
    return 0;

}