int data[N] = { /* Examples */ };
  int flag = 1;
  int i;

  while(flag) {
    flag = 0;
    for (i = 0; i < N-1; i += 2) { /* Pair1 */
      if (data[i] > data[i+1]) {
        swap(&data[i], &data[i+1]);
        flag = 1;
      }
    }
    for (i = 1;i < N-1;i += 2) { /* Pair2 */
      if (data[i] > data[i+1]) {
        swap(&data[i], &data[i+1]);
        flag = 1;
      }
    }
  }