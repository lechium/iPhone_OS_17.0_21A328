//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADCharacterProperties;

__attribute__((visibility("hidden")))
@interface OADTextRun : NSObject
{
    OADCharacterProperties *mProperties;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003296db
- (id)description;	// IMP=0x000000000032969d
- (_Bool)isSimilarToTextRun:(id)arg1;	// IMP=0x0000000000329648
- (void)removeUnnecessaryOverrides;	// IMP=0x0000000000032c88
- (void)setProperties:(id)arg1;	// IMP=0x0000000000329637
- (id)properties;	// IMP=0x000000000002c45d
- (unsigned long long)characterCount;	// IMP=0x000000000032962f
- (_Bool)isEmpty;	// IMP=0x0000000000329627
- (id)init;	// IMP=0x000000000002c3e9

@end

