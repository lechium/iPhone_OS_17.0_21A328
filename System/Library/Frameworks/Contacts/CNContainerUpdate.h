//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContainerPropertyDescription, NSString;

__attribute__((visibility("hidden")))
@interface CNContainerUpdate : NSObject
{
    CNContainerPropertyDescription *_property;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

+ (id)updateWithValue:(id)arg1 property:(id)arg2;	// IMP=0x0010000000125fc3
- (void).cxx_destruct;	// IMP=0x0000000000126232
- (id)value;	// IMP=0x0000000000126224
- (void)applyToMutableContainer:(id)arg1;	// IMP=0x00000000001261b8
- (id)property;	// IMP=0x00000000001261aa
@property(readonly, copy) NSString *description;
- (id)initWithProperty:(id)arg1 value:(id)arg2;	// IMP=0x0000000000126031

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
