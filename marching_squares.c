// Țucă Mihai-Laurențiu 314CA

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define sigma 200

// Structura folosita pentru a memora intensitatea culorii unui pixel (R, G, B)
typedef struct {
	int r, g, b;
} pixel_t;

// Fiecare functie contur_nr (0 <= nr < 16) construieste matricea 4x4 cu nr
// corespunzator din lookup table si o inlocuieste matricea 4x4 de la
// matrix[startj][startk] pana la matrix[startj + 3][startk + 3]
void contur_0(pixel_t **matrix, int startj, int startk)
{
	int j, k;
	for (j = startj; j < startj + 4; j++) {
		for (k = startk; k < startk + 4; k++) {
			matrix[j][k].r = 0;
			matrix[j][k].g = 0;
			matrix[j][k].b = 0;
		}
	}
}

void contur_1(pixel_t **matrix, int startj, int startk)
{
	int j, k;
	for (j = startj; j < startj + 4; j++) {
		for (k = startk; k < startk + 4; k++) {
			if ((j == startj + 2 && k == startk) || (j == startj + 3 &&
													 k == startk + 1)) {
				matrix[j][k].r = 255;
				matrix[j][k].g = 255;
				matrix[j][k].b = 255;
			} else if (j == startj + 3 && k == startk) {
				matrix[j][k].r = 180;
				matrix[j][k].g = 180;
				matrix[j][k].b = 180;
			} else {
				matrix[j][k].r = 0;
				matrix[j][k].g = 0;
				matrix[j][k].b = 0;
			}
		}
	}
}

void contur_2(pixel_t **matrix, int startj, int startk)
{
	int j, k;
	for (j = startj; j < startj + 4; j++) {
		for (k = startk; k < startk + 4; k++) {
			if ((j == startj + 2 && k == startk + 3) || (j == startj + 3 &&
														 k == startk + 2)) {
				matrix[j][k].r = 255;
				matrix[j][k].g = 255;
				matrix[j][k].b = 255;
			} else if (j == startj + 3 && k == startk + 3) {
				matrix[j][k].r = 180;
				matrix[j][k].g = 180;
				matrix[j][k].b = 180;
			} else {
				matrix[j][k].r = 0;
				matrix[j][k].g = 0;
				matrix[j][k].b = 0;
			}
		}
	}
}

void contur_3(pixel_t **matrix, int startj, int startk)
{
	int j, k;
	for (j = startj; j < startj + 4; j++) {
		for (k = startk; k < startk + 4; k++) {
			if (j == startj + 2) {
				matrix[j][k].r = 255;
				matrix[j][k].g = 255;
				matrix[j][k].b = 255;
			} else if (j == startj + 3) {
				matrix[j][k].r = 180;
				matrix[j][k].g = 180;
				matrix[j][k].b = 180;
			} else {
				matrix[j][k].r = 0;
				matrix[j][k].g = 0;
				matrix[j][k].b = 0;
			}
		}
	}
}

void contur_4(pixel_t **matrix, int startj, int startk)
{
	int j, k;
	for (j = startj; j < startj + 4; j++) {
		for (k = startk; k < startk + 4; k++) {
			if ((j == startj && k == startk + 2) || (j == startj + 1 &&
													 k == startk + 3)) {
				matrix[j][k].r = 255;
				matrix[j][k].g = 255;
				matrix[j][k].b = 255;
			} else if (j == startj && k == startk + 3) {
				matrix[j][k].r = 180;
				matrix[j][k].g = 180;
				matrix[j][k].b = 180;
			} else {
				matrix[j][k].r = 0;
				matrix[j][k].g = 0;
				matrix[j][k].b = 0;
			}
		}
	}
}

void contur_5(pixel_t **matrix, int startj, int startk)
{
	int j, k;
	for (j = startj; j < startj + 4; j++) {
		for (k = startk; k < startk + 4; k++) {
			if ((j == startj + 2 && k == startk) || (j == startj + 3 &&
													 k == startk + 1) ||
													 (j == startj &&
													  k == startk + 2) ||
				(j == startj + 1 && k == startk + 3)) {
				matrix[j][k].r = 255;
				matrix[j][k].g = 255;
				matrix[j][k].b = 255;
			} else if ((j == startj + 3 && k == startk) || (j == startj &&
															k == startk + 3)) {
				matrix[j][k].r = 180;
				matrix[j][k].g = 180;
				matrix[j][k].b = 180;
			} else {
				matrix[j][k].r = 0;
				matrix[j][k].g = 0;
				matrix[j][k].b = 0;
			}
		}
	}
}

void contur_6(pixel_t **matrix, int startj, int startk)
{
	int j, k;
	for (j = startj; j < startj + 4; j++) {
		for (k = startk; k < startk + 4; k++) {
			if (k == startk + 2) {
				matrix[j][k].r = 255;
				matrix[j][k].g = 255;
				matrix[j][k].b = 255;
			} else if (k == startk + 3) {
				matrix[j][k].r = 180;
				matrix[j][k].g = 180;
				matrix[j][k].b = 180;
			} else {
				matrix[j][k].r = 0;
				matrix[j][k].g = 0;
				matrix[j][k].b = 0;
			}
		}
	}
}

void contur_7(pixel_t **matrix, int startj, int startk)
{
	int j, k;
	for (j = startj; j < startj + 4; j++) {
		for (k = startk; k < startk + 4; k++) {
			if ((j == startj && k == startk + 1) || (j == startj + 1 &&
													 k == startk)) {
				matrix[j][k].r = 255;
				matrix[j][k].g = 255;
				matrix[j][k].b = 255;
			} else if (j == startj && k == startk) {
				matrix[j][k].r = 0;
				matrix[j][k].g = 0;
				matrix[j][k].b = 0;
			} else {
				matrix[j][k].r = 180;
				matrix[j][k].g = 180;
				matrix[j][k].b = 180;
			}
		}
	}
}

void contur_8(pixel_t **matrix, int startj, int startk)
{
	int j, k;
	for (j = startj; j < startj + 4; j++) {
		for (k = startk; k < startk + 4; k++) {
			if ((j == startj && k == startk + 1) || (j == startj + 1 &&
													 k == startk)) {
				matrix[j][k].r = 255;
				matrix[j][k].g = 255;
				matrix[j][k].b = 255;
			} else if (j == startj && k == startk) {
				matrix[j][k].r = 180;
				matrix[j][k].g = 180;
				matrix[j][k].b = 180;
			} else {
				matrix[j][k].r = 0;
				matrix[j][k].g = 0;
				matrix[j][k].b = 0;
			}
		}
	}
}

void contur_9(pixel_t **matrix, int startj, int startk)
{
	int j, k;
	for (j = startj; j < startj + 4; j++) {
		for (k = startk; k < startk + 4; k++) {
			if (k == startk + 1) {
				matrix[j][k].r = 255;
				matrix[j][k].g = 255;
				matrix[j][k].b = 255;
			} else if (k == startk) {
				matrix[j][k].r = 180;
				matrix[j][k].g = 180;
				matrix[j][k].b = 180;
			} else {
				matrix[j][k].r = 0;
				matrix[j][k].g = 0;
				matrix[j][k].b = 0;
			}
		}
	}
}

void contur_10(pixel_t **matrix, int startj, int startk)
{
	int j, k;
	for (j = startj; j < startj + 4; j++) {
		for (k = startk; k < startk + 4; k++) {
			if ((j == startj && k == startk + 1) || (j == startj + 1 &&
													 k == startk) ||
				(j == startj + 2 && k == startk + 3) ||
				(j == startj + 3 && k == startk + 2)) {
				matrix[j][k].r = 255;
				matrix[j][k].g = 255;
				matrix[j][k].b = 255;
			} else if ((j == startj && k == startk) || (j == startj + 3 &&
														k == startk + 3)) {
				matrix[j][k].r = 180;
				matrix[j][k].g = 180;
				matrix[j][k].b = 180;
			} else {
				matrix[j][k].r = 0;
				matrix[j][k].g = 0;
				matrix[j][k].b = 0;
			}
		}
	}
}

void contur_11(pixel_t **matrix, int startj, int startk)
{
	int j, k;
	for (j = startj; j < startj + 4; j++) {
		for (k = startk; k < startk + 4; k++) {
			if ((j == startj && k == startk + 2) || (j == startj + 1 &&
													 k == startk + 3)) {
				matrix[j][k].r = 255;
				matrix[j][k].g = 255;
				matrix[j][k].b = 255;
			} else if (j == startj && k == startk + 3) {
				matrix[j][k].r = 0;
				matrix[j][k].g = 0;
				matrix[j][k].b = 0;
			} else {
				matrix[j][k].r = 180;
				matrix[j][k].g = 180;
				matrix[j][k].b = 180;
			}
		}
	}
}

void contur_12(pixel_t **matrix, int startj, int startk)
{
	int j, k;
	for (j = startj; j < startj + 4; j++) {
		for (k = startk; k < startk + 4; k++) {
			if (j == startj + 1) {
				matrix[j][k].r = 255;
				matrix[j][k].g = 255;
				matrix[j][k].b = 255;
			} else if (j == startj) {
				matrix[j][k].r = 180;
				matrix[j][k].g = 180;
				matrix[j][k].b = 180;
			} else {
				matrix[j][k].r = 0;
				matrix[j][k].g = 0;
				matrix[j][k].b = 0;
			}
		}
	}
}

void contur_13(pixel_t **matrix, int startj, int startk)
{
	int j, k;
	for (j = startj; j < startj + 4; j++) {
		for (k = startk; k < startk + 4; k++) {
			if ((j == startj + 2 && k == startk + 3) || (j == startj + 3 &&
														 k == startk + 2)) {
				matrix[j][k].r = 255;
				matrix[j][k].g = 255;
				matrix[j][k].b = 255;
			} else if (j == startj + 3 && k == startk + 3) {
				matrix[j][k].r = 0;
				matrix[j][k].g = 0;
				matrix[j][k].b = 0;
			} else {
				matrix[j][k].r = 180;
				matrix[j][k].g = 180;
				matrix[j][k].b = 180;
			}
		}
	}
}

void contur_14(pixel_t **matrix, int startj, int startk)
{
	int j, k;
	for (j = startj; j < startj + 4; j++) {
		for (k = startk; k < startk + 4; k++) {
			if ((j == startj + 2 && k == startk) || (j == startj + 3 &&
													 k == startk + 1)) {
				matrix[j][k].r = 255;
				matrix[j][k].g = 255;
				matrix[j][k].b = 255;
			} else if (j == startj + 3 && k == startk) {
				matrix[j][k].r = 0;
				matrix[j][k].g = 0;
				matrix[j][k].b = 0;
			} else {
				matrix[j][k].r = 180;
				matrix[j][k].g = 180;
				matrix[j][k].b = 180;
			}
		}
	}
}

void contur_15(pixel_t **matrix, int startj, int startk)
{
	int j, k;
	for (j = startj; j < startj + 4; j++) {
		for (k = startk; k < startk + 4; k++) {
			matrix[j][k].r = 255;
			matrix[j][k].g = 255;
			matrix[j][k].b = 255;
		}
	}
}

// Verifica la calculul grid-ului vecinii NSEV care se afla in matrice si
// returneaza media aritmetica a acestora
int calcul_vecini(int **grid, int i, int j, int linie, int coloana)
{
	int sum = 0;
	int count = 0;
	if (i < linie && j < coloana && i >= 0 && j >= 0) {
		sum += grid[i][j];
		count++;
	}
	if (i > 0 && j > 0) {
		sum += grid[i - 1][j - 1];
		count++;
	}
	if (i > 0 && j < coloana - 1) {
		sum += grid[i - 1][j + 1];
		count++;
	}
	if (i < linie - 1 && j > 0) {
		sum += grid[i + 1][j - 1];
		count++;
	}
	if (i < linie - 1 && j < coloana - 1) {
		sum += grid[i + 1][j + 1];
		count++;
	}
	return sum / count;
}

void calcul_grid(int **grid, int linie, int coloana, pixel_t **image)
{
	int **grid_initial = malloc((linie + 1) * sizeof(int *));
	for (int i = 0; i < linie + 1; i++) {
		grid_initial[i] = malloc((coloana + 1) * sizeof(int));
	}
	int **grid_ajustat = malloc((linie + 1) * sizeof(int *));
	for (int i = 0; i < linie + 1; i++) {
		grid_ajustat[i] = malloc((coloana + 1) * sizeof(int));
	}
	// Calculeaza luminozitatea tuturor pixelilor din matricea initiala
	for (int i = 0; i < linie + 1; i++) {
		for (int j = 0; j < coloana + 1; j++) {
			grid_initial[i][j] = (image[i][j].r + image[i][j].g +
								  image[i][j].b) / 3;
		}
	}
	for (int i = 0; i < linie + 1; i++) {
		for (int j = 0; j < coloana + 1; j++) {
			grid_ajustat[i][j] = calcul_vecini(grid_initial, i, j, linie,
											   coloana);
		}
	}
	// Se pun in grid-ul final doar valorile "STEP" si se aplica threshold-ul
	for (int i = 0; i < linie + 1; i += 4) {
		for (int j = 0; j < coloana + 1; j += 4) {
			grid[i / 4][j / 4] = grid_ajustat[i][j];
		}
	}
	for (int i = 0; i < linie / 4 + 1; i++) {
		for (int j = 0; j < coloana / 4 + 1; j++) {
			grid[i][j] = grid[i][j] <= sigma ? 1 : 0;
		}
	}
	for (int i = 0; i < linie + 1; i++) {
		free(grid_initial[i]);
		free(grid_ajustat[i]);
	}
	free(grid_initial);
	free(grid_ajustat);
}

void print_matrix_pixel_rgb(pixel_t **culori, int linie, int coloana)
{
	int i, j;
	for (i = 0; i < linie; i++) {
		for (j = 0; j < coloana; j++) {
			printf("%d %d %d\n", culori[i][j].r, culori[i][j].g,
				   culori[i][j].b);
		}
	}
}

// Elibereaza o matrice de tip pixel_t alocata dinamic cu height linii
void free_matrice_p(pixel_t **matrice, int inaltime)
{
	int i;
	for (i = 0; i < inaltime; i++) {
		free(matrice[i]);
	}
	free(matrice);
}

// Elibereaza o matrice de tip int alocata dinamic cu height linii
void free_matrice_int(int **matrice, int inaltime)
{
	int i;
	for (i = 0; i < inaltime; i++) {
		free(matrice[i]);
	}
	free(matrice);
}

// Afiseaza fiecare matrice 4x4 din lookup table la apelul INIT_CONTUR
void print_lookup(pixel_t **matrice, int i, int j)
{
	int k;
	for (k = 0; k < 16; k++) {
		printf("P3\n4 4\n255\n");
		switch (k) {
		case 0:
			contur_0(matrice, i, j);
			print_matrix_pixel_rgb(matrice, 4, 4);
		break;
		case 1:
			contur_1(matrice, i, j);
			print_matrix_pixel_rgb(matrice, 4, 4);
		break;
		case 2:
			contur_2(matrice, i, j);
			print_matrix_pixel_rgb(matrice, 4, 4);
		break;
		case 3:
			contur_3(matrice, i, j);
			print_matrix_pixel_rgb(matrice, 4, 4);
		break;
		case 4:
			contur_4(matrice, i, j);
			print_matrix_pixel_rgb(matrice, 4, 4);
		break;
		case 5:
			contur_5(matrice, i, j);
			print_matrix_pixel_rgb(matrice, 4, 4);
		break;
		case 6:
			contur_6(matrice, i, j);
			print_matrix_pixel_rgb(matrice, 4, 4);
		break;
		case 7:
			contur_7(matrice, i, j);
			print_matrix_pixel_rgb(matrice, 4, 4);
		break;
		case 8:
			contur_8(matrice, i, j);
			print_matrix_pixel_rgb(matrice, 4, 4);
		break;
		case 9:
			contur_9(matrice, i, j);
			print_matrix_pixel_rgb(matrice, 4, 4);
		break;
		case 10:
			contur_10(matrice, i, j);
			print_matrix_pixel_rgb(matrice, 4, 4);
		break;
		case 11:
			contur_11(matrice, i, j);
			print_matrix_pixel_rgb(matrice, 4, 4);
		break;
		case 12:
			contur_12(matrice, i, j);
			print_matrix_pixel_rgb(matrice, 4, 4);
		break;
		case 13:
			contur_13(matrice, i, j);
			print_matrix_pixel_rgb(matrice, 4, 4);
		break;
		case 14:
			contur_14(matrice, i, j);
			print_matrix_pixel_rgb(matrice, 4, 4);
		break;
		case 15:
			contur_15(matrice, i, j);
			print_matrix_pixel_rgb(matrice, 4, 4);
		break;
		}
	}
}

// Construieste in matrice imaginea dupa algoritmul MARCH
void build_march(pixel_t **matrice, int i, int j, int nr_contur)
{
	switch (nr_contur) {
	case 0:
		contur_0(matrice, i * 4,  j * 4);
		break;
	case 1:
		contur_1(matrice, i * 4,  j * 4);
		break;
	case 2:
		contur_2(matrice, i * 4,  j * 4);
		break;
	case 3:
		contur_3(matrice, i * 4,  j * 4);
		break;
	case 4:
		contur_4(matrice, i * 4,  j * 4);
		break;
	case 5:
		contur_5(matrice, i * 4,  j * 4);
		break;
	case 6:
		contur_6(matrice, i * 4,  j * 4);
		break;
	case 7:
		contur_7(matrice, i * 4,  j * 4);
		break;
	case 8:
		contur_8(matrice, i * 4,  j * 4);
		break;
	case 9:
		contur_9(matrice, i * 4,  j * 4);
		break;
	case 10:
		contur_10(matrice, i * 4,  j * 4);
		break;
	case 11:
		contur_11(matrice, i * 4,  j * 4);
		break;
	case 12:
		contur_12(matrice, i * 4,  j * 4);
		break;
	case 13:
		contur_13(matrice, i * 4,  j * 4);
		break;
	case 14:
		contur_14(matrice, i * 4,  j * 4);
		break;
	case 15:
		contur_15(matrice, i * 4,  j * 4);
		break;
	}
}

void resize_matrice(pixel_t **matrice_resize, pixel_t **matrice_initial,
					int linie, int coloana)
{
	int i, j;
	for (i = 0; i < linie; i++) {
		for (j = 0; j < coloana; j++) {
			matrice_resize[4 * i][4 * j] = matrice_initial[i][j];
			matrice_resize[4 * i][4 * j + 1] = matrice_initial[i][j];
			matrice_resize[4 * i][4 * j + 2] = matrice_initial[i][j];
			matrice_resize[4 * i][4 * j + 3] = matrice_initial[i][j];
			matrice_resize[4 * i + 1][4 * j] = matrice_initial[i][j];
			matrice_resize[4 * i + 1][4 * j + 1] = matrice_initial[i][j];
			matrice_resize[4 * i + 1][4 * j + 2] = matrice_initial[i][j];
			matrice_resize[4 * i + 1][4 * j + 3] = matrice_initial[i][j];
			matrice_resize[4 * i + 2][4 * j] = matrice_initial[i][j];
			matrice_resize[4 * i + 2][4 * j + 1] = matrice_initial[i][j];
			matrice_resize[4 * i + 2][4 * j + 2] = matrice_initial[i][j];
			matrice_resize[4 * i + 2][4 * j + 3] = matrice_initial[i][j];
			matrice_resize[4 * i + 3][4 * j] = matrice_initial[i][j];
			matrice_resize[4 * i + 3][4 * j + 1] = matrice_initial[i][j];
			matrice_resize[4 * i + 3][4 * j + 2] = matrice_initial[i][j];
			matrice_resize[4 * i + 3][4 * j + 3] = matrice_initial[i][j];
		}
	}
}

// Calculeaza valoarea grid-ului binar rezultat dupa thresholding
int valoare_grid(int i, int j, int linie, int coloana, int **grid)
{
	int val = 0;
	val = val + grid[i][j] * 8;
	if (i + 1 < linie / 4 + 1 && j < coloana / 4 + 1)
		val = val + grid[i + 1][j] * 1;
	if (i + 1 < linie / 4 + 1 && j + 1 < coloana / 4 + 1)
		val = val + grid[i + 1][j + 1] * 2;
	if (j + 1 < coloana / 4 + 1)
		val = val + grid[i][j + 1] * 4;
	return val;
}

// Aloca dinamic o matrice de tipul pixel_t cu height linii si rows coloane
void alocare_matrice_pixel(pixel_t ***matrice, int linie, int coloana)
{
	*matrice = (pixel_t **)malloc((linie) * sizeof(pixel_t *));
	if (!(*matrice)) {
		fprintf(stderr, "malloc() failed");
		return;
	}
	int i;
	for (i = 0; i < linie; i++) {
		(*matrice)[i] = (pixel_t *)calloc((coloana), sizeof(pixel_t));
		if (!(*matrice)) {
			fprintf(stderr, "malloc() failed");
			while (--i >= 0) {
				free((*matrice)[i]);
			}
			free(*matrice);
			*matrice = NULL;
			return;
		}
	}
}

// Aloca dinamic o matrice de tipul int cu height linii si rows coloane
void alocare_matrice_int(int ***matrice, int linie, int coloana)
{
	*matrice = (int **)malloc((linie) * sizeof(int *));
	if (!(*matrice)) {
		fprintf(stderr, "malloc() failed");
		return;
	}
	int i;
	for (i = 0; i < linie; i++) {
		(*matrice)[i] = (int *)calloc((coloana), sizeof(int));
		if (!(*matrice)) {
			fprintf(stderr, "malloc() failed");
			while (--i >= 0) {
				free((*matrice)[i]);
			}
			free(*matrice);
			*matrice = NULL;
			return;
		}
	}
}

void print_matrix_int(int **matrix, int linie, int coloana)
{
	int i, j;
	for (i = 0; i < linie; i++) {
		for (j = 0; j < coloana; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

// Rezolva instructiunea READ din matrice, returneaza -1 daca este vreo eroare
// la citire sau 0 daca imaginea este citita cu succes
int read_matrice(pixel_t ***matrice_poza, char *format, int *latime,
				 int *inaltime, int *max_intens)
{
	if (*matrice_poza)
		free_matrice_p(*matrice_poza, *inaltime + 1);
	scanf(" %s", format);
	if (strcmp(format, "P3") != 0) {
		printf("Eroare: trebuie sa fie P3\n");
		return -1;
	}
	scanf("%d%d%d", inaltime, latime, max_intens);
	if (*max_intens > 255 || *max_intens < 0) {
		printf("Eroare: trebuie sa fie P3\n");
		return -1;
	}
	alocare_matrice_pixel(matrice_poza, *inaltime + 1, *latime + 1);
		if (!*matrice_poza)
			return -1;
	int ct = 0, i, j;
	for (i = 0; i < *inaltime; i++) {
		for (j = 0; j < *latime; j++) {
			if (scanf("%d", &(*matrice_poza)[i][j].r) != 1)
				break;
			scanf("%d%d", &(*matrice_poza)[i][j].g, &(*matrice_poza)[i][j].b);
			ct++;
			if ((*matrice_poza)[i][j].r > *max_intens ||
				(*matrice_poza)[i][j].g > *max_intens ||
				(*matrice_poza)[i][j].b > *max_intens) {
				printf("Eroare: valoare pixel necorespunzatoare\n");
				free_matrice_p(*matrice_poza, *inaltime + 1);
				return -1;
			}
		}
	}
	if (ct < (*inaltime) * (*latime)) {
		printf("Eroare: eroare citire pixeli\n");
		free_matrice_p(*matrice_poza, *inaltime + 1);
		return -1;
	}
	printf("Imagine citita cu succes [%d-%d]\n", *latime, *inaltime);
	return 0;
}

int main(void)
{
	char instructiune[20], format[2];
	int latime, inaltime, max_intens;
	pixel_t **matrice_poza = NULL;
	while (1) {
		scanf(" %s", instructiune);
		if (strcmp(instructiune, "READ") == 0) {
			if (read_matrice(&matrice_poza, format, &latime, &inaltime,
							 &max_intens) == -1)
				return 0;
		} else if (strcmp(instructiune, "WRITE") == 0) {
			printf("P3\n");
			printf("%d %d\n", latime, inaltime);
			printf("%d\n", max_intens);
			print_matrix_pixel_rgb(matrice_poza, inaltime, latime);
		} else if (strcmp(instructiune, "EXIT") == 0) {
			free_matrice_p(matrice_poza, inaltime + 1);
			printf("Gigel a terminat\n");
				break;
		} else if (strcmp(instructiune, "GRID") == 0) {
			int **matrice_luminozitate = NULL;
			alocare_matrice_int(&matrice_luminozitate, inaltime / 4 + 1,
								latime / 4 + 1);
			if (!matrice_luminozitate)
				return -1;
			calcul_grid(matrice_luminozitate, inaltime, latime, matrice_poza);
			printf("Grid calculat cu succes [%d-%d]\n", inaltime / 4,
				   latime / 4);
			print_matrix_int(matrice_luminozitate, inaltime / 4, latime / 4);
			free_matrice_int(matrice_luminozitate, inaltime / 4 + 1);
		} else if (strcmp(instructiune, "INIT_CONTUR") == 0) {
			pixel_t **lookup_matrix = NULL;
			alocare_matrice_pixel(&lookup_matrix, 4, 4);
			if (!lookup_matrix)
				return -1;
			print_lookup(lookup_matrix, 0, 0);
			free_matrice_p(lookup_matrix, 4);
		} else if (strcmp(instructiune, "RESIZE") == 0) {
			int i, j;
			pixel_t **poza_initial = NULL;
			alocare_matrice_pixel(&poza_initial, inaltime, latime);
			if (!poza_initial)
				return -1;
			for (i = 0; i < inaltime; i++)
				for (j = 0; j < latime; j++)
					poza_initial[i][j] = matrice_poza[i][j];
			free_matrice_p(matrice_poza, inaltime + 1);
			alocare_matrice_pixel(&matrice_poza, 4 * inaltime + 1,
								  4 * latime + 1);
			if (!matrice_poza)
				return -1;
			resize_matrice(matrice_poza, poza_initial, inaltime, latime);
			free_matrice_p(poza_initial, inaltime);
			inaltime *= 4;
			latime *= 4;
			printf("Imagine redimensionata cu succes [%d-%d]\n", inaltime,
				   latime);
		} else if (strcmp(instructiune, "MARCH") == 0) {
			int **grid = NULL, i, j;
			alocare_matrice_int(&grid, inaltime / 4 + 1, latime / 4 + 1);
			calcul_grid(grid, inaltime, latime, matrice_poza);
			for (i = 0; i < inaltime / 4; i++) {
				for (j = 0; j < latime / 4; j++) {
					int nr = valoare_grid(i, j, inaltime, latime, grid);
					build_march(matrice_poza, i, j, nr);
				}
			}
			printf("Marching Squares aplicat cu succes [%d-%d]\n", inaltime,
				   latime);
			free_matrice_int(grid, inaltime / 4 + 1);
		} else {
			printf("Instructiune invalida.\n");
		}
	}
	return 0;
}
