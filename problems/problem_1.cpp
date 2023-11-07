void problemSolution1(float consumed_water) {
    float cost;
    // write your code here

    if (consumed_water > 30){
        cost += 12;
        consumed_water -= 30;
        if (consumed_water > 20){
            cost += 2.4;
            consumed_water -= 20;
            if (consumed_water > 10){
                cost += 14;
                consumed_water -= 10;
                cost += consumed_water*(1.5);
            } else {
                cost += consumed_water*(1.4);
            }

        } else {
            cost += consumed_water*(0.12);
        }
    } else {
        cost += consumed_water*(0.4);
    }

    cost += 13;
}
