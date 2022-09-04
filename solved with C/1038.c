// Snack
#include <stdio.h>
#include <math.h>

int main(void) {
  
  int code;
  float product_qntd;
  float final_price;

  int hot_dog = 4; //1
  float x_salad = 4.50; // 2
  int x_bacon = 5; // 3
  int simple_toast = 2; // 4
  float softdrink = 1.50; // 5
  
  scanf("%d", &code);
  scanf("%f", &product_qntd);

  if(code == 1){
    final_price = product_qntd * hot_dog;
    printf("Total: R$ %.2f\n", final_price);
  }
  
  else if(code == 2){
    final_price = product_qntd * x_salad;
    printf("Total: R$ %.2f\n", final_price);
  }
  
  else if(code == 3){
    final_price = product_qntd * x_bacon;
    printf("Total: R$ %.2f\n", final_price);
  }

  else if(code == 4){
    final_price = product_qntd * simple_toast;
    printf("Total: R$ %.2f\n", final_price);
  }

  else if(code == 5){
    final_price = product_qntd * softdrink;
    printf("Total: R$ %.2f\n", final_price);
  }
  return 0;
}