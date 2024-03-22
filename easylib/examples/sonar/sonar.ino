#include <easylib.h>
void setup {
    serialinit(9600);
    sonar_init(12,13,11);
}
void loop {
int distance = sonar(12,13,11);
println(String(distance));
}
