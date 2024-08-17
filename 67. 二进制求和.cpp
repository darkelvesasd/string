string addBinary(string a, string b) {
    int an = a.size();
    int bn = b.size();
    int mn = min(an, bn);
    int mx = max(an, bn);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string ret;
    int acc = 0;
    int cur = 0;
    int i = 0;
    for (;i<mn;i++)
    {
        cur = (a[i]-'0' + b[i]-'0' + acc) % 2;
        ret.append(to_string(cur));
        acc = (a[i] - '0' + b[i] - '0' + acc) / 2;
    }
    while (i<an)
    {
        cur = (a[i] - '0' + acc) % 2;
        ret.append(to_string(cur));
        acc = (a[i] - '0' + acc) / 2;
        i++;
    }
    while (i < bn)
    {
        cur = (b[i] - '0' + acc) % 2;
        ret.append(to_string(cur));
        acc = (b[i] - '0' + acc) / 2;
        i++;
    }
    if (acc > 0)
    {
        ret.append("1");
    }
    reverse(ret.begin(), ret.end());
    return ret;
}
