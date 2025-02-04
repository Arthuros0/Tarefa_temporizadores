#include "pico/stdlib.h"

#define BUTTON 5

volatile uint8_t leds[3]={11,12,13};
volatile uint8_t cont=0;

void init_leds();
void init_button();
void liga_leds();
int64_t turn_off_callback(alarm_id_t id, void *user_data);

int main(){

  init_leds();
  init_button();

  while(1){

    if(!gpio_get(BUTTON) && !gpio_get(leds[2])){
      liga_leds();

      add_alarm_in_ms(3000,turn_off_callback,NULL,false);
    }
    sleep_ms(10);
  }
}

void init_leds(){
  for(uint8_t i=0;i<3;i++){
    gpio_init(leds[i]);
    gpio_set_dir(leds[i],GPIO_OUT);
  }
}

void init_button(){
  gpio_init(BUTTON);
  gpio_set_dir(BUTTON, GPIO_IN);
  gpio_pull_up(BUTTON);
}

void liga_leds(){
  for(uint8_t i=0;i<3;i++){
    gpio_put(leds[i],1);
  }
}

int64_t turn_off_callback(alarm_id_t id, void *user_data){
  gpio_put(leds[cont], 0);
  cont++;
  if(cont>2){
    cont=0;
    return 0;
  }
  return 3000000;
}