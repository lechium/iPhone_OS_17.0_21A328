//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CTCapability : NSObject
{
    _Bool _capabilityFetched;	// 8 = 0x8
    _Bool _enabledFetched;	// 9 = 0x9
    NSString *_capabilityName;	// 16 = 0x10
    NSMutableDictionary *_capability;	// 24 = 0x18
    NSMutableDictionary *_capabilityInfo;	// 32 = 0x20
    NSMutableDictionary *_enabledDict;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000006437
@property(retain) NSMutableDictionary *enabledDict; // @synthesize enabledDict=_enabledDict;
@property(retain) NSMutableDictionary *capabilityInfo; // @synthesize capabilityInfo=_capabilityInfo;
@property(retain) NSMutableDictionary *capability; // @synthesize capability=_capability;
@property _Bool enabledFetched; // @synthesize enabledFetched=_enabledFetched;
@property _Bool capabilityFetched; // @synthesize capabilityFetched=_capabilityFetched;
@property(retain, nonatomic) NSString *capabilityName; // @synthesize capabilityName=_capabilityName;
- (void)reset;	// IMP=0x00000000000062a1
- (id)slotNum:(long long)arg1;	// IMP=0x0000000000006288
- (_Bool)getEnabledForSlotID:(long long)arg1;	// IMP=0x00000000000061e7
- (void)setEnabled:(_Bool)arg1 forSlotID:(long long)arg2;	// IMP=0x0000000000006141
- (_Bool)getCapabilityInfo:(id)arg1 forSlotID:(long long)arg2;	// IMP=0x0000000000006061
- (void)setCapabilityInfo:(id)arg1 forSlotID:(long long)arg2;	// IMP=0x0000000000005fc8
- (_Bool)getCapabilityForSlotID:(long long)arg1;	// IMP=0x0000000000005f27
- (void)setCapable:(_Bool)arg1 forSlotID:(long long)arg2;	// IMP=0x0000000000005e81
- (id)initWithCapabilityName:(id)arg1;	// IMP=0x0000000000005e06

@end
