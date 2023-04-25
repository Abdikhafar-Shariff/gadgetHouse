#ifndef VEC2_H_INCLUDED
#define VEC2_H_INCLUDED

/*
    v stands for vector 
    p stands for pointer
    s stands for scalar
*/

typedef struct
{
    float x,y;
} vec2;

#define vec2(a,b) (vec2){a,b}

//  a+=b
void vpadd(vec2* pA, vec2 b);

//  c = a + b
vec2 vsum(vec2 a, vec2 b);

//  a-=b
void vpsub(vec2* pA, vec2 b);

//  c = a - b
vec2 vdiff(vec2 a, vec2 b);

//  c = {a.x * t, a.y * t}
vec2 vsmul(vec2 a, float t);

//  c = a * b (prod for product)
vec2 vprod(vec2 a, vec2 b);

//  c = a / b 
vec2 vquo(vec2 a, vec2 b);

//  dot product 
float dot(vec2 a, vec2 b);

//  c = a/|a|
vec2 normalize(vec2 a);

vec2 vmin(vec2 a, vec2 b);

vec2 vmax(vec2 a, vec2 b);

#endif