//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct _MRHIDTouchEvent {
    union _MRHIDPoint _field1;
    unsigned int _field2;
    unsigned long long _field3;
    unsigned int _field4;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    double timestamp;
    double sampleRate;
} CDStruct_ace97b7a;

typedef struct {
    float width;
    float height;
} CDStruct_643d22a7;

#pragma mark Named Unions

union _MRHIDPoint {
    CDStruct_643d22a7 _field1;
    float _field2[2];
};

union _MRHIDSize {
    CDStruct_643d22a7 ;
    float data[2];
};
