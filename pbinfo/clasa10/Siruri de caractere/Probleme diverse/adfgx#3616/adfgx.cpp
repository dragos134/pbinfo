#include <cstring>
#include <fstream>

using namespace std;

ifstream fin("adfgx.in");
ofstream fout("adfgx.out");

const char* COD = "ADFGX";
const int   INV_COD[26] = {0, 0, 0, 1, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0};
const int   CHEIE_MAX = 26;
const int   MESAJ_MAX = 200026;

int main()
{
    int  c;
    char lit_mat[6][6], cheie[CHEIE_MAX], mesaj[MESAJ_MAX], cheie_sorted[CHEIE_MAX], cod_mat[27][3],
        new_mat[2 * MESAJ_MAX / (CHEIE_MAX - 1) + 10][CHEIE_MAX];
    fin >> c;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            fin >> lit_mat[i][j];

            // initializare matrice coduri. exemplu: a = AA, b = AB etc
            cod_mat[lit_mat[i][j] - 'a'][0] = COD[i];
            cod_mat[lit_mat[i][j] - 'a'][1] = COD[j];
            cod_mat[lit_mat[i][j] - 'a'][2] = '\0';
        }
    }

    // citire cheie si mesaj / mesaj criptat
    fin.ignore();
    fin.getline(cheie, CHEIE_MAX);
    fin.getline(mesaj, MESAJ_MAX);

    // sortare cheie si vector de indexi adiacent
    int mesaj_len = strlen(mesaj), cheie_len = strlen(cheie), k = 0, linii = 0;
    int cheie_index[CHEIE_MAX];
    for (int i = 0; i < cheie_len; i++)
    {
        cheie_index[i] = i;
    }
    strcpy(cheie_sorted, cheie);
    for (int i = 0; i < cheie_len - 1; i++)
    {
        for (int j = i + 1; j < cheie_len; j++)
        {
            if (cheie_sorted[i] > cheie_sorted[j])
            {
                swap(cheie_sorted[i], cheie_sorted[j]);
                swap(cheie_index[i], cheie_index[j]);
            }
        }
    }

    if (c == 1)
    {
        for (int i = 0; i < mesaj_len; i++)
        {
            new_mat[k / cheie_len][k % cheie_len] = cod_mat[mesaj[i] - 'a'][0];
            k++;
            new_mat[k / cheie_len][k % cheie_len] = cod_mat[mesaj[i] - 'a'][1];
            k++;
        }
        linii = k / cheie_len + 1;
        if (k % cheie_len == 0)
        {
            linii--;
        }

        for (int i = 0; i < cheie_len; i++)
        {
            for (int j = 0; j < linii; j++)
            {
                int cur_c = new_mat[j][cheie_index[i]];
                if (cur_c >= 'A' && cur_c <= 'Z')
                {
                    fout << (char)cur_c;
                }
            }
            fout << ' ';
        }
    }

    if (c == 2)
    {
        char* tok = strtok(mesaj, " ");
        int   all_char = 0;
        k = 0;
        while (tok != NULL)
        {
            int tok_len = strlen(tok);
            for (int i = 0; i < tok_len; i++)
            {
                new_mat[i][cheie_index[k]] = tok[i];
            }
            if (tok_len > linii)
            {
                linii = tok_len;
            }
            all_char += tok_len;

            k++;
            tok = strtok(NULL, " ");
        }

        for (int i = 0; i < all_char; i++)
        {
            char char1, char2;
            char1 = new_mat[i / cheie_len][i % cheie_len];
            i++;
            char2 = new_mat[i / cheie_len][i % cheie_len];
            fout << lit_mat[INV_COD[char1 - 'A']][INV_COD[char2 - 'A']];
        }
    }

    return 0;
}