//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSMutableSettings;

__attribute__((visibility("hidden")))
@interface _SWBSActionSettings : NSObject
{
    BSMutableSettings *_mutableSettings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000e722
@property(retain, nonatomic) BSMutableSettings *mutableSettings; // @synthesize mutableSettings=_mutableSettings;
- (void)setObject:(id)arg1 forSetting:(unsigned long long)arg2;	// IMP=0x000000000000e690
- (id)bsSettings;	// IMP=0x000000000000e648
- (id)init;	// IMP=0x000000000000e5f2

@end

