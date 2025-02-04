#include "pico/stdlib.h"
#include "hardware/timer.h" 
#include <stdio.h>         

volatile uint8_t cont=1;
volatile uint8_t tempo_sinal=2;
volatile uint8_t leds[3]={13,12,11};

void init_leds();
bool muda_sinal(struct repeating_timer *t);

int main(){

  stdio_init_all();
  init_leds();

  struct repeating_timer timer;

  add_repeating_timer_ms(3000,muda_sinal, NULL, &timer);

  gpio_put(leds[0],1);

  while(1){
    sleep_ms(1000);
    if(tempo_sinal == 3){
      printf("\nFaltam %d segundos para o sinal mudar\n", tempo_sinal);
    }else{
      printf("Faltam %d segundos para o sinal mudar\n", tempo_sinal);
    }

    tempo_sinal--;
  }
}

void init_leds(){
  for(uint8_t i=0;i<3;i++){
    gpio_init(leds[i]);
    gpio_set_dir(leds[i],GPIO_OUT);
  }
}

bool muda_sinal(struct repeating_timer *t){
  for(uint8_t i=0;i<3;i++){
    gpio_put(leds[i],0);
  }
  gpio_put(leds[cont],1);
  cont++;
  if(cont>2)cont=0;

  tempo_sinal=3;

  return 1;
}