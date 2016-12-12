import peasy.*;

float x = 0.01, y = 0, z = 0;
float sigma = 12, rho = 28, beta = 8/3;

ArrayList<PVector> points = new ArrayList<PVector>();

PeasyCam cam;

int cycle = 0;

void setup() {
    size(800,600,P3D);
    colorMode(HSB);
    strokeWeight(0.1);
    frameRate(120);
    cam = new PeasyCam(this, 100);
}

void draw() {
    cycle += 1;
    background(0);
    float dt = 0.005;
    float dx = (sigma*(y-x))*dt;
    float dy = (x*(rho-z)-y)*dt;
    float dz = (x*y-beta*z)*dt;
    x += dx;
    y += dy;
    z += dz;

    points.add(new PVector(x,y,z));
    if(cycle > 1500) {
        points.remove(0);
    }

    translate(width/2,height/2);
    scale(20);
    noFill();

    float hu = 0;
    beginShape();
    for(PVector v : points) {
        vertex(v.x,v.y,v.z);
        stroke(hu,255,256);
        hu += 0.1;
        if(hu > 255) {
            hu -= 0.2;
        } else if(hu < 0) {
            hu += 0.2;
        }
    }
    endShape();
}
