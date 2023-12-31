//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDTimeBasedFlagNameSpecifier : NSObject
{
    NSString *_flagName;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000004bfabd
+ (id)specifierWithFlagName:(id)arg1;	// IMP=0x00100000004bfa70
- (void).cxx_destruct;	// IMP=0x00000000004bfa60
@property(readonly, nonatomic) NSString *flagName; // @synthesize flagName=_flagName;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToGroupNameSpecifier:(id)arg1;	// IMP=0x00000000004bf931
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004bf856
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004bf84b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004bf7db
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004bf74a
- (id)initWithFlagName:(id)arg1;	// IMP=0x00000000004bf6df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

