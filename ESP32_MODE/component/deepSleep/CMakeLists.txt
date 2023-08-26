idf_component_register(SRCS "deep_sleep.c"
                            "gpio_wakeup.c"
                            "ext_wakeup.c"
                            "touch_wakeup.c"
                    INCLUDE_DIRS ".")
# set(app_src pms7003.c)
# set(pre_req driver log)
# idf_component_register(SRCS ${app_src}
#                     INCLUDE_DIRS "."
#                     REQUIRES ${pre_req})
