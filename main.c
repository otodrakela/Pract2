#include <stdio.h>
#include <stdlib.h>


// ������� ��� ����������� (��������� ������� ������)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// ������� ��� �����������(�������� ������ ������)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// ������� ��� ����������� � ����������� �����
int find_lcm(int arr[], int n) {
    int result = arr[0];

    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);
    }

    return result;
}

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int lcm_result = find_lcm(arr, n);

    printf("%d\n", lcm_result);

    return 0;
}
