//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MANAutoAssetControlStatisticsBySize : NSObject
{
    long long _patchedAssets;	// 8 = 0x8
    long long _patchedBytes;	// 16 = 0x10
    long long _fullAssets;	// 24 = 0x18
    long long _fullBytes;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002d266
@property(nonatomic) long long fullBytes; // @synthesize fullBytes=_fullBytes;
@property(nonatomic) long long fullAssets; // @synthesize fullAssets=_fullAssets;
@property(nonatomic) long long patchedBytes; // @synthesize patchedBytes=_patchedBytes;
@property(nonatomic) long long patchedAssets; // @synthesize patchedAssets=_patchedAssets;
- (id)summary;	// IMP=0x000000000002d3a1
- (id)description;	// IMP=0x000000000002d313
- (id)copy;	// IMP=0x000000000002d26e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002d1aa
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002d0ef
- (id)initWithInitialValue:(long long)arg1;	// IMP=0x000000000002d0a6
- (id)init;	// IMP=0x000000000002d092

@end
