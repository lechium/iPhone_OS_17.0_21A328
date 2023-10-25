//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAutoAssetSelector, MADAutoSetPolicy;

__attribute__((visibility("hidden")))
@interface MADAutoAssetScheduledJob : NSObject
{
    _Bool _pushedJob;	// 8 = 0x8
    _Bool _requiringRetry;	// 9 = 0x9
    _Bool _setJob;	// 10 = 0xa
    MAAutoAssetSelector *_assetSelector;	// 16 = 0x10
    long long _intervalSecs;	// 24 = 0x18
    long long _remainingSecs;	// 32 = 0x20
    MADAutoSetPolicy *_setPolicy;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000891ac
- (void).cxx_destruct;	// IMP=0x000000000008954c
@property(retain, nonatomic) MADAutoSetPolicy *setPolicy; // @synthesize setPolicy=_setPolicy;
@property(nonatomic) _Bool setJob; // @synthesize setJob=_setJob;
@property(nonatomic) _Bool requiringRetry; // @synthesize requiringRetry=_requiringRetry;
@property(nonatomic) _Bool pushedJob; // @synthesize pushedJob=_pushedJob;
@property(nonatomic) long long remainingSecs; // @synthesize remainingSecs=_remainingSecs;
@property(nonatomic) long long intervalSecs; // @synthesize intervalSecs=_intervalSecs;
@property(retain, nonatomic) MAAutoAssetSelector *assetSelector; // @synthesize assetSelector=_assetSelector;
- (id)summary;	// IMP=0x00000000000892d8
- (id)description;	// IMP=0x00000000000892c6
- (id)copy;	// IMP=0x00000000000891b4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008904d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000088efc
- (id)initForAssetSelector:(id)arg1 withActivityInterval:(long long)arg2 forPushedJob:(_Bool)arg3 forSetJob:(_Bool)arg4 withSetPolicy:(id)arg5 requiringRetry:(_Bool)arg6;	// IMP=0x0000000000088e31
- (id)initForAssetSelector:(id)arg1 withActivityInterval:(long long)arg2 forPushedJob:(_Bool)arg3 forSetJob:(_Bool)arg4 requiringRetry:(_Bool)arg5;	// IMP=0x0000000000088e13
- (id)initForAssetSelector:(id)arg1 withActivityInterval:(long long)arg2 forPushedJob:(_Bool)arg3 requiringRetry:(_Bool)arg4;	// IMP=0x0000000000088df3
- (id)initForAssetSelector:(id)arg1 withActivityInterval:(long long)arg2 forPushedJob:(_Bool)arg3;	// IMP=0x0000000000088dd5

@end
