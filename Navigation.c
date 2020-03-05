#include <stdio.h>
#include <string.h>
int main()  {
    int x,y,movement_axis,turn;
    char trash[10],text_data[10],nav_data[10];
    x=0;
    y=0;
    scanf("%s %s",trash,text_data);
    if (strcmp(text_data,"EAST")==0)  {
        movement_axis=-1;
        turn=1;
    }
    else if (strcmp(text_data,"NORTH")==0)  {
        movement_axis=1;
        turn=1;
    }
    else if (strcmp(text_data,"SOUTH")==0)  {
        movement_axis=1;
        turn=-1;
    }
    else if (strcmp(text_data,"WEST")==0)  {
        movement_axis=-1;
        turn=-1;
    }
    while(1)  {
        scanf("%s",text_data);
        if (strcmp(text_data,"Take")==0)  {
            scanf("%s %s",trash,nav_data);
            if (strcmp(nav_data,"NEXT")==0)  {
                if (movement_axis==1)  {
                    if (y%1000!=0)  {
                        while (y%1000!=0)  {
                            y=y+turn*100;
                        }
                    }
                    else  {
                        y=y+turn*1000;
                    }
                }
                else  {
                    if (x%1000!=0)  {
                        while (x%1000!=0)  {
                          x=x+turn*100;
                        }
                    }
                    else  {
                        x=x+turn*1000;
                    }
                }
                
            }
            else  {
                if (movement_axis==1)  {
                    if (y%1000!=0)  {
                        while (y%1000!=0)  {
                            y=y+turn*100;
                        }
                        y=y+((nav_data[0]-'0')-1)*turn*1000;
                    }
                    else  {
                        y=y+(nav_data[0]-'0')*turn*1000;
                    }
                }
                else  {
                    if (x%1000!=0)  {
                        while (x%1000!=0)  {
                            x=x+turn*100;
                        }
                        x=x+((nav_data[0]-'0')-1)*turn*1000;
                    }
                    else  {
                        x=x+(nav_data[0]-'0')*turn*1000;
                    }
                }              
            }
            scanf("%s",nav_data);
            if (movement_axis==1)  {
                if (strcmp(nav_data,"LEFT")==0)  {
                    turn=(-1)*turn;
                }
                movement_axis=(-1)*movement_axis;
            }
            else  { 
                if (strcmp(nav_data,"RIGHT")==0)  {
                    turn=(-1)*turn;
                }
                movement_axis=(-1)*movement_axis;
            }
        }
        else if (strcmp(text_data,"Go")==0)  {
            scanf("%s %s %s %s",trash,trash,trash,nav_data);
            if (nav_data[3]=='k')  {
                if (movement_axis==1)  {
                    y=y+turn*((nav_data[0]-'0')*1000 + (nav_data[2]-'0')*100);
                }
                else  {
                    x=x+turn*((nav_data[0]-'0')*1000 + (nav_data[2]-'0')*100);
                }
            }
            else if (nav_data[3]=='m')  {
                if (movement_axis==1)  {
                    y=y+turn*((nav_data[0]-'0')*100);
                }
                else  {
                    x=x+turn*((nav_data[0]-'0')*100);
                }
            }
        }
        else if (strcmp(text_data,"Turn")==0)  {
            turn=(-1)*turn;
            scanf("%s",trash);
        }
        else if (strcmp(text_data,"You")==0)  {
            break;
        }
    }
    printf("Your position: [%d,%d] \n",x,y);
}
