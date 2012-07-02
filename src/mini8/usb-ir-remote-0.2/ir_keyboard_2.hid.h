

char ReportDescriptor[147] = {
    0x05, 0x0c,                    // USAGE_PAGE (Consumer Devices)
    0x09, 0x01,                    // USAGE (Consumer Control)
    0xa1, 0x01,                    // COLLECTION (Application)
    0x85, 0x01,                    //   REPORT_ID (1)
    0x05, 0x0c,                    //   USAGE_PAGE (Consumer Devices)
    0x09, 0xb5,                    //   USAGE (Scan Next Track)
    0x09, 0xb6,                    //   USAGE (Scan Previous Track)
    0x09, 0xb4,                    //   USAGE (Rewind)
    0x09, 0xb0,                    //   USAGE (Play)
    0x09, 0xb3,                    //   USAGE (Fast Forward)
    0x09, 0xb1,                    //   USAGE (Pause)
    0x09, 0xb2,                    //   USAGE (Record)
    0x09, 0xb7,                    //   USAGE (Stop)
    0x09, 0x40,                    //   USAGE (Menu)
    0x09, 0x46,                    //   USAGE (Menu Escape)
    0x09, 0x42,                    //   USAGE (Menu Up)
    0x09, 0x43,                    //   USAGE (Menu Down)
    0x09, 0x44,                    //   USAGE (Menu Left)
    0x09, 0x45,                    //   USAGE (Menu Right)
    0x09, 0x41,                    //   USAGE (Menu  Pick)
    0x09, 0x48,                    //   USAGE (Menu Value Decrease)
    0x09, 0x47,                    //   USAGE (Menu Value Increase)
    0x09, 0xea,                    //   USAGE (Volume Down)
    0x09, 0xe9,                    //   USAGE (Volume Up)
    0x09, 0xe2,                    //   USAGE (Mute)
    0x09, 0x9d,                    //   USAGE (Channel Decrement)
    0x09, 0x9c,                    //   USAGE (Channel Increment)
    0x09, 0x62,                    //   USAGE (Closed Caption Select)
    0x09, 0x61,                    //   USAGE (Closed Caption)
    0x15, 0x01,                    //   LOGICAL_MINIMUM (1)
    0x25, 0x10,                    //   LOGICAL_MAXIMUM (16)
    0x75, 0x08,                    //   REPORT_SIZE (8)
    0x95, 0x01,                    //   REPORT_COUNT (1)
    0x81, 0x00,                    //   INPUT (Data,Ary,Abs)
    0xc0,                          // END_COLLECTION
    0x05, 0x01,                    // USAGE_PAGE (Generic Desktop)
    0x09, 0x06,                    // USAGE (Keyboard)
    0xa1, 0x01,                    // COLLECTION (Application)
    0x85, 0x02,                    //   REPORT_ID (2)
    0x05, 0x07,                    //   USAGE_PAGE (Keyboard)
    0x19, 0x00,                    //   USAGE_MINIMUM (Reserved (no event indicated))
    0x29, 0x65,                    //   USAGE_MAXIMUM (Keyboard Application)
    0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
    0x25, 0x65,                    //   LOGICAL_MAXIMUM (101)
    0x95, 0x01,                    //   REPORT_COUNT (1)
    0x75, 0x07,                    //   REPORT_SIZE (7)
    0x81, 0x00,                    //   INPUT (Data,Ary,Abs)
    0x09, 0xe1,                    //   USAGE (Keyboard LeftShift)
    0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
    0x25, 0x01,                    //   LOGICAL_MAXIMUM (1)
    0x95, 0x01,                    //   REPORT_COUNT (1)
    0x75, 0x01,                    //   REPORT_SIZE (1)
    0x81, 0x02,                    //   INPUT (Data,Var,Abs)
    0xc0,                          // END_COLLECTION
    0x05, 0x01,                    // USAGE_PAGE (Generic Desktop)
    0x09, 0x00,                    // USAGE (Undefined)
    0xa1, 0x00,                    // COLLECTION (Physical)
    0x75, 0x10,                    //   REPORT_SIZE (16)
    0x95, 0x01,                    //   REPORT_COUNT (1)
    0x85, 0x7c,                    //   REPORT_ID (124)
    0x09, 0x00,                    //   USAGE (Undefined)
    0xb1, 0x02,                    //   FEATURE (Data,Var,Abs)
    0x09, 0x00,                    //   USAGE (Undefined)
    0x85, 0x7d,                    //   REPORT_ID (125)
    0xb1, 0x02,                    //   FEATURE (Data,Var,Abs)
    0x75, 0x08,                    //   REPORT_SIZE (8)
    0x95, 0x44,                    //   REPORT_COUNT (68)
    0x09, 0x00,                    //   USAGE (Undefined)
    0x85, 0x7e,                    //   REPORT_ID (126)
    0xb1, 0x02,                    //   FEATURE (Data,Var,Abs)
    0x09, 0x00,                    //   USAGE (Undefined)
    0x95, 0x09,                    //   REPORT_COUNT (9)
    0x85, 0x7f,                    //   REPORT_ID (127)
    0xb1, 0x02,                    //   FEATURE (Data,Var,Abs)
    0xc0                           // END_COLLECTION
};

