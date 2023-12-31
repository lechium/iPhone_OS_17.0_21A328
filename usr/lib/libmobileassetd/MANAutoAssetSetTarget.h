//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MANAutoAssetSetTarget : NSObject
{
    NSString *_minTargetOSVersion;	// 8 = 0x8
    NSString *_maxTargetOSVersion;	// 16 = 0x10
    NSArray *_autoAssetEntries;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001985e9
- (void).cxx_destruct;	// IMP=0x0000000000198bf0
@property(retain, nonatomic) NSArray *autoAssetEntries; // @synthesize autoAssetEntries=_autoAssetEntries;
@property(retain, nonatomic) NSString *maxTargetOSVersion; // @synthesize maxTargetOSVersion=_maxTargetOSVersion;
@property(retain, nonatomic) NSString *minTargetOSVersion; // @synthesize minTargetOSVersion=_minTargetOSVersion;
- (id)summary;	// IMP=0x0000000000198ad5
- (id)description;	// IMP=0x0000000000198a1b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001986a4
- (id)copy;	// IMP=0x00000000001985f1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000198506
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019833b
- (id)initForMinTargetOSVersion:(id)arg1 toMaxTargetOSVersion:(id)arg2 asEntriesWhenTargeting:(id)arg3;	// IMP=0x0000000000198283

@end

