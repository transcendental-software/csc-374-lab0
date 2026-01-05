#ifdef Z
# define F 32
#else
# define F 18
#endif
#define T(a) ((a) + 8)

int main () {
  return T (F);
}
