bool equalsArray(int *numbers1,int *numbers2,int length){
    int counter = 0;
    for (int i = 0; i < length; i++)
    {
        if (*(numbers1 + i) != *(numbers2 + i)){
            break;
        }
        else{
            counter++;
        }
    }
    
    if (counter == length){
        return true;
    }
    return false;

}