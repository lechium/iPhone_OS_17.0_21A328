//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CMDrawingAction : NSObject
{
    int _type;	// 8 = 0x8
    id _value;	// 16 = 0x10
    float _floatValue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004616fc
- (id)description;	// IMP=0x000000000046158f
- (float)floatValue;	// IMP=0x000000000010e3f0
- (id)value;	// IMP=0x000000000010a526
- (int)type;	// IMP=0x000000000010a51d
- (void)dealloc;	// IMP=0x000000000010a67b
- (id)initWithType:(int)arg1 andFloatValue:(float)arg2;	// IMP=0x000000000010de9a
- (id)initWithType:(int)arg1 andValue:(id)arg2;	// IMP=0x0000000000107887

@end

