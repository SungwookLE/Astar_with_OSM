#include <stdio.h>

//  c++ class concept is something that expands from struct concept in c language.. so let's practice !
typedef struct{
    int struct_k;
    int struct_j;
} structstruct_;
structstruct_ st;

void func_ex(structstruct_ *some);

int main(){
    
    st.struct_k = 5;
    st.struct_j =0;
    
    func_ex(&st);

    printf("struct_j: %d\n", st.struct_j);

    return 0;
}

void func_ex(structstruct_ *some){
    some->struct_j = some->struct_k+5;
    return;
}