#include <iostream>

using namespace std;

/* ������ɱ�־ */
bool sign = false;

/* ������������ */
int num[9][9];

/* �������� */
void Input();
void Output();
bool Check(int n, int key);
int DFS(int n);

/* ������ */
int main()
{
    cout << "������һ��9*9���������󣬿�λ��0��ʾ:" << endl;
    Input();
    DFS(0);
    Output();
   // system("pause");
}

/* ������������ */
void Input()
{
    char temp[9][9];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> temp[i][j];
            num[i][j] = temp[i][j] - '0';
        }
    }
}

/* ����������� */
void Output()
{
    cout << endl;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << num[i][j] << " ";
            if (j % 3 == 2)
            {
                cout << "   ";
            }
        }
        cout << endl;
        if (i % 3 == 2)
        {
            cout << endl;
        }
    }
}

/* �ж�key����nʱ�Ƿ��������� */
bool Check(int n, int key)
{
    /* �ж�n���ں����Ƿ�Ϸ� */
    for (int i = 0; i < 9; i++)
    {
        /* jΪn������ */
        int j = n / 9;
        if (num[j][i] == key) return false;
    }

    /* �ж�n���������Ƿ�Ϸ� */
    for (int i = 0; i < 9; i++)
    {
        /* jΪn������ */
        int j = n % 9;
        if (num[i][j] == key) return false;
    }

    /* xΪn���ڵ�С�Ź����󶥵������� */
    int x = n / 9 / 3 * 3;

    /* yΪn���ڵ�С�Ź����󶥵������ */
    int y = n % 9 / 3 * 3;

    /* �ж�n���ڵ�С�Ź����Ƿ�Ϸ� */
    for (int i = x; i < x + 3; i++)
    {
        for (int j = y; j < y + 3; j++)
        {
            if (num[i][j] == key) return false;
        }
    }

    /* ȫ���Ϸ���������ȷ */
    return true;
}

/* ���ѹ������� */
int DFS(int n)
{
    /* ���еĶ����ϣ��˳��ݹ� */
    if (n > 80)
    {
        sign = true;
        return 0;
    }
    /* ��ǰλ��Ϊ��ʱ���� */
    if (num[n/9][n%9] != 0)
    {
        DFS(n+1);
    }
    else
    {
        /* ����Ե�ǰλ����ö�ٲ��� */
        for (int i = 1; i <= 9; i++)
        {
            /* ��������ʱ�������� */
            if (Check(n, i) == true)
            {
                num[n/9][n%9] = i;
                /* �������� */
                DFS(n+1);
                /* ����ʱ�������ɹ�����ֱ���˳� */
                if (sign == true) return 0;
                /* ������첻�ɹ�����ԭ��ǰλ */
                num[n/9][n%9] = 0;
            }
        }
    }
}
