bool valid_triangle(float a, float b, float c)
{
    if (a > 0 || b > 0 || c > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    if (a + b > c || a + c > b || b + c > a)
    {
        return true;
    }
    else
    {
        return false;
    }
}
