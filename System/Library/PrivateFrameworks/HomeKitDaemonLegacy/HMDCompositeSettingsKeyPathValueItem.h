//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDCompositeSettingValue, NSString;

__attribute__((visibility("hidden")))
@interface HMDCompositeSettingsKeyPathValueItem : NSObject
{
    NSString *_keyPath;	// 8 = 0x8
    HMDCompositeSettingValue *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000059b0e5
@property(readonly, copy) HMDCompositeSettingValue *value; // @synthesize value=_value;
@property(readonly, copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)initWithKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x000000000059b024

@end

