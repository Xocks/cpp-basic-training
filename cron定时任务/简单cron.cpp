// 解析SimpleCron表达式中的单个时间域
// 参数：s - 时间域字符串，tot - 该域的最大值
// 返回值：包含所有有效值的向量
vector<int> count(const string& s, int tot) {
    vector<int> result;  // 存储解析结果的向量

    // 处理通配符 "*" 的情况
    if (s == "*") {
        // 如果是通配符，生成从1到tot的所有值
        for (int i = 1; i <= tot; i++)
            result.push_back(i);  // 将每个值添加到结果向量
        return result;  // 直接返回结果，无需后续解析
    }

    // 初始化解析状态变量
    int lst = -1;  // 记录范围起始值，-1表示当前没有范围
    int cur = 0;   // 当前正在解析的数字值

    // 遍历字符串中的每个字符
    for (char c : s)
    {
        // 遇到逗号，表示一个独立数字或范围的结束
        if (c == ',')
        {
            // 如果当前数字有效（不超过最大值），将其加入结果
            if (cur <= tot)
                result.push_back(cur);
            cur = 0;  // 重置当前数字，准备解析下一个
        }
        // 遇到连字符，表示范围的开始
        else if (c == '-')
        {
            lst = cur;  // 保存当前数字作为范围起始值
            cur = 0;    // 重置当前数字，准备解析范围结束值
        }
        // 遇到数字字符
        else
        {
            // 将字符转换为数字并累加到当前值（处理多位数）
            // c - '0' 将字符转换为对应的数字值
            // cur * 10 将之前解析的数字左移一位（十进制）
            cur = cur * 10 + c - '0';
        }
    }

    // 字符串遍历完成后，处理最后解析的部分

    // 如果存在范围标识（lst != -1）
    if (lst != -1)
    {
        // 生成从起始值到结束值的所有整数
        // 使用min(cur, tot)确保不超出最大值
        for (int i = lst; i <= min(cur, tot); i++)
            result.push_back(i);  // 将范围内的每个值添加到结果
    }
    // 如果没有范围标识，且当前数字有效
    else if (cur <= tot)
        result.push_back(cur);  // 将最后解析的数字加入结果

    return result;  // 返回包含所有有效值的向量
}
int mainO()
{
    string S, M, H, D, Mon;
    cin >> S >> M >> H >> D >> Mon;

    ll pday = count(S, 60).size() * count(M, 60).size() * count(H, 24).size();
    ll ans = 0;
    for (auto m : count(Mon, 12)) {
        ans += count(D, mdays[m]).size() * pday;
    }
}