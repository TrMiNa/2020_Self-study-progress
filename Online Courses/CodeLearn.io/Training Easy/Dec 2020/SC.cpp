string sc(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            s[i]+='a'-'A';
        else if(s[i]<='z'&&s[i]>='a')
            s[i]-='a'-'A';
    }
    return s;
}