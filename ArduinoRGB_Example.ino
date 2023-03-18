int R = 9;
int G = 10;
int B = 11;
int fade_delay = 50;

void setup() {
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void led_rgb(int r, int g, int b) {
  analogWrite(R, r);
  analogWrite(G, g);
  analogWrite(B, b); 
}

void loop() {
  for(int i = 0; i <= 255; i++) {
    led_rgb(255, i, 0);
    delay(fade_delay);
  }
  for(int i = 255; i >= 0; i--) {
    led_rgb(i, 255, 0);
    delay(fade_delay);
  }
  for(int i = 0; i <= 255; i++) {
    led_rgb(0, 255, i);
    delay(fade_delay);
  }
  for(int i = 255; i >= 0; i--) {
    led_rgb(0, i, 255);
    delay(fade_delay);
  }
  for(int i = 0; i <= 255; i++) {
    led_rgb(i, 0, 255);
    delay(fade_delay);
  }
  for(int i = 255; i >= 0; i--) {
    led_rgb(255, 0, i);
    delay(fade_delay);
  }
}
