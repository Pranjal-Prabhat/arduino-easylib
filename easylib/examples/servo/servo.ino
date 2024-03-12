#include <easylib.h>
void setup() {
set(9,OUTPUT);//sets pinmode of pin 9 to output
//connect vvc to 5v and gndof servo to gnd.


}

void loop() {
for(int i = 0; i < 180; i++ ){
  servo(9,i);
}
for(i = 180; i > 0; i-- ){
servo(9,i);
}
}
